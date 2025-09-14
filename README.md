# Tic tac toe
## About The Project

[![Project Screen Shot][project-screenshot]]()
[![Project Screen Shot][project-screenshot2]]()

This repository contains a series of code for the Tic tac toe game for one or two players (Instruction and rules at the bottom). There are C++ and Python versions of the code.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

* [![C++][cpp-shield]][cpp-url]
* [![Python][python-shield]][python-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

To set up the project locally, you need to install (if not already the case) some dependencies. To get a local copy up and running follow these steps.

### Prerequisites

* C++ Compiler

Install the build-essential package
  ```sh
  sudo apt install build-essential 
  ```

Create 2 repositories in the folder tictactoe
  ```sh
  mkdir lib
  mkdir bin
  ```

 Compile and install
  ```sh
 make
 ```
 
 * Python

Install Python
  ```sh
  sudo apt install python3
  ```

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/lock94656/tictactoe.git
   ```
2. Open a terminal
3. Compile/Link by calling the makefile (C++)
 ```sh
   make
   ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- USAGE EXAMPLES -->
## Rules of the game

The goal is to aligne 3 crosses before the bot or the second player. 

For the C++ version, you need to enter one number between 0 and 8 for chosen a cell (starting from the top left corner to the bottom right corner). 

For the Python version, you need to enter one number between 1 and 9 for chosen a cell (starting from the top left corner to the bottom right corner). 

## Usage

For the "one person" version, the bot plays randomly. 

* C++ 

To launch the program, go to the bin directory and type:
 ```sh
   ./main.exe
   ```

* Python

To launch the program, go to the python directory and type:
 ```sh
   python3 Morpion.py
   ```
   
<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- LICENSE -->
## License

Distributed under the GPL License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

Hugo Gibert

Project Link: [https://github.com/lock94656/tictactoe](https://github.com/lock9456/tictactoe)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[cpp-shield]: https://img.shields.io/badge/-C++-blue?logo=cplusplus
[cpp-url]: https://isocpp.org/
[python-shield]: https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white
[python-url]: https://www.python.org/

[project-screenshot]: images/Screenshot.png
[project-screenshot2]: images/Screenshot2.png

[contributors-url]: https://github.com/lock94656/hangman/graphs/contributors
[forks-url]: https://github.com/lock94656/hangman/network/members
[stars-shield]: https://img.shields.io/github/stars/lock94656/hangman.svg?style=for-the-badge
[stars-url]: https://github.com/lock94656/hangman/stargazers
[issues-shield]: https://img.shields.io/github/issues/lock94656/hangman.svg?style=for-the-badge
[issues-url]: https://github.com/lock94656/hangman/issues
[license-shield]: https://img.shields.io/github/license/lock94656/hangman.svg?style=for-the-badge
[license-url]: https://github.com/lock94656/hangman/blob/master/LICENSE.txt
