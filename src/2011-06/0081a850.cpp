// from server: 100% by tester
// roc 2011-06 0081a850  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a850
//
// 0081a850  8b01                 mov eax, dword ptr [ecx]
// 0081a852  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 0081a858  6a00                 push 0
// 0081a85a  6a01                 push 1
// 0081a85c  ffd2                 call edx
// 0081a85e  c3                   ret 

struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1f4);
    fn(this, 1, 0);
}