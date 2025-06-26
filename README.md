# DATA-COMPRESSION-TOOL

COMPANY: CODTECH IT SOLUTIONS

NAME: ABHIJEET KUMAR

INTERN ID: CT04DH435

DOMAIN: C LANGUAGE

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH

DESCRIPTION: The Run-Length Encoding (RLE) program presented above can be written and executed in any standard C programming environment such as Visual Studio Code, Code::Blocks, Turbo C, or even a simple GCC compiler in terminal or command prompt. Among these, Visual Studio Code (VS Code) is highly recommended for beginners and professionals alike due to its rich support for C/C++ through extensions like the “C/C++” plugin by Microsoft, syntax highlighting, and integrated terminal. The program should be saved with a .c extension, such as rle_tool.c, and then compiled and run using a terminal command like gcc rle_tool.c -o rle_tool followed by ./rle_tool on Linux/macOS or rle_tool.exe on Windows. This code is a simple implementation of a basic data compression algorithm called Run-Length Encoding, which efficiently reduces file size by replacing consecutive repeating characters with a single character and its count. It consists of two primary functions: compressFile() and decompressFile(). The compressFile() function reads characters from the input text file, counts how many times a character repeats consecutively, and writes this count along with the character to a new output file, thus compressing the data. For example, if the input is “AAAABBBCCDAA”, the compressed output becomes “4A3B2C1D2A”. The decompressFile() function reverses this process by reading the count and character pairs from a compressed file and regenerating the original uncompressed text by writing each character the specified number of times to a new file. The main() function provides a user interface to choose whether to compress or decompress, takes the input and output file names, and invokes the appropriate function. This tool is useful for small-scale file compression, especially for repetitive character data, and serves as a foundational example of how compression algorithms work. It helps users understand basic concepts of encoding, pattern recognition, and file handling in C. The code also demonstrates the use of standard C libraries like stdio.h and stdlib.h, file I/O operations using fopen(), fgetc(), fprintf(), and fscanf(), and loop-based character processing. The program is compact, educational, and can be expanded further to handle more complex cases like whitespace, punctuation, or non-repetitive text patterns. This makes it a valuable learning project for students and beginners exploring data compression or improving their file processing skills in the C language using a modern and user-friendly development environment like Visual Studio Code.

OUTPUT:

<img width="1379" alt="Image" src="https://github.com/user-attachments/assets/3bbd88a1-64cf-4a4c-9fac-86a37834c3d2" />
