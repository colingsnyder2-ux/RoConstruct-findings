// from server: 100% by tester
// roc 2011-06 0081a7a0  unit: CXTPCommandBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a7a0
//
// 0081a7a0  8b01                 mov eax, dword ptr [ecx]
// 0081a7a2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0081a7a8  6a00                 push 0
// 0081a7aa  6aff                 push -1
// 0081a7ac  ffd2                 call edx
// 0081a7ae  c3                   ret 

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
