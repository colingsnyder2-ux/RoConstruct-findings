// from server: 82% by colin
// roc 2007-08 0076cf30  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cf30

extern "C" int __stdcall sub_443e50(int, int, int, int, int);
extern "C" int __cdecl sub_630d23(int);

struct S {
    void f();
};

void S::f() {
    sub_443e50(5, 0xe9, 0x78f9d4, 0x78f9e0, 0x8bba40);
    sub_630d23(0x777ad0);
}
