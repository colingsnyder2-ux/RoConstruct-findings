// roc 2011-06 006a30b0  unit: RBX::Ball  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a30b0
//
// 006a30b0  8d8180000000         lea eax, [ecx + 0x80]
// 006a30b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a30b0 {
    char pad0[128];
    int m_x;
    int* f();
};
int* S_func_006a30b0::f()
{
    return &m_x;
}
