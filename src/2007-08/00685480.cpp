// roc 2007-08 00685480  unit: CXTPPropExchangeArchive  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00685480
//
// 00685480  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00685483  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00685480 {
    char pad0[64];
    int m_x;
    int f(int a1);
};
int S_func_00685480::f(int a1)
{
    return m_x;
}
