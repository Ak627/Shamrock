#include <SFML/Graphics.hpp>

class shamrock {
private:
	int xpos;
	int ypos;
	int size;
	sf::CircleShape circle;
	sf::RectangleShape rect;
public:
	shamrock(int x, int y, int s);
	void draw(sf::RenderWindow& window);
};

shamrock::shamrock(int x, int y, int s) {
	xpos = x;
	ypos = y;
	size = s;
}
void shamrock::draw(sf::RenderWindow& window){
	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);

	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos + 50, ypos);
	window.draw(circle);

	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos + 50, ypos - 50);
	window.draw(circle);

	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos - 50);
	window.draw(circle);

	rect.setPosition(xpos + 45, ypos);
	rect.setFillColor(sf::Color(0, 100, 0));
	rect.setSize(sf::Vector2f(20, 80));
	window.draw(rect);
}
shamrock s1(100, 100, 50);
shamrock s2(300, 300, 50);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks");
	sf::CircleShape circle;
	sf::RectangleShape rect;



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//render section-------------------------------
		
		window.clear();
		
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(200, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(250, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(250, 150);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(200, 150);
		window.draw(circle);

		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(0, 100, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);

		window.display();

	}//end game loop-------------------------------------------------



	return 0;
} //end main
