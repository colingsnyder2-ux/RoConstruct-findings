// roc 2008-06 004bbef0  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbef0
//
// 004bbef0  8b442404             mov eax, dword ptr [esp + 4]
// 004bbef4  898130070000         mov dword ptr [ecx + 0x730], eax
// 004bbefa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004bbef0 {
    char pad0[1840];
    int m_x;
    void f(int a1);
};
void S_func_004bbef0::f(int a1)
{
    m_x = (int)a1;
}
