// from server: 69% by colin
// roc 2007-08 0074ec4e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074ec4e

extern "C" void __cdecl sub_00630a1e();
extern "C" void __cdecl sub_00630a18();

extern int g_855a48;

void __cdecl sub_0074ec4e(int a1, int a2)
{
    int v = *(int *)(a2 - 4) ^ a2;
    sub_00630a1e();
    g_855a48 = (int)&g_855a48;
    sub_00630a18();
}
