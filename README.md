**2019:** This QT based Linux client for the Sark antenna analyser is modified to also work with my (in construction) home made Arduino based antenna analyser.
Important changes from the original code are:

```
1- Some code cleanup
2- Solved some issues with the original code
3- Added a functional Monitor tab
```

The new functional monitor tab allows to use the antenna analyser in real time when connected to an antenna and/or antenna tunner and see the influence of any changes done to the antenna or on the antenna tunner.
It's still work in progress, so some issues are still possible.

![](/images/Antenna-analyser-RealTime-monitor.jpg?raw=true)

Original README follows:

**NOTE**: *I am not the original author of this software;* this software was
originally created by Jeremy Burton, and I have moved these changes
here from http://jedi98.uk/antenna_analyzer.php so I can share changes
allowing this software to be compiled and executed on OSX.

SARK 100 / MINI 60 Antenna Analyzer GUI
=======================================

![](/images/Analyzer_Screenshot1.png?raw=true)

Requirements
------------

* QT Framework


Installation Instructions
-------------------------

### Linux

From the project directory, run the following commands:

```
mkdir build
cd build
qmake -spec linux-g++-64 -o Makefile ../analyzer/analyzer.pro
make
```

You can then run this software by running `./analyzer`.

### OSX

From the project directory, run the following commands:

```
mkdir build
cd build
qmake -spec macx-g++ -o Makefile ../analyzer/analyzer.pro
make
```

You can then run the program by running `open analyzer.app`.


Running a Scan using a SARK100
------------------------------

1. Turn on your antenna analyzer and connect it to your antenna.
2. Press the "Config" button until you see the words "PC Link" on your screen, then press the down arrow.  Your screen should now show the message "Waiting Link".
3. Use a USB cable to connect your computer with your antenna analyzer.
4. Open the Antenna Analyzer app you compiled using the instructions above.
5. From the Antenna Analyzer app, use the "Link" menu to select your device.  You probably have only one option displayed, but if there are multiple options, you may need to perform some experiments to identify which of the listed devices is your Antenna Analyzer.
6. Use the displayed GUI to select which frequencies you'd like to scan, and press the "Scan" button.
