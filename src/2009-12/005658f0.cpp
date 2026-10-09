// roc 2009-12 005658f0  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005658f0
//
// 005658f0  668b410a             mov ax, word ptr [ecx + 0xa]
// 005658f4  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004fe250@ns_ROCX00000b@@QAEFXZ)

namespace ns_ROCX00000b {
struct S_func_004fe250 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_004fe250::f()
{
    return m_x;
}
}
