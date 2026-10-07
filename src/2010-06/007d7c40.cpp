// roc 2010-06 007d7c40  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d7c40
//
// 007d7c40  8b09                 mov ecx, dword ptr [ecx]
// 007d7c42  e909f2ffff           jmp 0x7d6e50
// auto-matched from its assembly shape

struct P_func_007d7c40 { void g(); };
struct S_func_007d7c40 {
    P_func_007d7c40* m_p;
    void f();
};
void S_func_007d7c40::f()
{
    m_p->g();
}
