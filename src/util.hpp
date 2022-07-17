#include <SDL.h>
#define MATCH(a,b) !strcmp(a,b)

class Config {
public:

    SDL_Color sidebar_highlight_color;
    SDL_Color sidebar_text_color;
    SDL_Color sidebar_text_color_highlighted;

    bool mouse_select;


    Config();
    void parse(const char *file);
    void add_int(const char *value, int &out);
    void add_string(const char *value, std::string &out);
    void add_bool(const char *value, bool &out);
    //void add_color(const char *value, SDL_Color &color);


};




int utf8_length(const char *string);
Uint16 get_unicode_code_point(const char *p, int &bytes);
void utf8_truncate(char *string, int width, int max_width);
void copy_string_alloc(char **dest, const char *string);
bool hex_to_color(const char *string, SDL_Color &color);