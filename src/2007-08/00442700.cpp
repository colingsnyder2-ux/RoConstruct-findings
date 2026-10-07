// roc 2007-08 00442700  unit: CPropGrid  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00442700
//
// 00442700  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00442703  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00442700 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00442700::f()
{
    return m_x;
}
