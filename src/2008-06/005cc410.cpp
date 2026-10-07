// roc 2008-06 005cc410  unit: RBX::VCamera::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc410
//
// 005cc410  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 005cc416  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005cc410 {
    char pad0[476];
    int m_x;
    int f();
};
int S_func_005cc410::f()
{
    return m_x;
}
