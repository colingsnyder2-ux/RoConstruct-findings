// roc 2011-06 005e61a0  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e61a0
//
// 005e61a0  8b81c80c0000         mov eax, dword ptr [ecx + 0xcc8]
// 005e61a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e61a0 {
    char pad0[3272];
    int m_x;
    int f();
};
int S_func_005e61a0::f()
{
    return m_x;
}
