// roc 2009-06 00743a40  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743a40
//
// 00743a40  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00743a46  e955c20700           jmp 0x7bfca0
// auto-matched from its assembly shape

struct P_func_00743a40 { void g(); };
struct S_func_00743a40 {
    char pad[256];
    P_func_00743a40* m_p;
    void f();
};
void S_func_00743a40::f()
{
    m_p->g();
}
