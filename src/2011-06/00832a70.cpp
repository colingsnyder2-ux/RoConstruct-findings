// roc 2011-06 00832a70  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832a70
//
// 00832a70  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00832a76  e995920700           jmp 0x8abd10
// auto-matched from its assembly shape

struct P_func_00832a70 { void g(); };
struct S_func_00832a70 {
    char pad[256];
    P_func_00832a70* m_p;
    void f();
};
void S_func_00832a70::f()
{
    m_p->g();
}
