struct elements {
	sfSprite* sprite;
	struct elements *next; 
};
typedef struct elements elements;

struct layout {
	sfVideoMode mode;
	elements *elts;
	sfSprite* textbox;
	sfSprite* namebox;
	sfSprite* background;
	sfMusic* bgm; 
	};
typedef struct elements elements;
