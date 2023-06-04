#include <LiquidCrystal.h>

// Define LCD pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void displayValue(String valueName, float value) {
  // Clear the LCD screen
  lcd.clear();

  // Center the value name on the first row
  int nameLength = valueName.length();
  int nameStartPosition = (16 - nameLength) / 2;
  lcd.setCursor(nameStartPosition, 0);
  lcd.print(valueName);

  // Center the value on the second row
  int valueStartPosition = (16 - 6) / 2; // 6 is the maximum length of the float value
  lcd.setCursor(valueStartPosition, 1);
  lcd.print(value);
}

void setup() {
  // Initialize the LCD display
  lcd.begin(16, 2);
  // we can simply call this function whenever we intend to display a value on the LCD. An example is:
  displayValue("Temperature", 23.5);
}

void loop() {
  // Your main code here
}
