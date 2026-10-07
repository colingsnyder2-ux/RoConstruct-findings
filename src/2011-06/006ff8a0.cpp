// roc 2011-06 006ff8a0  unit: RBX::GeometryService  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ff8a0
//
// 006ff8a0  c6815801000000       mov byte ptr [ecx + 0x158], 0
// 006ff8a7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ff8a0 {
    char pad0[344];
    char m_x;
    void f();
};
void S_func_006ff8a0::f()
{
    m_x = (char)0;
}
