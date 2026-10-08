// roc 2007-03 00666990  unit: seg_00660000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666990
//
// 00666990  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00666993  e97884fbff           jmp 0x61ee10
// auto-matched from its assembly shape

struct P_func_00666990 { void g(); };
struct S_func_00666990 {
    char pad[64];
    P_func_00666990* m_p;
    void f();
};
void S_func_00666990::f()
{
    m_p->g();
}
