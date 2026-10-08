// roc 2007-03 00644390  unit: seg_00640000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00644390
//
// 00644390  8b442404             mov eax, dword ptr [esp + 4]
// 00644394  898160010000         mov dword ptr [ecx + 0x160], eax
// 0064439a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00644390 {
    char pad0[352];
    int m_x;
    void f(int a1);
};
void S_func_00644390::f(int a1)
{
    m_x = (int)a1;
}
