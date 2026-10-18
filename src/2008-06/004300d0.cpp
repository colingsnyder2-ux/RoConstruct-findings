// from server: 69% by colin
struct RGB
{
    unsigned char r, g, b;
};

struct Color
{
    unsigned int value;
    RGB getRGB() const;
};

struct Color3uint8
{
    unsigned char r, g, b;
};

struct CWrapperView
{
    void destroy(int);
};

struct Item
{
    void setRGB(unsigned int rgb);
};

extern unsigned int g_colorValue;

extern "C" void *__cdecl sub_5b6270(void *destination, unsigned int value);
extern "C" void *__cdecl sub_5106a0(void *destination, void *source);

void CWrapperView::destroy(int param)
{
    int *view = (int *)param;
    int *obj = (int *)view[5];
    if (obj)
    {
        int *container = (int *)obj[0xfc / 4];
        int idx = view[2];
        Item *item;
        if (idx >= 0 && idx < container[0x2c / 4])
        {
            int *arr = (int *)container[0x28 / 4];
            item = (Item *)arr[idx];
        }
        else
        {
            item = 0;
        }

        unsigned int tmp = g_colorValue;
        Color3uint8 c;
        sub_5b6270(&c, tmp);
        Color3uint8 c2;
        sub_5106a0(&c2, &c);

        unsigned int packed = ((unsigned int)c2.b << 16) | ((unsigned int)c2.g << 8) | (unsigned int)c2.r;
        item->setRGB(packed);
    }

    int *vtable = (int *)view[0];
    void (__thiscall *fn)(void *) = (void (__thiscall *)(void *))vtable[0];
    fn(view);
}
