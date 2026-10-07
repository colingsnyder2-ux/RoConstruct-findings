// roc 2011-06 006f9310  unit: RBX::VCornerWedgeInstance::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9310
//
// 006f9310  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 006f9316  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f9310 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_006f9310::f()
{
    return m_x;
}
