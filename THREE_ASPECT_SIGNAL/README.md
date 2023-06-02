This is a macro to control a three aspect dcc solenoid signal.

It has been tested with a Marklin 7041 Home signal connected to my DCC Accessory Decoder with DCC Solenoid Driver board.

Accessory decoder is here:

https://github.com/Rosscoetrain/DCC-Turnout-Decoder

and the DCC Solenoid Driver board is here:

https://github.com/Rosscoetrain/DCC-Solenoid-Turnout-Driver

To declare a signal use the following.

id		the id for the signal
addr_main	DCC address for the halt/clear (red/green) solenoids of the signal
addr_main_sub	DCC sub address for the halt/clear (red/green) solenoids of the signal
addr_amber	DCC address for the slow (amber) solenoid of the signal
addr_amber_sub	DCC sub address for the slow (amber) solenoid of the signal


eg with id = 100 and halt/clear on address 10 sub address 0 and slow on address 10 sub address 1 

DCC_SIGNAL_THREE(100, 10, 0, 10, 1)

You can then use:
RED(100)
or
GREEN(100)
or
AMBER(100)

in EX-Rail for automations.

