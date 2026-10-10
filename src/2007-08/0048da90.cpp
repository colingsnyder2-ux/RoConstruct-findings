// from server: 79% by colin
// roc 2007-08 0048da90  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048da90

struct S {
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" void __cdecl sub_630b9e(int, int);
extern "C" void* __stdcall sub_77e710(int);

extern int dword_88209C;
extern int dword_88C6B8;
extern int dword_786E04;
extern int dword_841E0C;

void __cdecl f(int a)
{
    int r = sub_630d36(a, 0, (int)&dword_88209C, (int)&dword_88C6B8, 0);
    if (r == 0)
    {
        sub_77e710((int)&dword_786E04);
        sub_630b9e((int)&dword_841E0C, (int)&dword_786E04);
    }
}
