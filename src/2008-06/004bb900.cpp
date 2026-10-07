// roc 2008-06 004bb900  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb900
//
// 004bb900  8b442404             mov eax, dword ptr [esp + 4]
// 004bb904  898100090000         mov dword ptr [ecx + 0x900], eax
// 004bb90a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004bb900 {
    char pad0[2304];
    int m_x;
    void f(int a1);
};
void S_func_004bb900::f(int a1)
{
    m_x = (int)a1;
}
