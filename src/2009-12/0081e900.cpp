// roc 2009-12 0081e900  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e900
//
// 0081e900  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0081e906  e995c10700           jmp 0x89aaa0
// copied from an identical function in another client (function ?f@S_func_00743a30@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
struct P_func_00743a30 { void g(); };
struct S_func_00743a30 {
    char pad[256];
    P_func_00743a30* m_p;
    void f();
};
void S_func_00743a30::f()
{
    m_p->g();
}
}
