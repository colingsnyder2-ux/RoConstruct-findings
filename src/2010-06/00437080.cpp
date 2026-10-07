// roc 2010-06 00437080  unit: CPropertyGridItemBrickColor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00437080
//
// 00437080  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 00437086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00437080 {
    char pad0[268];
    int m_x;
    int f();
};
int S_func_00437080::f()
{
    return m_x;
}
