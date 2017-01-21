#ifndef GUI_HPP
#define GUI_HPP

#include <SFML/Graphics.hpp>

namespace gui {

	class tooltip {
	public:
		tooltip(std::string text, int width, int height, int posx, int posy);
		virtual ~tooltip();
		void display(sf::RenderWindow &window);
	private:
		std::string text;
		sf::RectangleShape* rectInner;
		sf::RectangleShape* rectOuter;
	};

	class inventory {
	public:
		inventory(int width, int height);
		virtual ~inventory();
		void display(sf::RenderWindow &window);
		void check(sf::RenderWindow &window);
	private:
		std::vector<sf::RectangleShape* > rects;
		std::vector<sf::FloatRect> floatrects;
	};
}

#endif