// roc 2008-06 004bbe10  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbe10
//
// 004bbe10  8b442404             mov eax, dword ptr [esp + 4]
// 004bbe14  89812c070000         mov dword ptr [ecx + 0x72c], eax
// 004bbe1a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004bbe10 {
    char pad0[1836];
    int m_x;
    void f(int a1);
};
void S_func_004bbe10::f(int a1)
{
    m_x = (int)a1;
}
