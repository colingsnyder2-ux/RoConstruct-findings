// roc 2009-12 00804290  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804290
//
// 00804290  8b01                 mov eax, dword ptr [ecx]
// 00804292  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 00804298  6a00                 push 0
// 0080429a  6a01                 push 1
// 0080429c  ffd2                 call edx
// 0080429e  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPCommandBarCmdUI@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
// from server: 100% by tester
struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1f4);
    fn(this, 1, 0);
}
}
