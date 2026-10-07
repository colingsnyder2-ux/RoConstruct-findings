// roc 2011-06 004e2e90  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2e90
//
// 004e2e90  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 004e2e96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e2e90 {
    char pad0[160];
    int m_x;
    int f();
};
int S_func_004e2e90::f()
{
    return m_x;
}
