// roc 2009-06 00529f10  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529f10
//
// 00529f10  8d818c000000         lea eax, [ecx + 0x8c]
// 00529f16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00529f10 {
    char pad0[140];
    int m_x;
    int* f();
};
int* S_func_00529f10::f()
{
    return &m_x;
}
