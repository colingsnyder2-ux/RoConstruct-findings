// roc 2007-08 00631c20  unit: CXTPCommandBars  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00631c20
//
// 00631c20  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00631c26  e905a20000           jmp 0x63be30
// auto-matched from its assembly shape

struct P_func_00631c20 { void g(); };
struct S_func_00631c20 {
    char pad[188];
    P_func_00631c20* m_p;
    void f();
};
void S_func_00631c20::f()
{
    m_p->g();
}
