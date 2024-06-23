#include "morse_decoder.h"

int main(int argc, char* argv[])
{
	std::cout << "Morse Decoder/Encoder Written by Ai000 Cybernetics QLab" << std::endl;
	std::string name = "-- ^.. ^.-.. ^.- ^-.. / -.- ^.- ^.... ^... ^.- ^.-. ^.. / .- ^.-.. ^.... ^.- ^-.. ^..";
	std::cout << MorseCodeToPlaintext(name) << std::endl;

	return 0;
}
