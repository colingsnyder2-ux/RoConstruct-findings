// from server: 32% by colin
struct BrickColor {
    int number;
    BrickColor(int number);
};

struct BrickMap {
    struct ColorInfo {
        bool valid;
        unsigned char r, g, b;
    };
    static BrickMap& singleton();
    void* map;
};

extern "C" void* __stdcall sub_803ED4();
extern "C" void __stdcall sub_803F14(void*);
extern "C" void __stdcall sub_711AC0();
extern "C" void __stdcall sub_43F890();

BrickColor::BrickColor(int number)
{
    void* colors = sub_803ED4();
    sub_711AC0();
    void* v = (*(void**)(*(int*)this + 0xf0));
    sub_43F890();
    sub_803F14(0);
}
