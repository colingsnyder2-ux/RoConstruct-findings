// roc 2008-06 004bb870  unit: ProfiledRakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb870
//
// 004bb870  668b4108             mov ax, word ptr [ecx + 8]
// 004bb874  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004bb870 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_004bb870::f()
{
    return m_x;
}
