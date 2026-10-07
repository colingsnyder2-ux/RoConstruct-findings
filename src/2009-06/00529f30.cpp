// roc 2009-06 00529f30  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529f30
//
// 00529f30  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00529f36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00529f30 {
    char pad0[248];
    int m_x;
    int f();
};
int S_func_00529f30::f()
{
    return m_x;
}
