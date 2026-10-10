// from server: 68% by colin
struct Vector2 {
    float x;
    float y;
};

struct Rect {
    float x;
    float y;
    float w;
    float h;
};

struct PercentPanel {
    char pad[0x114];
    int field114;
    int field118;
    Vector2 field11c;
    Rect* render(Rect* out, int a, int b);
};

extern float g_8c1e64;
extern float g_8c1e68;

extern Vector2* __cdecl sub_501570();
extern void __cdecl sub_555990(Rect* out, Vector2* pos, Vector2* size);
extern void __cdecl sub_59c7d0(Rect* out, Rect* in, int a, int b);

Rect* PercentPanel::render(Rect* out, int a, int b)
{
    Rect tmp;
    tmp.x = g_8c1e64;
    tmp.y = g_8c1e68;

    Vector2* v = sub_501570();
    tmp.w = v->x;
    tmp.h = v->y;

    Vector2 size;
    size.x = tmp.w;
    size.y = tmp.h;

    sub_555990(&tmp, &field11c, &size);

    sub_59c7d0(out, &tmp, field114, field118);
    return out;
}
