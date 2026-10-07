// roc 2011-06 00837dd0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837dd0
//
// 00837dd0  8b09                 mov ecx, dword ptr [ecx]
// 00837dd2  e909f2ffff           jmp 0x836fe0
// auto-matched from its assembly shape

struct P_func_00837dd0 { void g(); };
struct S_func_00837dd0 {
    P_func_00837dd0* m_p;
    void f();
};
void S_func_00837dd0::f()
{
    m_p->g();
}
