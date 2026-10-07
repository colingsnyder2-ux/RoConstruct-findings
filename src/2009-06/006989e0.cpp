// roc 2009-06 006989e0  unit: RBX::VelocityMotor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006989e0
//
// 006989e0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 006989e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006989e0 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_006989e0::f()
{
    return m_x;
}
