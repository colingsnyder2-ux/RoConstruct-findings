// from server: 42% by colin
struct Sub1 {
    char pad[0x58];
    int f58;
    int f54;
};

struct Sub2 {
    char pad[0x54];
    int f54;
};

struct Inner {
    char pad[0x54];
    int f54;
};

struct Outer {
    char pad0[0x88];
    Sub1 s1;
    char pad1[0x54];
    Sub2 s2;
    char pad2[0x50];
    int f138;
    Inner inner;
};

struct C {
    char pad0[0x88];
    Sub1 s1;
    char pad1[0x54];
    Sub2 s2;
    char pad2[0x50];
    int f138;
    Inner inner;
    void ctor(int);
};

extern "C" void* __stdcall sub_738808(int, int, int);
extern "C" void __fastcall sub_6305da(void*);
extern "C" void __fastcall sub_676520(void*);

void C::ctor(int a)
{
    sub_738808(0x239f, 0, 0x30);
    *(int*)this = 0x7cce6c;
    sub_6305da(&s1);
    *(int*)&s1 = 0x7cccf4;
    s1.f58 = 0;
    s1.f54 = 0;
    sub_6305da(&s2);
    *(int*)&s2 = 0x7ccb94;
    f138 = a;
    sub_676520(&inner);
}
