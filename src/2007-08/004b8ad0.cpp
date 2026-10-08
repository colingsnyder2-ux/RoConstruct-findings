// roc 2007-08 004b8ad0  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8ad0
//
// 004b8ad0  668b4108             mov ax, word ptr [ecx + 8]
// 004b8ad4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b8ad0 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_004b8ad0::f()
{
    return m_x;
}
