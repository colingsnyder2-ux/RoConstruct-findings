// from server: 72% by colin
// roc 2007-08 00772fc0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772fc0

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_58d9f0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

void sub_772fc0()
{
    sub_725520(0x58ddd0, 0x8c37d4);
    int v = sub_58d9f0();
    int* p = &v;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = 0x8a4520;
    sub_630d23(0x77acc0, 0x8a4520);
}
