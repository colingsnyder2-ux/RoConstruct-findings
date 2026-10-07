// roc 2007-08 005d1a40  unit: RBX::LocalBackpack  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1a40
//
// 005d1a40  8d8174010000         lea eax, [ecx + 0x174]
// 005d1a46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d1a40 {
    char pad0[372];
    int m_x;
    int* f();
};
int* S_func_005d1a40::f()
{
    return &m_x;
}
