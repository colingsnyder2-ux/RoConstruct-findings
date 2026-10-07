// roc 2009-06 004d4ee0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d4ee0
//
// 004d4ee0  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 004d4ee6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d4ee0 {
    char pad0[152];
    int m_x;
    int f();
};
int S_func_004d4ee0::f()
{
    return m_x;
}
