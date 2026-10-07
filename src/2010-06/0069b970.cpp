// roc 2010-06 0069b970  unit: RBX::PolyContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069b970
//
// 0069b970  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0069b976  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069b970 {
    char pad0[344];
    int m_x;
    int f();
};
int S_func_0069b970::f()
{
    return m_x;
}
