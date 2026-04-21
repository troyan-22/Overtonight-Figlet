# Overtonight-Figlet
A simple C script that displays synchronized song lyrics using FIGlet with precise timing based on audio analysis.


# Overtonight Lyrics Script "They'll post it online"

A minimalist **C script** designed to display synchronized song lyrics in the terminal. This project focuses on precision timing and a clean, "bloat-free" execution, developed and tested on **Gentoo Linux**.

## Features
- **Dynamic Centering**: Automatically adjusts to your terminal window size using `ioctl`.
- **ASCII Art**: Powered by `FIGlet` for a classic hacker/demoscene aesthetic.
- **Zero Bloat**: No heavy libraries, just pure C and system calls.

## Prerequisites
To run this script, you need:
- **GCC** (GNU Compiler Collection)
- **FIGlet** (CLI tool for ASCII banners)
- **Linux Environment** (tested on Gentoo)

## Installation & Usage
1. Clone the repository or download `overtonight.c`.
2. Compile the source code:
   ```bash
   gcc overtonight.c -o overtonight
