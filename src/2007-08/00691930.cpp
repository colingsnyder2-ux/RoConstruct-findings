// roc 2007-08 00691930  unit: CSelectionCaption  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00691930
//
// 00691930  8b4908               mov ecx, dword ptr [ecx + 8]
// 00691933  e9f4ebf9ff           jmp 0x63052c
// auto-matched from its assembly shape

struct P_func_00691930 { void g(); };
struct S_func_00691930 {
    char pad[8];
    P_func_00691930* m_p;
    void f();
};
void S_func_00691930::f()
{
    m_p->g();
}
