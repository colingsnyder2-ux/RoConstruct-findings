// from server: 73% by colin
// roc 2007-08 00741e4e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00741e4e

extern "C" void __fastcall sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18(int);

extern int g_848d44;

void __cdecl sub_00741e4e(int a1, int a2)
{
    int x = a2;
    int y = *(int *)(a2 - 4);
    y ^= x;
    sub_00630a1e(y);
    sub_00630a18((int)&g_848d44);
}
