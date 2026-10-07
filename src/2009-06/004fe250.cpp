// roc 2009-06 004fe250  unit: RakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fe250
//
// 004fe250  668b410a             mov ax, word ptr [ecx + 0xa]
// 004fe254  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fe250 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_004fe250::f()
{
    return m_x;
}
