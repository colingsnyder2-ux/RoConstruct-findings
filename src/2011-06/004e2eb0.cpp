// roc 2011-06 004e2eb0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2eb0
//
// 004e2eb0  d981e0000000         fld dword ptr [ecx + 0xe0]
// 004e2eb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e2eb0 {
    char pad[224];
    float m_x;
    float f();
};
float S_func_004e2eb0::f()
{
    return m_x;
}
