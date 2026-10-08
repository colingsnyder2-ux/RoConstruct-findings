// from server: 36% by colin
// roc 2007-03 0059ced0  unit: seg_00590000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059ced0
//
// 0059ced0  8b01                 mov eax, dword ptr [ecx]
// 0059ced2  8b5054               mov edx, dword ptr [eax + 0x54]
// 0059ced5  ffe2                 jmp edx

struct S {
    char pad0[84];
    int m_x;
    int f();
};

int S::f() {
    return m_x;
}
