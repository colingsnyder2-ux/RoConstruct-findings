// roc 2009-12 006f4750  unit: RBX::Backpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4750
//
// 006f4750  8a8195000000         mov al, byte ptr [ecx + 0x95]
// 006f4756  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0065efc0@ns_ROCX0000cb@@QAEDXZ)

namespace ns_ROCX0000cb {
struct S_func_0065efc0 {
    char pad0[149];
    char m_x;
    char f();
};
char S_func_0065efc0::f()
{
    return m_x;
}
}
