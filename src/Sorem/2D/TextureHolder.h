#pragma once
#ifndef TEXTURE_HOLDER_H
#define TEXTURE_HOLDER_H

#include <SFML/Graphics.hpp>
#include <map>
#include <assert.h>
#include <string>

class TextureHolder
{
public:
	TextureHolder();
	~TextureHolder();
	static sf::Texture& GetTexture(std::string const& filename);

private:
	//Container for kvp
	//std::map<std::string, sf::Texture> m_Textures;

	static TextureHolder* m_s_Instance;
};

TextureHolder* TextureHolder::m_s_Instance = nullptr;

TextureHolder::TextureHolder() {
	assert(m_s_Instance == this);
	m_s_Instance = this;
}
sf::Texture& TextureHolder::GetTexture(std::string const& filename) {

}
#endif // !TEXTURE_HOLDER_H
