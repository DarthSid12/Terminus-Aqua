## Inspiration
Our inspiration basically stemmed from these headlines in a famous international newspaper:



At the same time, **19th June 2019** was declared as the Day Zero in Chennai (a *major* Indian metropolitan. Yes, we are not looking 50 years into the future, day Zero is already history.

## What it does
Our solution is based on the philosophy of prevention. Our aim is to prevent the water from even filling up to the brim.
What this means, is that as soon as the water level passes a certain maximum limit set by the user, our machine will turn the tap off, thereby preventing any water loss.

1. When the machine is first turned on, it calculates the distance between itself and the ground, using a default value for the bottle height (which can be changed later on by the user).
2. After configuring the surface-sensor distance, the sensor gives a beep. This means, that the user can now place the bottle. Again the sensor calculates the height from the bottle brim to the sensor and stores it as a constant.
3. The loop will stop running when the current height of water surface, calculated from the sensor, becomes less than or equal to the height of the brim of the bottle. Also, if the user wants, he can specify a safety factor, which will stop the water even before it touches the brim, minimising the water loss by spilling or splashing or other causes.


## How we built it
This project was solely built using electric engineering (turns out it's not at all easy as it appears 😖) and Arduino Nano along with various forms of sensors (ultrasound) and solenoid valve.

## Challenges we ran into
This was our first time with electrical, and, to be honest, we struggled 😓😓. We faced all sorts of trouble - first, the solenoid valve started problem-making. As soon as it worked, the ultrasound betrayed us. When the ultrasound started (at the last minute), the Arduino software threw an unexpected error ('unexpected' as nobody over the stack exchange community even replied to us 😔)

## Accomplishments that we're proud of
Successfully running a complex electrical circuit and completing the project despite a mass blackout in our region.

## What we learned
Pretty much everything electrical and Arduino stuff.

## What's next for Terminus Aqua
We plan to further add Machine Learning into the project so that the project adapts to the user's need all by itself, using TensorFlow Lite. Eventually, we also plan to patent our project and commercialize it in the (not-too) distant future.

##STEPS OF INSTALLATION
1. Download the code and open it in your arduino editor
2. Hook the components according to the circuit design below (Attach circuit diagram from PPT)
3. The major connections will be (Arduino UNO)
**i) Ultra Sonic Sensor**
        a) Trigger to pin 2
        b) Echo to pin 3
        c) VCC and GND to respective 
**ii) Push Button**
        a) One end to pin 7 and a 10k OHM Resistor which is connected to ground
        b) Other end to 5 or 3.3V
**iii) Motor and Normally Close Solenoid Valve**
        a) Positive to positive of 12V power supply
        b) Negative to NPN Transistor collector
        c) 12V from external power source to Emittor of Transistor
        d) Pin 8 of arduino to base of transistor
4.  Connect pipe b/w valve and pump and from pump to outside where water will be recieved. 5. Place the contraption inside the water dispenser and attach the ultra sonic sensor next to output pipe
6. Load the code onto the arduino and click on run. You can see on pressing the button the water starts filling up and when configuration mode button is pressed you can change the height of the bottl
