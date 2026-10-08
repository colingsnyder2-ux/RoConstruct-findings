// roc 2007-08 005a47e0  unit: RBX::IControllable  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a47e0
//
// 005a47e0  8d8158010000         lea eax, [ecx + 0x158]
// 005a47e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a47e0 {
    char pad0[344];
    int m_x;
    int* f();
};
int* S_func_005a47e0::f()
{
    return &m_x;
}
