// roc 2011-06 0051fd80  unit: RBX::Network::ProfiledRakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051fd80
//
// 0051fd80  8b817c090000         mov eax, dword ptr [ecx + 0x97c]
// 0051fd86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051fd80 {
    char pad0[2428];
    int m_x;
    int f();
};
int S_func_0051fd80::f()
{
    return m_x;
}
