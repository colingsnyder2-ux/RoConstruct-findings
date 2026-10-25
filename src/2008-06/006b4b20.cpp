// from server: 100% by tester
// roc 2008-06 006b4b20  unit: CXTPCommandBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4b20
//
// 006b4b20  8b01                 mov eax, dword ptr [ecx]
// 006b4b22  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006b4b28  6a00                 push 0
// 006b4b2a  6aff                 push -1
// 006b4b2c  ffd2                 call edx
// 006b4b2e  c3                   ret 

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
