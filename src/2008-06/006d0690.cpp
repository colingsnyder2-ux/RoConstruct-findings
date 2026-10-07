// roc 2008-06 006d0690  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0690
//
// 006d0690  8b09                 mov ecx, dword ptr [ecx]
// 006d0692  e909f2ffff           jmp 0x6cf8a0
// auto-matched from its assembly shape

struct P_func_006d0690 { void g(); };
struct S_func_006d0690 {
    P_func_006d0690* m_p;
    void f();
};
void S_func_006d0690::f()
{
    m_p->g();
}
