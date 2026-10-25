// from server: 100% by tester
// roc 2008-06 006b4bd0  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4bd0
//
// 006b4bd0  8b01                 mov eax, dword ptr [ecx]
// 006b4bd2  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 006b4bd8  6a00                 push 0
// 006b4bda  6a01                 push 1
// 006b4bdc  ffd2                 call edx
// 006b4bde  c3                   ret 

struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1f4);
    fn(this, 1, 0);
}