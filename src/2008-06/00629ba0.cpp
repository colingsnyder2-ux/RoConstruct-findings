// roc 2008-06 00629ba0  unit: RBX::ClickDetector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629ba0
//
// 00629ba0  d98154010000         fld dword ptr [ecx + 0x154]
// 00629ba6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00629ba0 {
    char pad[340];
    float m_x;
    float f();
};
float S_func_00629ba0::f()
{
    return m_x;
}
