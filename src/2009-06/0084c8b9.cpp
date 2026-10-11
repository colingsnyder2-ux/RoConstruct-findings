// from server: 62% by atomic.potato
extern "C" void* __cdecl sub_718cf6();
extern "C" int __stdcall _setmbcp(int);

struct S {
    char pad0[0x14];
    unsigned char field14;
    char pad1[0x2c];
    int field44;
    int f(unsigned char a, int b);
};

int S::f(unsigned char a, int b) {
    S* p = (S*)sub_718cf6();
    p->field14 = a;
    p->field44 = b;
    if (a == 0) {
        _setmbcp(-3);
    }
    return 1;
}
