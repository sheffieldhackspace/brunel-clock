/**
 * checkerboard
 * Show a checkerboard pattern on the screen.
 */
#include <Arduino.h>
#include <BrunelClock.h>

BrunelClockSPI spi1(D1, D3, D5, D8);
BrunelClockSPI spi2(D0, D2, D4, D7);
BrunelClock display(&spi1, &spi2);

void setup() {
  display.begin();

  for (int i = 0; i < DISPLAY_WIDTH; i++) {
    for (int j = 0; j < DISPLAY_HEIGHT; j++) {
      display.drawPixel(i, j, (i + j) % 2);
    }
  }

  display.display();
}

void loop() {}
