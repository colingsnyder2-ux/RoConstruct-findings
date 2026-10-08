// roc 2007-03 004add10  unit: seg_004a0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004add10
//
// 004add10  668b4108             mov ax, word ptr [ecx + 8]
// 004add14  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004add10 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_004add10::f()
{
    return m_x;
}
