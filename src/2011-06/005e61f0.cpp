// roc 2011-06 005e61f0  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e61f0
//
// 005e61f0  8b81c00c0000         mov eax, dword ptr [ecx + 0xcc0]
// 005e61f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e61f0 {
    char pad0[3264];
    int m_x;
    int f();
};
int S_func_005e61f0::f()
{
    return m_x;
}
