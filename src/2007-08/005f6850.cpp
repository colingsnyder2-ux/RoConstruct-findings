// from server: 58% by colin
struct S {
    char pad0[0xe8];
    float f0;
    float f1;
    float f2;
    int init();
};

struct Str {
    char buf[0x1c];
    Str(const char*);
    ~Str();
};

extern "C" void __stdcall sub_5f5a20();
extern "C" void __stdcall sub_541bf0();
extern "C" void __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

extern float g_8b3ab0;
extern float g_8b3ab4;
extern float g_8b3ab8;

int S::init() {
    sub_5f5a20();
    *(int*)((char*)this + 0x00) = 0x7c1854;
    *(int*)((char*)this + 0x04) = 0x7c184c;
    *(int*)((char*)this + 0x10) = 0x7c1844;
    *(int*)((char*)this + 0x14) = 0x7c1834;
    *(int*)((char*)this + 0x2c) = 0x7c1824;
    *(int*)((char*)this + 0x44) = 0x7c1814;
    *(int*)((char*)this + 0x5c) = 0x7c1804;
    *(int*)((char*)this + 0x74) = 0x7c17f4;
    *(int*)((char*)this + 0x8c) = 0x7c17e4;
    f0 = g_8b3ab0;
    f1 = g_8b3ab4;
    f2 = g_8b3ab8;
    Str s("Debris");
    sub_541bf0();
    return (int)this;
}
