// roc 2007-08 005a4760  unit: RBX::IControllable  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4760
//
// 005a4760  8d4104               lea eax, [ecx + 4]
// 005a4763  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a4760 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_005a4760::f()
{
    return &m_x;
}
