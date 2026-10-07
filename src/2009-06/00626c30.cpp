// roc 2009-06 00626c30  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626c30
//
// 00626c30  8d8128010000         lea eax, [ecx + 0x128]
// 00626c36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00626c30 {
    char pad0[296];
    int m_x;
    int* f();
};
int* S_func_00626c30::f()
{
    return &m_x;
}
