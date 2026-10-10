// from server: 82% by colin
// roc 2007-08 0076cf00  unit: seg_00760000  size: 39 bytes

extern "C" int __stdcall sub_443e50(int, int, int, int, int);
extern "C" int __cdecl sub_630d23(int);

struct S {
    void f();
};

void S::f() {
    sub_443e50(5, 0xe8, 0x78f9d4, 0x78f9c8, 0x8bba24);
    sub_630d23(0x777af0);
}
