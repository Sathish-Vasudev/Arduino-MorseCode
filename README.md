# Arduino-MorseCode
This project coverts Morse code into text using the Serial monitor inputs as 0s and 1s.

This project can be integrated with a different input method such as a Bluetooth module or RF Remote.

________________________________________________________________________________________
 **MORSE CODE** 

| Alphabet | Morse code | Alphabet | Morse code | Alphabet | Morse code | Alphabet | Morse code | Alphabet | Morse code |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| A | **.-** |    G | **--.** |   M | **--** |    T | **-** |    Z | **--..** |
| B | **-...** |   H | **....** |  N | **-.** |   U | **..-** |
| C | **-.-.** |   I | **..** |    O | **---** |  V | **...-** |
| D | **-..** |	   J | **.---** |  P | **.--.** | W | **.--** |
| E | **.** |      K | **-.-** |   R | **.-.**  | X | **-..-** |
| F | **..-.** |   L | **.-..** |  S | **...**  | Y | **-.--** |

________________________________________________________________________________________

### DIRECTIONS FOR USE OF PROGRAM
| **Input** | **Equivalent in the program** |
| :---: | :---: |
| 0 *(zero)*| **.** |
| 1 *(one)* | **-** |
|.m *(dot m)*| ***break***|

One input at a time, at the end of the letter use a break.
_______________________________________________________________________________________
#### Example:
**Word** : Hi <br/>
**Morse Code** : ***.... ..*** <br/>
**Input sequence:** <br/>
0 - Enter <br/>
0 - Enter <br/>
0 - Enter <br/>
0 - Enter <br/>
.m -Enter <br/>
0 - Enter <br/>
0 - Enter <br/>
.m - Enter <br/>
**Straight Input:** <br/>
0000.m - Enter <br/>
00.m - Enter
________________________________________________________________________________________

To implement using a RF Remote, connect the receiver module to arduino with three channels to 3 PWM pins.
Record the inputs of the 3 channels as follows, <br/>
CHANNEL 1 - 0 <br/>
CHANNEL 2 - 1 <br/>
CHANNEL 3 - Break
_______________________________________________________________________________________

You can also implement bluetooth by assigning options for dots and dashes and breaks. Blynk is a popular Android App that acts a bridge between Arduino bluetooth module HC-05 and the Android mobile. It can be used to send Morse Code messages from a mobile to an arduino board in range.

_______________________________________________________________________________________

The Applications of this program is countless, completely depends upon the user.
_______________________________________________________________________________________

Project will be updated soon!
