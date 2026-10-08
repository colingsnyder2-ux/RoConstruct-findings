// from server: 100% by colin
// roc 2007-08 006b4330  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4330
//
// 006b4330  6a01                 push 1
// 006b4332  6a00                 push 0
// 006b4334  81c188feffff         add ecx, 0xfffffe88
// 006b433a  e851faffff           call 0x6b3d90
// 006b433f  c3                   ret 

struct CXTPControlGallery {
    char pad[0x178];
    void sub_6B3D90(int, int);
    void f();
};

void CXTPControlGallery::f() {
    ((CXTPControlGallery*)((char*)this - 0x178))->sub_6B3D90(0, 1);
}
