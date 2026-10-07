// roc 2010-06 006b4d00  unit: RBX::VBodyGyro::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b4d00
//
// 006b4d00  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 006b4d06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b4d00 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_006b4d00::f()
{
    return m_x;
}
