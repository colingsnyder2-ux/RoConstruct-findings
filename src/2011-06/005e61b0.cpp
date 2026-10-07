// roc 2011-06 005e61b0  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e61b0
//
// 005e61b0  8b81cc0c0000         mov eax, dword ptr [ecx + 0xccc]
// 005e61b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e61b0 {
    char pad0[3276];
    int m_x;
    int f();
};
int S_func_005e61b0::f()
{
    return m_x;
}
