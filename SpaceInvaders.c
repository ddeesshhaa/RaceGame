#include "gpio.c"
#include "race.c"
#include "tm4c123gh6pm.h"
long long adcData;
long long m;




void Timer2_Init(unsigned long period);
void Delay100ms(unsigned long count);


int main(void){
    PortF_Init();
		
    EdgeCounter_Init();           // initialize GPIO Port F interrupt
    TExaS_Init(SSI0_Real_Nokia5110_Scope);  // set system clock to 80 MHz
    Random_Init(1);
    Nokia5110_Init();
		carv = CARH;
		playerpostion = 0;
		r = 1;
		score = 0; 
	
  while(1){
		
		if(carv > 48) {
			score +=1;
			r = rand ()%6; 
			carv = 0;
			// for new random number and restart
		}
		DisplayCar(playerpostion,carv,r);
		
		carv+=1;

			Delay100ms(1);
		
		
		if(carv > 37){
		
			if ((playerpostion == 0 && r & (1<<2)) || (playerpostion == (1.5)*CARW && r & (1<<1)) || (playerpostion == (3)*CARW && r & (1<<0))){


					Nokia5110_Clear();
					Nokia5110_SetCursor(1, 1);
					Nokia5110_OutString("GAME OVER");
					Nokia5110_SetCursor(1, 2);
					Nokia5110_OutString("your score: ");
					Nokia5110_SetCursor(1, 3);
					Nokia5110_OutUDec(score);
					Delay100ms(20);
					
					break;
		}
	}


	}
}


	

void Delay100ms(unsigned long count){
	unsigned long volatile time;
  while(count>0){
    time = 227240;
    while(time){
	  	time--;
    }
    count--;
  }
}





