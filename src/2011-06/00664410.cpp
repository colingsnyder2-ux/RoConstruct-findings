// roc 2011-06 00664410  unit: RBX::VCamera::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00664410
//
// 00664410  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00664416  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00664410 {
    char pad0[320];
    int m_x;
    int f();
};
int S_func_00664410::f()
{
    return m_x;
}
