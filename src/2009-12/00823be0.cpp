// roc 2009-12 00823be0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00823be0
//
// 00823be0  8b09                 mov ecx, dword ptr [ecx]
// 00823be2  e909f2ffff           jmp 0x822df0
// copied from an identical function in another client (function ?f@S_func_006b0e00@ns_ROCX00003d@@QAEXXZ)

namespace ns_ROCX00003d {
struct P_func_006b0e00 { void g(); };
struct S_func_006b0e00 {
    P_func_006b0e00* m_p;
    void f();
};
void S_func_006b0e00::f()
{
    m_p->g();
}
}
