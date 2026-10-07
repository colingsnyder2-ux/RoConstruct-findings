// roc 2011-06 006f9320  unit: RBX::VCornerWedgeInstance::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9320
//
// 006f9320  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 006f9326  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f9320 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_006f9320::f()
{
    return m_x;
}
