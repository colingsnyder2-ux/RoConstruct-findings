// roc 2008-06 004bb690  unit: ProfiledRakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb690
//
// 004bb690  668b410a             mov ax, word ptr [ecx + 0xa]
// 004bb694  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004bb690 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_004bb690::f()
{
    return m_x;
}
