// roc 2007-08 00675880  unit: CXTPCustomizeSheet  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00675880
//
// 00675880  8b81ac010000         mov eax, dword ptr [ecx + 0x1ac]
// 00675886  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0067588c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00675880 {
    char pad[184];
    int m_x;
};
struct S_func_00675880 {
    char pad[428];
    I_func_00675880* m_p;
    int f();
};
int S_func_00675880::f()
{
    return m_p->m_x;
}
