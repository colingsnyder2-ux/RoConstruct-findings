// roc 2011-06 004e2ec0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2ec0
//
// 004e2ec0  d981e4000000         fld dword ptr [ecx + 0xe4]
// 004e2ec6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e2ec0 {
    char pad[228];
    float m_x;
    float f();
};
float S_func_004e2ec0::f()
{
    return m_x;
}
