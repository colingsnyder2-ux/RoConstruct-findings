// roc 2009-12 00577200  unit: RBX::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577200
//
// 00577200  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 00577206  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005bd960@ns_ROCX00002f@@QAEHXZ)

namespace ns_ROCX00002f {
struct S_func_005bd960 {
    char pad0[640];
    int m_x;
    int f();
};
int S_func_005bd960::f()
{
    return m_x;
}
}
