// roc 2007-08 006b2f10  unit: CXTPResourceManager  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2f10
//
// 006b2f10  668b410c             mov ax, word ptr [ecx + 0xc]
// 006b2f14  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b2f10 {
    char pad0[12];
    short m_x;
    short f();
};
short S_func_006b2f10::f()
{
    return m_x;
}
