/* www.learningbuz.com */
/*Impport following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

void setup() 
{

lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
lcd.backlight();//To Power ON the back light
//lcd.backlight();// To Power OFF the back light

}

void loop() 
{
//Write your code
lcd.setCursor(0,0); //Defining positon to write from first row,first column .
lcd.print("    SUVN");
delay(1000);//Delay used to give a dynamic effect
lcd.setCursor(0,1);  //Defining positon to write from second row,first column .
lcd.print("    SHREYA");
delay(8000); 

lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print("    SUVN");
lcd.setCursor(0,1);
lcd.print("    UJJWAL");
delay(8000); 
lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print("    SUVN");
lcd.setCursor(0,1);
lcd.print("    VIVEK");
delay(8000);
lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print("    SUVN");
lcd.setCursor(0,1);
lcd.print("    NIDHI");
delay(8000);
}

// I2C Scanner
// Written by Nick Gammon
// Date: 20th April 2011

/*#include <Wire.h>

void setup() {
  Serial.begin (115200);

  // Leonardo: wait for serial port to connect
  while (!Serial) 
    {
    }

  Serial.println ();
  Serial.println ("I2C scanner. Scanning ...");
  byte count = 0;
  
  Wire.begin();
  for (byte i = 8; i < 120; i++)
  {
    Wire.beginTransmission (i);
    if (Wire.endTransmission () == 0)
      {
      Serial.print ("Found address: ");
      Serial.print (i, DEC);
      Serial.print (" (0x");
      Serial.print (i, HEX);
      Serial.println (")");
      count++;
      delay (1);  // maybe unneeded?
      } // end of good response
  } // end of for loop
  Serial.println ("Done.");
  Serial.print ("Found ");
  Serial.print (count, DEC);
  Serial.println (" device(s).");
}  // end of setup

void loop() {}*/
