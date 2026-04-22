# Overtonight-Figlet
A simple C script that displays synchronized song lyrics using FIGlet with precise timing based on audio analysis.


# Overtonight Lyrics Script "They'll post it online"

A minimalist **C script** designed to display synchronized song lyrics in the terminal. This project focuses on precision timing and a clean, "bloat-free" execution, developed and tested on **Gentoo Linux**.

## Features 
- **Dynamic Centering**: Automatically adjusts to your terminal window size using `ioctl`.
- **ASCII Art**: Powered by `FIGlet` for a classic aesthetic.
- **Zero Bloat**: No heavy libraries, just pure C and system calls.

## Prerequisites
To run this script, you need: ⚠️
- **GCC** (GNU Compiler Collection)
- **FIGlet** (CLI tool for ASCII banners) ⚠️⚠️⚠️
- **Linux Environment** (tested on Gentoo)

## Make sure you have FIGLET installed.

Arch Linux
'''bash
sudo pacman -S figlet
'''

Gentoo
'sudo emerge app-text/figlet'

Debian / Ubuntu (APT)
'sudo apt update'
'sudo apt install figlet'


## Preview
![demo](overtonight.gif)

## Installation & Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/troyan-22/Overtonight-Figlet.git
   cd Overtonight-Figlet
   ```
2. Compile:
   ```bash
   gcc overtonight.c -o overtonight
   ```
3. Run:
   ```bash
   ./overtonight
   ```
## Optional: Add to PATH
To run the program from anywhere:

```bash
cp overtonight ~/.local/bin/
```
Now you can use:
```bash
overtonight
```

