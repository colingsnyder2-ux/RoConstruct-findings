// roc 2011-06 00451920  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451920
//
// 00451920  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00451923  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451920 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_00451920::f()
{
    return m_x;
}
