// roc 2009-06 00431680  unit: CPropertyGridItemBrickColor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431680
//
// 00431680  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 00431686  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00431680 {
    char pad0[268];
    int m_x;
    int f();
};
int S_func_00431680::f()
{
    return m_x;
}
