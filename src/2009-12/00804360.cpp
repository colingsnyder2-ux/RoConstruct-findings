// roc 2009-12 00804360  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804360
//
// 00804360  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00804366  8b4014               mov eax, dword ptr [eax + 0x14]
// 00804369  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0072d220@ns_ROCX00004f@@QAEHXZ)

namespace ns_ROCX00004f {
struct I_func_0072d220 {
    char pad[20];
    int m_x;
};
struct S_func_0072d220 {
    char pad[376];
    I_func_0072d220* m_p;
    int f();
};
int S_func_0072d220::f()
{
    return m_p->m_x;
}
}
