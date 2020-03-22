#pragma once
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window
{
public:
	Window();
	Window(const std::string& title, const sf::Vector2u& screenSize);
	~Window();

	void BeginDraw();
	void EndDraw();

	void Update();

	bool isDone();
	bool IsFullScreen();
	sf::Vector2u getWindowSize();

	void ToggleFullScreen();

	void Draw(sf::Drawable& drawable);

private:
	void Setup(const std::string& title, const sf::Vector2u& size);
	void Destroy();
	void Create();

	sf::RenderWindow m_Window;
	sf::Vector2u m_WindowSize;
	std::string m_WindowTitle;
	bool m_isDone;
	bool m_isFullScreen;

};

