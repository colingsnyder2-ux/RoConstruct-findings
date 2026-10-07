// roc 2007-08 005a47b0  unit: RBX::IControllable  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005a47b0
//
// 005a47b0  8d8140010000         lea eax, [ecx + 0x140]
// 005a47b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a47b0 {
    char pad0[320];
    int m_x;
    int* f();
};
int* S_func_005a47b0::f()
{
    return &m_x;
}
