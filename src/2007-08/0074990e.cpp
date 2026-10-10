// from server: 69% by colin
// roc 2007-08 0074990e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074990e

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18(int);

void __cdecl sub_0074990e(int a1, int a2)
{
    int v = a2;
    int x = *(int *)(a2 - 4) ^ v;
    sub_00630a1e(x);
    sub_00630a18(0x85032c);
}
