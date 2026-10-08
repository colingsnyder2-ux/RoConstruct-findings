// from server: 100% by colin
// roc 2007-08 00643740  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643740
//
// 00643740  8b01                 mov eax, dword ptr [ecx]
// 00643742  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 00643748  6a00                 push 0
// 0064374a  6a01                 push 1
// 0064374c  ffd2                 call edx
// 0064374e  c3                   ret 

struct CXTPCommandBarCmdUI {
    void f();
};

void CXTPCommandBarCmdUI::f() {
    void (__thiscall *fn)(void*, int, int);
    fn = *(void (__thiscall **)(void*, int, int))(*(int*)this + 0x1e0);
    fn(this, 1, 0);
}
