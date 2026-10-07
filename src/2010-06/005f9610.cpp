// roc 2010-06 005f9610  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9610
//
// 005f9610  8d816c010000         lea eax, [ecx + 0x16c]
// 005f9616  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f9610 {
    char pad0[364];
    int m_x;
    int* f();
};
int* S_func_005f9610::f()
{
    return &m_x;
}
