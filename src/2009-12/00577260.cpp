// roc 2009-12 00577260  unit: RBX::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577260
//
// 00577260  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00577266  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0069f6b0@ns_ROCX00001a@@QAEHXZ)

namespace ns_ROCX00001a {
struct S_func_0069f6b0 {
    char pad0[184];
    int m_x;
    int f();
};
int S_func_0069f6b0::f()
{
    return m_x;
}
}
