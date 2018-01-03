#pragma once

// The SFML library:
#include <SFML/Audio.hpp>

// The MPG123 library:
#include <mpg123.h>

namespace sf
{
class Mp3 : public sf::SoundStream
{
public:
	Mp3();
	~Mp3();

	bool openFromFile(const std::string& filename);
	bool openFromMemory(void* data, size_t sizeInBytes);

protected:
	bool onGetData(Chunk& data);
	void onSeek(sf::Time timeOffset);

private:
	mpg123_handle*		myHandle;
	size_t              myBufferSize;
	unsigned char*      myBuffer;
	sf::Mutex           myMutex;
};

}
