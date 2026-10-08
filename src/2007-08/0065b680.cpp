// roc 2007-08 0065b680  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b680
//
// 0065b680  8b09                 mov ecx, dword ptr [ecx]
// 0065b682  e919f0ffff           jmp 0x65a6a0
// auto-matched from its assembly shape

struct P_func_0065b680 { void g(); };
struct S_func_0065b680 {
    P_func_0065b680* m_p;
    void f();
};
void S_func_0065b680::f()
{
    m_p->g();
}
