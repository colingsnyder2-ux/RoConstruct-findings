// roc 2010-06 007d2950  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2950
//
// 007d2950  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007d2956  e955c20700           jmp 0x84ebb0
// auto-matched from its assembly shape

struct P_func_007d2950 { void g(); };
struct S_func_007d2950 {
    char pad[256];
    P_func_007d2950* m_p;
    void f();
};
void S_func_007d2950::f()
{
    m_p->g();
}
