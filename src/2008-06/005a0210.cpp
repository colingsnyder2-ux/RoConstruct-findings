// from server: 100% by tester
// roc 2008-06 005a0210  unit: RBX::Workspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0210
//
// 005a0210  8b01                 mov eax, dword ptr [ecx]
// 005a0212  8b5004               mov edx, dword ptr [eax + 4]
// 005a0215  ffd2                 call edx
// 005a0217  0530010000           add eax, 0x130
// 005a021c  c3                   ret 

struct S {
    virtual void v0();
    virtual char* v1();
    char* f();
};

char* S::f() {
    return v1() + 0x130;
}