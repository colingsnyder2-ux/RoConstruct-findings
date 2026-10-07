// roc 2010-06 005145c0  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005145c0
//
// 005145c0  668b4108             mov ax, word ptr [ecx + 8]
// 005145c4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005145c0 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_005145c0::f()
{
    return m_x;
}
