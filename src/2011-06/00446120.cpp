// roc 2011-06 00446120  unit: CPropertyGridItemBrickColor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00446120
//
// 00446120  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 00446126  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00446120 {
    char pad0[268];
    int m_x;
    int f();
};
int S_func_00446120::f()
{
    return m_x;
}
