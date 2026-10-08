// roc 2007-03 00645200  unit: seg_00640000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00645200
//
// 00645200  8b442404             mov eax, dword ptr [esp + 4]
// 00645204  898128020000         mov dword ptr [ecx + 0x228], eax
// 0064520a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00645200 {
    char pad0[552];
    int m_x;
    void f(int a1);
};
void S_func_00645200::f(int a1)
{
    m_x = (int)a1;
}
