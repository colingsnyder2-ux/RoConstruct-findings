// from server: 40% by colin
// roc 2008-06 006ed9c0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed9c0

struct Outer {
    char pad0[0x138];
    void* p138;
    char arr13c[8];
    int n144;
    int g(int, int);
};

extern "C" void* __cdecl sub_6a0920(int);
extern "C" int __stdcall sub_6ed6b0(int);
extern "C" int __stdcall sub_6ed060(int, int);
extern "C" void __stdcall sub_77bc00(void*, int, int, int);

int Outer::g(int a, int b)
{
    int r = sub_6ed6b0(a);
    if (r != 0)
        return *(int*)(r + 4);

    void* mem = sub_6a0920(8);
    int edi;
    if (mem != 0) {
        int v = *(int*)((char*)p138 + 0xb8);
        edi = sub_6ed060((int)mem, v);
    } else {
        edi = 0;
    }

    int eax = b;
    if (eax == -1)
        eax = n144;

    sub_77bc00(arr13c, eax, edi, 1);
    return *(int*)(edi + 4);
}
