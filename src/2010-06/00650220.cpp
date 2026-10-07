// roc 2010-06 00650220  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00650220
//
// 00650220  8d81c4000000         lea eax, [ecx + 0xc4]
// 00650226  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00650220 {
    char pad0[196];
    int m_x;
    int* f();
};
int* S_func_00650220::f()
{
    return &m_x;
}
