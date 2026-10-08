// roc 2007-03 004abf80  unit: seg_004a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004abf80
//
// 004abf80  668b81a4250000       mov ax, word ptr [ecx + 0x25a4]
// 004abf87  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004abf80 {
    char pad0[9636];
    short m_x;
    short f();
};
short S_func_004abf80::f()
{
    return m_x;
}
