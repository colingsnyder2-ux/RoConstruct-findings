// from server: 73% by colin
// roc 2007-08 0057e060  unit: RBX::Workspace  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e060

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_630B9E(int, int);
extern "C" void __stdcall sub_77E710(int);

struct bad_cast_ctor {
    void __thiscall construct(const char*);
};

struct RBX_Workspace {
    void func(int);
};

void RBX_Workspace::func(int a)
{
    char buf[4];
    int r = sub_630D36(a, 0, 0x88209c, 0x890f20, 0);
    if (r == 0) {
        ((bad_cast_ctor*)buf)->construct((const char*)0x786e04);
        sub_630B9E((int)buf, 0x841e0c);
    }
}
