// roc 2009-12 00565b60  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00565b60
//
// 00565b60  668b4108             mov ax, word ptr [ecx + 8]
// 00565b64  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004fe4c0@ns_ROCX00000c@@QAEFXZ)

namespace ns_ROCX00000c {
struct S_func_004fe4c0 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_004fe4c0::f()
{
    return m_x;
}
}
