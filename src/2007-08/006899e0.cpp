// from server: 100% by colin
// roc 2007-08 006899e0  unit: CXTPControlTabWorkspace  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006899e0
//
// 006899e0  8b4194               mov eax, dword ptr [ecx - 0x6c]
// 006899e3  c3                   ret 

struct CXTPControlTabWorkspace {
    int f();
};

int CXTPControlTabWorkspace::f() {
    return *(int*)((char*)this - 0x6c);
}
