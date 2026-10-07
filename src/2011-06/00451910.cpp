// roc 2011-06 00451910  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451910
//
// 00451910  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00451913  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451910 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00451910::f()
{
    return m_x;
}
