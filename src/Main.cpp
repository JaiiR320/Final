#include "Main.h"

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++) {
		switch (i) {
		case 1:
			LOG("Arg 1: " << argv[1]);
			break;
		default:
			LOG("Unwanted Arg: " << argv[i]);
			break;
		}
	}
	return EXIT_SUCCESS;
}