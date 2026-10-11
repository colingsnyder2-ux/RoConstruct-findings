// from server: 30% by tester
struct Sub1 {
    void init();
};

struct Sub2 {
    void init();
};

struct Target {
    char pad0[0x378];
    Sub1 sub1;
    char pad1[0x20];
    Sub2 sub2;
    char pad2[0x24];
    int field3c0;
    int field3c4;
    int field3c8;
    int field3cc;
    int field3d0;
    Target();
};

extern "C" void __stdcall base_init();

void Sub1::init() {}
void Sub2::init() {}

Target::Target()
{
    base_init();
    sub1.init();
    sub2.init();
    field3c0 = 0;
    *(int*)this = 0x81888c;
    *(int*)((char*)this + 0x378) = 0x818878;
    *(int*)((char*)this + 0x39c) = 0x818864;
    field3c4 = 0;
    field3c8 = 0;
    field3cc = 0;
    field3d0 = 0;
}
