// roc 2009-06 0066f640  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f640
//
// 0066f640  c7410403000000       mov dword ptr [ecx + 4], 3
// 0066f647  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066f640 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_0066f640::f()
{
    m_x = (int)3;
}
