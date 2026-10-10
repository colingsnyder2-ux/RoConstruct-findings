// from server: 84% by tester
// roc 2007-08 0076f660  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f660

extern "C" int __stdcall sub_4A46C0(int, int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

struct S {
    void f();
};

void S::f() {
    sub_4A46C0(0x79d11c, 0x79d128, 0x104, 5, 0x8be8cc);
    sub_630D23(0x7788d0);
}
