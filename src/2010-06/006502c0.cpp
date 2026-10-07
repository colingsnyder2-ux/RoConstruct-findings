// roc 2010-06 006502c0  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006502c0
//
// 006502c0  8b8128010000         mov eax, dword ptr [ecx + 0x128]
// 006502c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006502c0 {
    char pad0[296];
    int m_x;
    int f();
};
int S_func_006502c0::f()
{
    return m_x;
}
