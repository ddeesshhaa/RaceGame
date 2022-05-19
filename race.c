#include "race.h"
//#include "Nokia5110.h"




void DisplayCar(int playerpostion, int carv, int r){

	Nokia5110_ClearBuffer();
	
	if (r & (1<<0))
		Nokia5110_PrintBMP((3)*CARW,carv, cars, 0);
	if (r & (1<<1))
		Nokia5110_PrintBMP((1.5)*CARW,carv, cars, 0);
	if (r & (1<<2))
		Nokia5110_PrintBMP(1,carv, cars, 0);




	
		Nokia5110_PrintBMP(playerpostion, 47, car, 0); // player ship middle bottom
		
		Nokia5110_PrintBMP(0, 20, border, 0); // player ship middle bottom
		Nokia5110_PrintBMP(0,40 , border, 0); // player ship middle bottom
			
		Nokia5110_PrintBMP(73, 20, border, 0); // player ship middle bottom
		Nokia5110_PrintBMP(73,40 , border, 0); // player ship middle bottom
		Nokia5110_DisplayBuffer();     // draw buffer
		

}

 
/*end of file*/

