// from server: 44% by colin
struct Sub
{
    void Init(int);
};

struct Obj
{
    char pad0[0x20];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    int f88;
    Sub sub8c;
    char pad90[0x18];
    Sub suba8;
    char padac[0x18];
    int fcc;
    int fc4;
    int fc8;

    Obj();
};

extern "C" void __stdcall base_ctor_73833a();
extern "C" void __stdcall base_ctor_738334();

Obj::Obj()
{
    base_ctor_73833a();
    *(int*)this = 0x7c4f34;
    sub8c.Init(10);
    suba8.Init(10);
    f20 = 1;
    f24 = 1;
    f28 = 1;
    f2c = 0;
    f30 = 0;
    f34 = 1;
    f38 = 1;
    f3c = 0;
    f40 = 0;
    f44 = 1;
    f48 = 1;
    f4c = 0;
    f50 = 0;
    f54 = 0;
    f58 = 1;
    f5c = 1;
    f60 = 1;
    f64 = 0;
    f68 = 0;
    f6c = 0;
    f70 = 0;
    f74 = 0;
    f78 = 0;
    f7c = 0;
    f80 = 1;
    f84 = 1;
    f88 = 0;
    fc4 = 0;
    fc8 = 0;
    fcc = 0;
    base_ctor_738334();
}
