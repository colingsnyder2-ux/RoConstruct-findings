// roc 2007-08 0043d380  unit: CPropertyGridItemBrickColor  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0043d380
//
// 0043d380  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0043d386  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043d380 {
    char pad0[256];
    int m_x;
    int f();
};
int S_func_0043d380::f()
{
    return m_x;
}
