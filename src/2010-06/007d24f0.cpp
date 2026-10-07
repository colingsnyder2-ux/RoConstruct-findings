// roc 2010-06 007d24f0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d24f0
//
// 007d24f0  8b442404             mov eax, dword ptr [esp + 4]
// 007d24f4  8981c0010000         mov dword ptr [ecx + 0x1c0], eax
// 007d24fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007d24f0 {
    char pad0[448];
    int m_x;
    void f(int a1);
};
void S_func_007d24f0::f(int a1)
{
    m_x = (int)a1;
}
