// from server: 100% by tester
// roc 2010-06 007b8390  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8390
//
// 007b8390  8b01                 mov eax, dword ptr [ecx]
// 007b8392  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 007b8398  6a00                 push 0
// 007b839a  6a01                 push 1
// 007b839c  ffd2                 call edx
// 007b839e  c3                   ret 

struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1f4);
    fn(this, 1, 0);
}