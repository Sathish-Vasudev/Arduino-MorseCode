# Arduino-MorseCode
This project coverts Morse code into text using the Serial monitor inputs as 0s and 1s.

This project can be integrated with a different input method such as a Bluetooth module or RF Remote.

________________________________________________________________________________________

MORSE CODE
A ~ .-     G ~ --.   M ~ --    T ~ -     Z ~ --..
B ~ -...   H ~ ....	 N ~ -.    U ~ ..-
C ~ -.-.   I ~ ..    O ~ ---   V ~ ...-
D ~ -..	   J ~ .---  P ~ .--.  W ~ .--
E ~ .      K ~ -.-   R ~ .-.   X ~ -..-
F ~ ..-.   L ~ .-..  S ~ ...   Y ~ -.--

________________________________________________________________________________________

DIRECTIONS FOR USE OF PROGRAM

Use 0(zero)	   -> .(dot)
Use 1(one) 	   -> -(dash)
Use .m (dot m) -> *(break)

One input at a time, at the end of the letter use a break.

Example:
Word : Hi
Input sequence: 
0 - Enter
0 - Enter
0 - Enter
0 - Enter
.m -Enter
0 - Enter
0 - Enter
.m - Enter
Straight Input:
0000.m - Enter
00.m - Enter
________________________________________________________________________________________

To implement using a RF Remote, connect the receiver module to arduino with three channels to 3 PWM pins.
Record the inputs of the 3 channels as follows,
CHANNEL 1 - 0
CHANNEL 2 - 1
CHANNEL 3 - Break
_______________________________________________________________________________________

Project will be updated soon!
