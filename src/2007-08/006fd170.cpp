// roc 2007-08 006fd170  unit: CXTPTabManagerItem  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd170
//
// 006fd170  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006fd173  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006fd170 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_006fd170::f()
{
    return m_x;
}
