// from server: 71% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
};

struct Color4 {
    float r, g, b, a;
};

struct Rect {
    float x0, y0, x1, y1;
};

struct Renderer;

struct RendererTable {
    void* unused0[4];
    Rect (__thiscall* viewport)(Renderer*);
    void* unused1[6];
    void (__thiscall* fill)(Renderer*, const Rect&, const Color4&);
    void* unused2;
    Vec2 (__thiscall* text)(Renderer*, const void*, const Vec2&,
                          double, const Color4&, const Color4&,
                          int, int, int);
};

struct Renderer {
    RendererTable* table;
};

extern const float hintHeight;
extern const double fontSize;

extern const Vec3& __cdecl black();
extern const Vec3& __cdecl white();
extern const Color4& __cdecl transparent();
extern void __cdecl makeRect(Rect*, const Vec2&, const Vec2&);

struct Hint {
    unsigned char prefix[16];
    unsigned char textData[1];

    void render(Renderer*);
};

void Hint::render(Renderer* renderer)
{
    Rect viewport = renderer->table->viewport(renderer);

    Vec2 first;
    first.x = viewport.x0;
    first.y = viewport.y1 - hintHeight;

    Vec2 last;
    last.x = viewport.x1;
    last.y = viewport.y1;

    Vec2 center;
    center.x = (first.x + last.x) * 0.5f;
    center.y = (first.y + last.y) * 0.5f;

    Color4 color;
    const Vec3& background = black();
    color.r = background.x;
    color.g = background.y;
    color.b = background.z;
    color.a = 1.0f;

    Rect rectangle;
    makeRect(&rectangle, first, last);
    renderer->table->fill(renderer, rectangle, color);

    const Vec3& foreground = white();
    color.r = foreground.x;
    color.g = foreground.y;
    color.b = foreground.z;
    color.a = 1.0f;

    renderer->table->text(renderer, textData, center, fontSize,
                          color, transparent(), 2, 2, 0);
}
