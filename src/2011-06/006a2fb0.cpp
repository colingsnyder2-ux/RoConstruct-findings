// roc 2011-06 006a2fb0  unit: RBX::Geometry  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2fb0
//
// 006a2fb0  c74118feffffff       mov dword ptr [ecx + 0x18], 0xfffffffe
// 006a2fb7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a2fb0 {
    char pad0[24];
    int m_x;
    void f();
};
void S_func_006a2fb0::f()
{
    m_x = (int)0xfffffffe;
}
