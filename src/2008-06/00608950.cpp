// roc 2008-06 00608950  unit: RBX::BlockBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608950
//
// 00608950  8a8198010000         mov al, byte ptr [ecx + 0x198]
// 00608956  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00608950 {
    char pad0[408];
    char m_x;
    char f();
};
char S_func_00608950::f()
{
    return m_x;
}
