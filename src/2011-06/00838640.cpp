// roc 2011-06 00838640  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838640
//
// 00838640  8b442404             mov eax, dword ptr [esp + 4]
// 00838644  898184020000         mov dword ptr [ecx + 0x284], eax
// 0083864a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00838640 {
    char pad0[644];
    int m_x;
    void f(int a1);
};
void S_func_00838640::f(int a1)
{
    m_x = (int)a1;
}
