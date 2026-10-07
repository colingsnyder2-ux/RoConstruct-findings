// roc 2008-06 004a1560  unit: RBX::Network::VClient::?$SignalDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1560
//
// 004a1560  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 004a1566  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a1560 {
    char pad0[324];
    int m_x;
    int f();
};
int S_func_004a1560::f()
{
    return m_x;
}
