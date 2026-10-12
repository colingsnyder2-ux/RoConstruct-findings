// from server: 57% by colin
struct RGB { unsigned char r, g, b; };
struct Color { unsigned int value; RGB getRGB() const; };
struct Color3 { unsigned char r, g, b; };

extern "C" void* __cdecl convert(void* destination, RGB color);

struct Inner {
    char pad[0x28];
    void* ptr28;
    int count2c;
};

struct Outer {
    char pad[0x14];
    Inner* inner14;
};

struct CWrapperView {
    void method(int arg);
};

void CWrapperView::method(int arg) {
    Outer* o = (Outer*)arg;
    if (o->inner14) {
        Inner* in = o->inner14;
        int idx = *(int*)((char*)o + 8);
        void* esi;
        if (idx >= 0 && idx < in->count2c) {
            esi = ((void**)in->ptr28)[idx];
        } else {
            esi = 0;
        }
        unsigned int g = *(unsigned int*)0x976fc0;
        Color c;
        c.value = g;
        RGB rgb = c.getRGB();
        Color3 c3;
        convert(&c3, rgb);
        unsigned int packed = ((unsigned int)c3.r << 16) | ((unsigned int)c3.g << 8) | c3.b;
        ((void (__thiscall*)(void*, unsigned int))0x44de10)(esi, packed);
    }
    void** vt = *(void***)o;
    void (*fn)(void*) = (void (*)(void*))vt[0];
    fn(o);
}
