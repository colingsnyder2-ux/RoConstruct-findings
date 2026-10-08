// roc 2007-08 006921f0  unit: CXTPStatusBarPane  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006921f0
//
// 006921f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006921f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006921f0 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_006921f0::f()
{
    return m_x;
}
