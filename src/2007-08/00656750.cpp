// roc 2007-08 00656750  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656750
//
// 00656750  8b442404             mov eax, dword ptr [esp + 4]
// 00656754  898168010000         mov dword ptr [ecx + 0x168], eax
// 0065675a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00656750 {
    char pad0[360];
    int m_x;
    void f(int a1);
};
void S_func_00656750::f(int a1)
{
    m_x = (int)a1;
}
