// from server: 85% by king_originala
struct Frame {
    float data[12];
    Frame();
};

struct Color {
    float r, g, b, a;
};

struct Box {
    float x0, y0, z0;
    float x1, y1, z1;
};

struct Entry {
    float x, y, z, w;
};

struct Renderer;

struct RendererTable {
    void* reserved0[14];
    void (__thiscall *setFrame)(Renderer*, const Frame&);
    void* reserved1;
    void (__thiscall *drawBox)(Renderer*, const Box&, const Color&, const Color&);
};

struct Renderer {
    RendererTable* table;
};

extern float colorComponent;
extern float colorAlpha;
extern float boxHeight;
extern const Color& __cdecl defaultColor();

struct S {
    Entry* entries;
    int count;
    void draw(Renderer* renderer);
};

void S::draw(Renderer* renderer)
{
    renderer->table->setFrame(renderer, Frame());

    for (int i = 0; i < count; ++i) {
        double c = colorComponent;
        double x = entries[i].x;
        double y = entries[i].y;
        double z = entries[i].z;
        double w = entries[i].w;

        Color color;
        color.r = 1.0f;
        color.b = color.g = (float)c;
        color.a = colorAlpha;

        Box box;
        box.x0 = (float)x;
        box.y0 = 0.0f;
        box.z0 = (float)y;
        box.x1 = (float)z;
        box.y1 = boxHeight;
        box.z1 = (float)w;

        renderer->table->drawBox(renderer, box, color, defaultColor());
    }
}
