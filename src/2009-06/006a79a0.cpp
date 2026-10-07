// roc 2009-06 006a79a0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a79a0
//
// 006a79a0  8d4120               lea eax, [ecx + 0x20]
// 006a79a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a79a0 {
    char pad0[32];
    int m_x;
    int* f();
};
int* S_func_006a79a0::f()
{
    return &m_x;
}
