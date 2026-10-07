// roc 2009-06 006a79b0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a79b0
//
// 006a79b0  8d4104               lea eax, [ecx + 4]
// 006a79b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a79b0 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_006a79b0::f()
{
    return &m_x;
}
