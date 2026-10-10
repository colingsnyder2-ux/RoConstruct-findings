// from server: 77% by colin
// roc 2007-08 00771440  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771440

extern "C" int __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_557710();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" int __cdecl sub_630d23(int, int);

struct seg_00770000 {
    void func();
};

void seg_00770000::func()
{
    sub_725520(0x8c1f0c, 0x5586e0);
    int v = sub_557710();
    int* p = &v;
    int r = sub_407410(p);
    int q = sub_4339d0();
    *(int*)q = 0x89ebc4;
    sub_630d23(0x779c40, q);
}
