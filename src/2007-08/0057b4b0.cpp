// roc 2007-08 0057b4b0  unit: RBX::RootInstance  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b4b0
//
// 0057b4b0  8b897c020000         mov ecx, dword ptr [ecx + 0x27c]
// 0057b4b6  e925ef0200           jmp 0x5aa3e0
// auto-matched from its assembly shape

struct P_func_0057b4b0 { void g(); };
struct S_func_0057b4b0 {
    char pad[636];
    P_func_0057b4b0* m_p;
    void f();
};
void S_func_0057b4b0::f()
{
    m_p->g();
}
