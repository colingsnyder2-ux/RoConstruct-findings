// from server: 100% by tester
// roc 2010-06 007b82e0  unit: CXTPCommandBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b82e0
//
// 007b82e0  8b01                 mov eax, dword ptr [ecx]
// 007b82e2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007b82e8  6a00                 push 0
// 007b82ea  6aff                 push -1
// 007b82ec  ffd2                 call edx
// 007b82ee  c3                   ret 

struct CXTPCommandBar
{
    void f();
};

void CXTPCommandBar::f()
{
    void (__thiscall *fn)(CXTPCommandBar*, int, int);
    fn = *(void (__thiscall **)(CXTPCommandBar*, int, int))((*(char**)this) + 0x150);
    fn(this, -1, 0);
}
