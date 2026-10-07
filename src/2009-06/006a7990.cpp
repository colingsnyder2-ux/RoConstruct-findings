// roc 2009-06 006a7990  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7990
//
// 006a7990  8d4118               lea eax, [ecx + 0x18]
// 006a7993  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a7990 {
    char pad0[24];
    int m_x;
    int* f();
};
int* S_func_006a7990::f()
{
    return &m_x;
}
