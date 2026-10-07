// roc 2008-06 00574fa0  unit: RBX::UnifiedWidget  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574fa0
//
// 00574fa0  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00574fa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00574fa0 {
    char pad0[236];
    int m_x;
    int f();
};
int S_func_00574fa0::f()
{
    return m_x;
}
