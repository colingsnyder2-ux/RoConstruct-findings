// roc 2009-06 00748dd0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00748dd0
//
// 00748dd0  8b09                 mov ecx, dword ptr [ecx]
// 00748dd2  e909f2ffff           jmp 0x747fe0
// auto-matched from its assembly shape

struct P_func_00748dd0 { void g(); };
struct S_func_00748dd0 {
    P_func_00748dd0* m_p;
    void f();
};
void S_func_00748dd0::f()
{
    m_p->g();
}
