// from server: 44% by colin
struct Sub1 {
    void sub1(int, int);
};

struct Sub2 {
    void sub2(int);
};

struct Target {
    char pad0[0x20];
    Sub1 sub1;
    char pad1[0x50];
    Sub2 sub2;
    char pad2[0x1c];
    int field90;
    int field94;

    Target(int);
};

extern "C" void __stdcall func73833a();
extern "C" void __stdcall func71fa90();
extern "C" void __stdcall func6e4410();

Target::Target(int arg)
{
    func73833a();
    sub1.sub1(arg, 2);
    sub2.sub2(0xa);
    field94 = 0;
    field90 = 0;
}
