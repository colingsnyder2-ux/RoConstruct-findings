// from server: 79% by colin
// roc 2007-08 00773080  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773080

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_58DB40();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339D0();
extern "C" void __cdecl sub_630D23(int, int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x8C37E0, 0x58DE00);
    int v = sub_58DB40();
    int* p = &v;
    int r = sub_407410(p);
    sub_4339D0();
    *(int*)r = 0x8A452C;
    sub_630D23(0x77AC00, r);
}
