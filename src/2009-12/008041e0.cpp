// roc 2009-12 008041e0  unit: CXTPCommandBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008041e0
//
// 008041e0  8b01                 mov eax, dword ptr [ecx]
// 008041e2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008041e8  6a00                 push 0
// 008041ea  6aff                 push -1
// 008041ec  ffd2                 call edx
// 008041ee  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPCommandBar@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
// from server: 100% by why2
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
}
