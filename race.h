#ifndef RACE_H
#define	RACE_H
#define BORDERW    ((unsigned char)BORDER[18])
#define BORDERH    ((unsigned char)BORDER[22])
#define CARW          ((unsigned char)car[18])   //#define CARW          ((unsigned char)car[18])
#define CARH          ((unsigned char)car[22])
int count_= 0;

int playerpostion;
int r,carv;
int score;

const unsigned char car[] ={
 0x42, 0x4D, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80,
 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF,
 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xFF,

};

const unsigned char cars[] ={
 0x42, 0x4D, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x0E, 0x00, 0x00, 0xC4, 0x0E, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x80, 0xFF, 0x00, 0x80,
 0x00, 0xFF, 0x00, 0x80, 0x80, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x80, 0xFF, 0x80, 0x80, 0x00, 0xFF, 0x80, 0x80, 0x80, 0xFF, 0xC0, 0xC0, 0xC0, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF,
 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0xFF,

};

const unsigned char border[] ={
 0x42, 0x4D, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x0E, 0x00, 0x00, 0xC4, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E,
 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E,
 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E,
 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E,
 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E,
 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x0E, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF,
};




void DisplayCar(int playerpostion, int carv, int r);

#endif

