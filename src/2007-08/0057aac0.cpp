// from server: 100% by colin
// roc 2007-08 0057aac0  unit: RBX::Workspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aac0
//
// 0057aac0  8b01                 mov eax, dword ptr [ecx]
// 0057aac2  8b5004               mov edx, dword ptr [eax + 4]
// 0057aac5  ffd2                 call edx
// 0057aac7  05e8000000           add eax, 0xe8
// 0057aacc  c3                   ret 

struct S {
    virtual void v0();
    virtual char* v1();
    char* f();
};

char* S::f() {
    return v1() + 0xe8;
}
