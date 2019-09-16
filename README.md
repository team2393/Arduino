Arduino
=======

For First Robotics, the RoboRIO is the main computer which integrates
the robot into the field control system etc.
The Arduino is a much simpler computer, a "Micro Controller".
Arduinos are comparably cheap and fun to play with,
for example in hobby projects.
Some teams add one or more Arduinos to their robot, for example to control lights.

Development Environment
-----------------------

Download the "Arduino IDE" from https://www.arduino.cc/en/main/software
For Windows, we suggest you download the "Installer",
which is a file like `arduino-1.8.9-windows.exe`,
and not the "App" from the Microsoft store.

First Steps
-----------

 * Start the Aduino IDE from its desktop icon.
   Check under the menu `Tools`, `Board` that "Arduino/Genuino Uno" is selected.
 * Connect an Arduino via the USB port.
   On Windows, you tend to hear a "Da-Ding" type of sound.
   In the IDE, `Tools`, `Port` should now for example list "COM3 (Arduino...)".
   Select that "COM.." entry.
 * Open menu `File`, `Examples`, `01.Basics`, `Blink`.
   Push the `==>` button, the "Upload" button, in the toolbar.
   After a few seconds the LED on the Arduino should blink.

Check out these Examples
------------------------

Run the 'Git Bash' and in there type:

```
mkdir -p git
cd git
git clone https://github.com/team2393/Arduino
```

When you now start the Arduino IDE, use `File`, `Open`,
navigate to the `git/Arduino` folder in your home diretory,
and for example open `Blink/Blink.ino`.

Totally irrelevant but fun fact regarding `bash`:
In Unix/Linux, a 'shell' is a program where you can type commands.
The first Unix shell, `sh`, was witten by Steven Bourne,
thus sometimes referred to as the Bourne Shell.
Others created the `ksh` and `csh` and `zsh`.
Eventually, somebody combined the good features of many of these shells
into a new shell which was called 'Bourne again shell', `bash`.
