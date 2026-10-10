// from server: 69% by colin
// roc 2007-08 00748a0e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00748a0e

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void __cdecl sub_00748A0E(int a1, int a2)
{
    int* p = (int*)a2;
    int v = p[-1];
    v ^= (int)p;
    sub_00630a1e(v);
    sub_00630a18();
}
