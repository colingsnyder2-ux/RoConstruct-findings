// roc 2011-06 00838610  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838610
//
// 00838610  8b442404             mov eax, dword ptr [esp + 4]
// 00838614  8981bc010000         mov dword ptr [ecx + 0x1bc], eax
// 0083861a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00838610 {
    char pad0[444];
    int m_x;
    void f(int a1);
};
void S_func_00838610::f(int a1)
{
    m_x = (int)a1;
}
