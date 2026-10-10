// from server: 75% by colin
struct Sub {
    void Init();
};

struct CArray {
    char pad0[0x20];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    Sub s40;
    Sub s44;
    Sub s48;
    Sub s4c;
    Sub s50;
    Sub s54;
    Sub s58;
    Sub s5c;
    int f70;
    CArray* ctor(int);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_77ddac();
extern "C" void __stdcall sub_63b7f0();

CArray* CArray::ctor(int a)
{
    sub_73833a();
    *(int*)this = 0x7c62b4;
    s40.Init();
    s44.Init();
    s48.Init();
    s4c.Init();
    s50.Init();
    s54.Init();
    s58.Init();
    sub_63b7f0();
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f24 = 0;
    f38 = 0;
    f20 = 0;
    f70 = a;
    f3c = 1;
    f34 = 1;
    return this;
}
