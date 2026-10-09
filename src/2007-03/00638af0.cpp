// roc 2007-03 00638af0  unit: seg_00630000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638af0
//
// 00638af0  8b01                 mov eax, dword ptr [ecx]
// 00638af2  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 00638af8  6a00                 push 0
// 00638afa  6a01                 push 1
// 00638afc  ffd2                 call edx
// 00638afe  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPCommandBarCmdUI@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1e0);
    fn(this, 1, 0);
}
}
