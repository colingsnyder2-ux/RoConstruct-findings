// roc 2009-06 00659850  unit: RBX::VCamera::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00659850
//
// 00659850  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00659856  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00659850 {
    char pad0[320];
    int m_x;
    int f();
};
int S_func_00659850::f()
{
    return m_x;
}
