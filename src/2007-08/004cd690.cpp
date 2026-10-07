// roc 2007-08 004cd690  unit: 0RBX::View  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd690
//
// 004cd690  8b4108               mov eax, dword ptr [ecx + 8]
// 004cd693  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 004cd699  c3                   ret 
// auto-matched from its assembly shape

struct I_func_004cd690 {
    char pad[392];
    int m_x;
};
struct S_func_004cd690 {
    char pad[8];
    I_func_004cd690* m_p;
    int f();
};
int S_func_004cd690::f()
{
    return m_p->m_x;
}
