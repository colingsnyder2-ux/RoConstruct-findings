// roc 2009-06 006b15d0  unit: RBX::BlockBlockContact  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b15d0
//
// 006b15d0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006b15d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b15d0 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_006b15d0::f()
{
    return m_x;
}
