// roc 2009-06 007ec6c0  unit: CXTPPropertyGridInplaceEdit  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ec6c0
//
// 007ec6c0  8b4108               mov eax, dword ptr [ecx + 8]
// 007ec6c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007ec6c0 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_007ec6c0::f()
{
    return m_x;
}
