// roc 2008-06 005e6110  unit: RBX::Clump  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6110
//
// 005e6110  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005e6113  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6110 {
    char pad0[64];
    int m_x;
    int f();
};
int S_func_005e6110::f()
{
    return m_x;
}
