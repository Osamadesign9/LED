#include "mbed.h"

// Define LED objects
DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Define Ticker objects
Ticker ticker1;
Ticker ticker2;

// Toggle functions
void toggle_led1() {
    led1 = !led1;
}

void toggle_led2() {
    led2 = !led2;
}

int main() {
    // Attach the toggle functions to tickers
    ticker1.attach(&toggle_led1, 2.0); // Toggle LED1 every 2 seconds
    ticker2.attach(&toggle_led2, 5.0); // Toggle LED2 every 5 seconds

    while (true) {
        // Main loop does nothing, tickers handle the toggling
    }
}
