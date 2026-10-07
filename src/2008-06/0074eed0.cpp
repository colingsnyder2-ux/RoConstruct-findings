// roc 2008-06 0074eed0  unit: RBX::AssemblySimJob  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eed0
//
// 0074eed0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0074eed3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074eed0 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_0074eed0::f()
{
    return m_x;
}
