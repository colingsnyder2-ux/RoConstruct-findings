// roc 2008-06 00574fc0  unit: RBX::UnifiedWidget  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574fc0
//
// 00574fc0  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00574fc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00574fc0 {
    char pad0[228];
    int m_x;
    int f();
};
int S_func_00574fc0::f()
{
    return m_x;
}
