// roc 2008-06 006cb450  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb450
//
// 006cb450  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006cb456  e945b50700           jmp 0x7469a0
// auto-matched from its assembly shape

struct P_func_006cb450 { void g(); };
struct S_func_006cb450 {
    char pad[256];
    P_func_006cb450* m_p;
    void f();
};
void S_func_006cb450::f()
{
    m_p->g();
}
