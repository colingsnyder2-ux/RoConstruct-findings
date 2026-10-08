// from server: 100% by colin
// roc 2007-08 005b4760  unit: RBX::Geometry  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4760
//
// 005b4760  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005b4763  85c0                 test eax, eax
// 005b4765  7503                 jne 0x5b476a
// 005b4767  8b4108               mov eax, dword ptr [ecx + 8]
// 005b476a  c3                   ret 

struct S {
    int pad0;
    int pad4;
    int field8;
    int padc;
    int field10;
    int f();
};

int S::f() {
    int r = field10;
    if (r == 0) r = field8;
    return r;
}
