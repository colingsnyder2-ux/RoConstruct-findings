// roc 2007-08 004b88f0  unit: RakPeer  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b88f0
//
// 004b88f0  668b410a             mov ax, word ptr [ecx + 0xa]
// 004b88f4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b88f0 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_004b88f0::f()
{
    return m_x;
}
