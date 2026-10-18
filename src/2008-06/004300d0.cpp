// from server: 65% by colin
struct RGB
{
    unsigned char r, g, b;
};

struct Color
{
    unsigned int value;
    RGB getRGB() const;
};

struct ColorF
{
    float r, g, b, a;
};

struct Color3uint8
{
    unsigned char r, g, b, a;
};

struct ColorSource
{
    ColorF color() const;
};

struct Color3uint8Source
{
    Color3uint8 fromColor(ColorF c);
};

struct Wrapper
{
    void f(unsigned int);
};

struct CWrapperView
{
    void method(int);
};

extern ColorSource *g_colorSource;

void CWrapperView::method(int arg)
{
    int *self = (int *)this;
    int *p = (int *)self[5];
    if (p)
    {
        int *c = (int *)p[0xfc / 4];
        int idx = self[2];
        int *esi;
        if (idx >= 0 && idx < c[0x2c / 4])
        {
            esi = (int *)((int *)c[0x28 / 4])[idx];
        }
        else
        {
            esi = 0;
        }
        ColorF cf = g_colorSource->color();
        Color3uint8 c3 = ((Color3uint8Source *)&c3)->fromColor(cf);
        unsigned int packed = ((unsigned int)c3.r) | (((unsigned int)c3.g) << 8) | (((unsigned int)c3.b) << 16);
        ((Wrapper *)esi)->f(packed);
    }
    void (__thiscall *fn)(void *, int) = *(void (__thiscall **)(void *, int))self[0];
    fn(this, 1);
}
