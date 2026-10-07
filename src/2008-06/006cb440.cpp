// roc 2008-06 006cb440  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb440
//
// 006cb440  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006cb446  e905b50700           jmp 0x746950
// auto-matched from its assembly shape

struct P_func_006cb440 { void g(); };
struct S_func_006cb440 {
    char pad[256];
    P_func_006cb440* m_p;
    void f();
};
void S_func_006cb440::f()
{
    m_p->g();
}
