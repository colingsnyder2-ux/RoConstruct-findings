// from server: 64% by colin
struct RGB
{
    unsigned char r, g, b;
};

struct Color
{
    unsigned int value;
    RGB getRGB() const;
};

struct Vector3
{
    float x, y, z;
};

struct ColorF
{
    float r, g, b, a;
};

struct S
{
    ColorF color() const;
    Vector3 f() const;
};

struct CWrapperView
{
    void method(int);
};

extern ColorF g_color;

void CWrapperView::method(int arg)
{
    int* self = (int*)this;
    int* p = (int*)self[5];
    if (p)
    {
        int* c = (int*)p[0xfc / 4];
        int idx = self[2];
        int* esi;
        if (idx >= 0 && idx < c[0x2c / 4])
        {
            esi = (int*)((int*)c[0x28 / 4])[idx];
        }
        else
        {
            esi = 0;
        }
        ColorF cf = g_color;
        Color col;
        col.value = *(unsigned int*)&cf;
        RGB rgb = col.getRGB();
        unsigned int packed = ((unsigned int)rgb.b << 16) | ((unsigned int)rgb.g << 8) | rgb.r;
        ((void (__thiscall*)(void*, unsigned int))0x44de10)(esi, packed);
    }
    void (__thiscall* fn)(void*, int) = *(void (__thiscall**)(void*, int))self[0];
    fn(this, 1);
}
