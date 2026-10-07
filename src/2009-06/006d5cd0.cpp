// roc 2009-06 006d5cd0  unit: RBX::Mechanism  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5cd0
//
// 006d5cd0  c741240f000000       mov dword ptr [ecx + 0x24], 0xf
// 006d5cd7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d5cd0 {
    char pad0[36];
    int m_x;
    void f();
};
void S_func_006d5cd0::f()
{
    m_x = (int)0xf;
}
