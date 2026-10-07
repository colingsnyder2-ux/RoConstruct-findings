// roc 2011-06 008df0c0  unit: CXTPPropertyGridInplaceEdit  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df0c0
//
// 008df0c0  8b4108               mov eax, dword ptr [ecx + 8]
// 008df0c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008df0c0 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_008df0c0::f()
{
    return m_x;
}
