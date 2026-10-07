// roc 2011-06 00832a80  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832a80
//
// 00832a80  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00832a86  e9d5920700           jmp 0x8abd60
// auto-matched from its assembly shape

struct P_func_00832a80 { void g(); };
struct S_func_00832a80 {
    char pad[256];
    P_func_00832a80* m_p;
    void f();
};
void S_func_00832a80::f()
{
    m_p->g();
}
