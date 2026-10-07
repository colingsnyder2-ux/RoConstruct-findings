// roc 2011-06 0051f660  unit: RBX::Network::ProfiledRakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051f660
//
// 0051f660  8b8188090000         mov eax, dword ptr [ecx + 0x988]
// 0051f666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051f660 {
    char pad0[2440];
    int m_x;
    int f();
};
int S_func_0051f660::f()
{
    return m_x;
}
