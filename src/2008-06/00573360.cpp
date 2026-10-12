// from server: 86% by king_originala
struct Rect {
    float left, top, right, bottom;
};

struct Point {
    float x, y;
};

struct Text {
    unsigned char padding[20];
    int length;
};

struct GuiTarget;
struct Renderer;

typedef void (__thiscall* DrawFunction)(
    Renderer*, Rect*, Text*, Point*, double,
    void*, unsigned long, int, int, int);

struct GuiTable {
    void* preceding[20];
    int (__thiscall* scale)(GuiTarget*);
};

struct RenderTable {
    void* preceding[13];
    DrawFunction draw;
};

struct Renderer {
    RenderTable* table;
};

extern float centerFactor;
extern float alignmentFactor;

struct GuiTarget {
    GuiTable* table;
    void bounds(Rect*);
    void render(Renderer*, Text*, void*, unsigned long, int);
};

void GuiTarget::render(
    Renderer* renderer, Text* text, void* color,
    unsigned long size, int alignment)
{
    if (text->length) {
        Rect rectangle;
        bounds(&rectangle);

        float right = rectangle.right;
        double width = right - rectangle.left;
        Point position;
        position.x = (right + rectangle.left) * centerFactor;
        position.y = (rectangle.top + rectangle.bottom) * centerFactor;

        switch (alignment) {
        case 0:
            position.x = right - width * alignmentFactor;
            break;
        case 2:
            break;
        default:
            position.x = rectangle.left + width * alignmentFactor;
            break;
        }

        DrawFunction* draw = &renderer->table->draw;
        (*draw)(
            renderer, &rectangle, text, &position,
            double(table->scale(this)),
            color, size, alignment, 2, 0);
    }
}
