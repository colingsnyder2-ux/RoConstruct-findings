// roc 2009-12 00854d30  unit: CXTPControlTabWorkspace  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854d30
//
// 00854d30  8b4188               mov eax, dword ptr [ecx - 0x78]
// 00854d33  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPControlTabWorkspace@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
// from server: 100% by tester
struct CXTPControlTabWorkspace {
    int f();
};

int CXTPControlTabWorkspace::f() {
    return *(int*)((char*)this - 0x78);
}
}
