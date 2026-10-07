// roc 2010-06 006da2f0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da2f0
//
// 006da2f0  8b816c030000         mov eax, dword ptr [ecx + 0x36c]
// 006da2f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006da2f0 {
    char pad0[876];
    int m_x;
    int f();
};
int S_func_006da2f0::f()
{
    return m_x;
}
