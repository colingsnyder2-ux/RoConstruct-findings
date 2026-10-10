// from server: 81% by colin
// roc 2007-08 0076c720  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c720

extern "C" void __cdecl sub_725520(void *, void *);
extern "C" void *__cdecl sub_408620();
extern "C" void *__cdecl sub_407410(void *);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void *);

struct S {
    void f();
};

void S::f()
{
    void *p;
    sub_725520((void *)0x8baf40, (void *)0x408cb0);
    p = sub_408620();
    void *q = sub_407410(&p);
    sub_4339d0();
    *(void **)q = (void *)0x881808;
    sub_630d23((void *)0x777320);
}
