// roc 2007-08 007162e0  unit: CXTPRibbonTab  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007162e0
//
// 007162e0  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 007162e6  e9750c0000           jmp 0x716f60
// auto-matched from its assembly shape

struct P_func_007162e0 { void g(); };
struct S_func_007162e0 {
    char pad[132];
    P_func_007162e0* m_p;
    void f();
};
void S_func_007162e0::f()
{
    m_p->g();
}
