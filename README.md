# FCKD|FIXD Bike Lights for Burning Man 2023

## Technical Information
The LEDs are based on a MH-ET ATtiny88 microcontroller with a 16MHz clock.
https://www.amazon.com/gp/product/B09YRT33BG/ref=ppx_yo_dt_b_asin_title_o06_s00

The lights consist of 13 pebble-style WS2812 LEDs.
https://www.amazon.com/gp/product/B01DC0ITX4/ref=ppx_yo_dt_b_asin_title_o05_s00

The LEDs pull power directly fromt he USB connection and data from pin 2.

## Programming
The lights can be reprogrammed using the [Arduino IDE](https://www.arduino.cc/en/software).
After installing the Arduino IDE, you'll need to install the ATTinyCore Universal boards package in order to upload code to the microcontroller.

The boards manager URL is:
`http://drazzy.com/package_drazzy.com_index.json`

1. File->Preferences on a PC, or Arduino->Preferences on a Mac, enter the above URL in "Additional Boards Manager URLs"
2. Tools -> Boards -> Boards Manager...
3. Select "ATTinyCore by Spence Konde" and click "Install".

Then, Tools -> Board: should be set to `ATtiny88 (Micronucleus, MH-ET t88 w/16MHz Clock`.
Finally, Tools -> tinyNeoPixel port: should be set to `Port D (pins 0~7)`.

When you want to upload your code, be sure to select Sketch -> Upload and *not* Sketch -> Upload Using Programmer.

Note that these boards do NOT have a built-in USB-to-serial adapter built-in, so they won't show up as an available port like most Arduino boards. If you're having trouble uploading your code, try using a USB2.0 hub as the boards seem to have some trouble with certain USB3.0+ ports.
