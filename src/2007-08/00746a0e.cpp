// from server: 69% by colin
// roc 2007-08 00746a0e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746a0e

extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

extern char unk_84cec0;

int __cdecl sub_746a0e(int a1, int a2)
{
    int* p = (int*)a2;
    int v = *(int*)((char*)p - 4) ^ (int)p;
    sub_630a1e(v);
    sub_630a18();
    return (int)&unk_84cec0;
}
