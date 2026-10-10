// from server: 69% by colin
// roc 2007-08 00746cde  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746cde

extern "C" int __cdecl sub_00630a1e(int);
extern "C" int __cdecl sub_00630a18(int);

int __cdecl sub_00746cde(int a1, int a2)
{
    int v = a2;
    int x = *(int *)(a2 - 4) ^ v;
    sub_00630a1e(x);
    return sub_00630a18(0x84d154);
}
