#define GPIO_PORTE_DATA_R (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DIR_R (*((volatile unsigned long *)0x40024400))
#define GPIO_PORTE_DEN_R (*((volatile unsigned long *)0x4002451C))
#define SYSCTL_RCGC2_R (*((volatile unsigned long *)0x400FE108))

void PortE_Init(void);
void delay(void);
unsigned long Active, SW12;

int main(void){
	PortE_Init();

	while(1){
		Active = GPIO_PORTE_DATA_R&0x04; // Read PE2
		SW12 = GPIO_PORTE_DATA_R&0x03; // Read PE0, PE1
		
		if(Active == 0x04 && SW12 != 0x00){ //Active or SW12 is pressed
			GPIO_PORTE_DATA_R ^= 0x10; // Toggle LED for alarm
			delay(); // make delay
		}else{
		GPIO_PORTE_DATA_R &= ~0x10; // Turn off LED or reset PE2/PE1 if SW is released
		}
	}
}

void PortE_Init(void){
	SYSCTL_RCGC2_R |= 0x10; // Activate clock for Port E
	GPIO_PORTE_DIR_R |= 0x10; // PE4 output
	GPIO_PORTE_DIR_R &= ~0x07; // PE2, PE1, PE0 input
	GPIO_PORTE_DEN_R |= 0x17; // Enable PE4, PE2, PE1, PE0
}

void delay(void){
	int counter=0;
	while(counter<450000){
		counter++;
	}
}
