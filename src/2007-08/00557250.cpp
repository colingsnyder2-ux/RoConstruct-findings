// roc 2007-08 00557250  unit: ChatEnter  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00557250
//
// 00557250  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00557253  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00557250 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_00557250::f()
{
    return m_x;
}
