// roc 2008-06 004bb910  unit: ProfiledRakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb910
//
// 004bb910  8b8100090000         mov eax, dword ptr [ecx + 0x900]
// 004bb916  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004bb910 {
    char pad0[2304];
    int m_x;
    int f();
};
int S_func_004bb910::f()
{
    return m_x;
}
