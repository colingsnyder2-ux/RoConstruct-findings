// roc 2011-06 00451930  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451930
//
// 00451930  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00451933  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451930 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_00451930::f()
{
    return m_x;
}
