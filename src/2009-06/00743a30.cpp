// roc 2009-06 00743a30  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743a30
//
// 00743a30  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00743a36  e915c20700           jmp 0x7bfc50
// auto-matched from its assembly shape

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
