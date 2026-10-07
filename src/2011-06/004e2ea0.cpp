// roc 2011-06 004e2ea0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2ea0
//
// 004e2ea0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 004e2ea6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e2ea0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_004e2ea0::f()
{
    return m_x;
}
