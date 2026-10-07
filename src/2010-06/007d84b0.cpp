// roc 2010-06 007d84b0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d84b0
//
// 007d84b0  8b442404             mov eax, dword ptr [esp + 4]
// 007d84b4  898184020000         mov dword ptr [ecx + 0x284], eax
// 007d84ba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007d84b0 {
    char pad0[644];
    int m_x;
    void f(int a1);
};
void S_func_007d84b0::f(int a1)
{
    m_x = (int)a1;
}
