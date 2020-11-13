#pragma once
#define OGLFT_NO_SOLID 1
#define OGLFT_NO_QT 1
//TextBox
#ifndef char_t
 #define char_t char
#endif
#define TEXTVIEW_EDIT       0b00000001
#define TEXTVIEW_LINK       0b00000010
#define TEXTVIEW_NUM_ONLY   0b00000100
#define TEXTVIEW_HIDE       0b00001000

//FreeType area



//end (freetype)

class GLWIN{
    public:
        void draw();
        void onType();
        void setTitle(const char*);
        void onClickFound(int x, int y);
};

class TextView{
    protected:
        char settings;
        char_t *text;
    public:
        bool getMode(char mode);
        void enableMode(char mode);
        void disableMode(char mode);
        void linkText(char *target);
        void setText(const char *text);

        int size;
        float color[3];

        void draw(int sx, int sy, int ex, int ey);
};
class ExplorerView{
    protected:
        char settings;
    public:
        bool getMode(char mode);
        void enableMode(char mode);
        void disableMode(char mode);

        int size;
        float color[3];
};

class FontView{
    protected:
        /// free-type special data
    public:
        int size;
        char flags;

        FontView(char *pathToFont, int size);
        int getWidthOfText(const char *text);
        void render(const char *text, int x, int y);
};