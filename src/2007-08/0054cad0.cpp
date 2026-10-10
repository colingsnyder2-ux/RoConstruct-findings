// from server: 55% by colin
extern "C" {
    void __stdcall func_77e518();
}

struct basic_streambuf
{
    void __thiscall init();
};

struct S
{
    char pad0[0x3c];
    char f3c;
    char pad3d[7];
    char f44;
    char pad45[3];
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    void* f0;
    void __thiscall sub_54c0d0(int*, int, int);
    S(int*, int, int);
};

void __thiscall basic_streambuf::init()
{
    func_77e518();
}

S::S(int* a, int b, int c)
{
    basic_streambuf* sb = (basic_streambuf*)this;
    sb->init();
    f3c = 0;
    f44 = 0;
    f48 = 0;
    f4c = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0x10;
    f0 = (void*)0x7a79fc;
    int v = *a;
    sub_54c0d0(&v, b, c);
}
