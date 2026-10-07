// roc 2009-06 004d4ed0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d4ed0
//
// 004d4ed0  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 004d4ed6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d4ed0 {
    char pad0[148];
    int m_x;
    int f();
};
int S_func_004d4ed0::f()
{
    return m_x;
}
