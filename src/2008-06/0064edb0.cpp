// from server: 71% by king_originala
struct Text {
    char storage[20];
    unsigned int length;
    unsigned int capacity;
    ~Text();
};

extern void (__thiscall *destroyText)(Text *);
extern Text (__cdecl *prependText)(const char *, const Text &);
extern const char prefix[];

inline Text::~Text()
{
    destroyText(this);
}

struct Point {
    float x, y;
};

struct Rectangle {
    Point first, second;
};

extern void __cdecl makeRectangle(Rectangle *, const Point *, const Point *);
extern float *__cdecl activeColor();
extern float *__cdecl inactiveColor();
extern float *__cdecl backgroundColor();
extern void *__stdcall selectFont(int);

struct Context;
struct MenuItem;
struct Action;

struct ContextTable {
    void *slots[11];
    void (__thiscall *paint)(Context *, const Rectangle *, float *);
};

struct Context {
    ContextTable *table;
};

struct ActionTable {
    void *slots[3];
    bool (__thiscall *checked)(Action *);
};

struct Action {
    ActionTable *table;
};

struct MenuTable {
    void *slots0[22];
    Text (__thiscall *caption)(MenuItem *);
    void *slots1[7];
    bool (__thiscall *enabled)(MenuItem *);
};

struct MenuItem {
    MenuTable *table;
    char storage[0x140];
    int state;
    Action *action;
    Text text;

    Rectangle bounds();
    void drawText(Context *, const Text &, float *, void *);
    void render(Context *);
};

void MenuItem::render(Context *context)
{
    if (state == 1 || state == 2) {
        Rectangle rectangle;
        Rectangle source = bounds();
        makeRectangle(&rectangle, &source.first, &source.second);
        context->table->paint(context, &rectangle, backgroundColor());
    }

    table->enabled(this);
    float *color = table->enabled(this) ? activeColor() : inactiveColor();

    drawText(context,
             action && action->table->checked(action)
                 ? prependText(prefix, table->caption(this))
                 : table->caption(this),
             color, selectFont(1));

    if (text.length > 0) {
        float *secondColor = table->enabled(this)
                                 ? activeColor()
                                 : inactiveColor();
        drawText(context, text, secondColor, selectFont(0));
    }
}
