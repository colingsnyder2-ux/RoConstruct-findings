// from server: 100% by tester
// roc 2008-06 007016a0  unit: CXTPControlTabWorkspace  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007016a0
//
// 007016a0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 007016a3  c3                   ret 

struct CXTPControlTabWorkspace {
    int f();
};

int CXTPControlTabWorkspace::f() {
    return *(int*)((char*)this - 0x78);
}