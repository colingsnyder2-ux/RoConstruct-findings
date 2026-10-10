// from server: 69% by colin
// roc 2007-08 0074137e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074137e

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

void __cdecl sub_74137e(int a1, int a2)
{
    int v = a2;
    int x = v;
    int y = *(int*)(v - 4);
    y ^= x;
    sub_630a1e(y);
    sub_630a18();
}
