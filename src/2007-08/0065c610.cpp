// from server: 100% by colin
// roc 2007-08 0065c610  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065c610
//
// 0065c610  56                   push esi
// 0065c611  6a00                 push 0
// 0065c613  6acc                 push -0x34
// 0065c615  8bf1                 mov esi, ecx
// 0065c617  e864e6ffff           call 0x65ac80
// 0065c61c  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0065c622  c7404000000000       mov dword ptr [eax + 0x40], 0
// 0065c629  5e                   pop esi
// 0065c62a  c3                   ret 

struct CXTPReportControl {
    char pad[0xd0];
    struct Inner* pInner;
    void sub_65AC80(int, int);
    void f();
};

struct Inner {
    char pad[0x40];
    int field40;
};

void CXTPReportControl::f() {
    sub_65AC80(-0x34, 0);
    pInner->field40 = 0;
}
