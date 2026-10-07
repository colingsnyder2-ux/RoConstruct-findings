// roc 2009-06 0077ee40  unit: CSelectionCaption  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077ee40
//
// 0077ee40  8b4908               mov ecx, dword ptr [ecx + 8]
// 0077ee43  e9eca5f9ff           jmp 0x719434
// auto-matched from its assembly shape

struct P_func_0077ee40 { void g(); };
struct S_func_0077ee40 {
    char pad[8];
    P_func_0077ee40* m_p;
    void f();
};
void S_func_0077ee40::f()
{
    m_p->g();
}
