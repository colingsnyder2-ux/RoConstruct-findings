// roc 2010-06 00514350  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514350
//
// 00514350  668b410a             mov ax, word ptr [ecx + 0xa]
// 00514354  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00514350 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_00514350::f()
{
    return m_x;
}
