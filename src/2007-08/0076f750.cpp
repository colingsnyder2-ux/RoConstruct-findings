// from server: 84% by colin
// roc 2007-08 0076f750  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f750

extern "C" int __stdcall sub_4a47a0(int, int, int, int, int);
extern "C" int __cdecl sub_630d23(int);

struct S {
    void f();
};

void S::f() {
    sub_4a47a0(0x79d18c, 0x79d170, 0x100, 5, 0x8be894);
    sub_630d23(0x7788f0);
}
