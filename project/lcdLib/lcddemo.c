/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);
  //drawPixel(25, 50, COLOR_PINK);
  
//  int frow = 50, fcol = 60;
//  for(int i = -20; i < 20; i++){
//      drawPixel(fcol+ i, frow, COLOR_BLACK);
//      drawPixel(fcol, frow + i, COLOR_BLACK);
//  }

  int col = 0, row = 10, v = 1, a =1;
  while(col < 100){
    if(col >= 0 && col < screenWidth && row >= 0 && row < screenHeight){
      drawPixel(col, row, COLOR_GREEN);
    }
    col++;
    row += v;
    v += a;
  }
  //drawPixel(fcol, frow, COLOR_PINK); //focus

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
