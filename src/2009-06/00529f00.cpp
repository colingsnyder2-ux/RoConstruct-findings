// roc 2009-06 00529f00  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529f00
//
// 00529f00  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 00529f06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00529f00 {
    char pad0[560];
    int m_x;
    int f();
};
int S_func_00529f00::f()
{
    return m_x;
}
