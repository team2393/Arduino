Arduino
=======

Development Enveronment
-----------------------

Downlad the "Arduino IDE" from https://www.arduino.cc/en/main/software
For Windows, you can download an "Installer", which is a file like
`arduino-1.8.9-windows.exe`,
or an "App" from the Microsoft store.
We suggest you use the installer.

First Steps
-----------

 * Start the Aduino IDE from its desktop icon.
   Check under the menu `Tools`, `Board` that "Arduino/Genuino Uno" is selected.
 * Connect an arduino via the USB port. On Windows, you tend to hear a
   "Da-Ding" type of sound.
   In the IDE, `Tools`, `Port` should now for example list "COM3 (Arduino...)".
   Select that "COM.." entry.
 * Open menu `File`, `Examples`, `01.Basics`, `Blink`.
   Push the `==>` button, the "Upload" button, in the toolbar.
   After a few seconds the LED on the Arduino should blink.


Check out these Examples
------------------------

Run the 'git bash' and in there type:

```
mkdir -p git
cd git
git clone https://github.com/team2393/Arduino
```

When you now start the Arduino IDE, use `File`, `Open`,
navigate to the `git/Arduino` folder in your home diretory,
and for example open `Blink/Blink.ino`.

