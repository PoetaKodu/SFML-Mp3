#include "stdafx.h" // The PCH, optional

// SFML includes:
#include <SFML/Audio.hpp>

// Standard includes:
#include <iostream>		// for: logging.
#include <thread>		// for: sleep.
#include <chrono>		// for: time manipulation.

int main()
{
	// TODO: remove this placeholder, replace it with music playing.
	// `done` means a moment in which music ends.
	bool done = false;

	std::clog << "Playing the music..." << std::flush;
	while (!done)
	{
		
		// Sleep one second to leave processing time to other threads...
		namespace chr = std::chrono;
		std::this_thread::sleep_for(chr::seconds{ 1 });
	}
}

