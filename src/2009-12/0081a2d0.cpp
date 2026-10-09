// roc 2009-12 0081a2d0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a2d0
//
// 0081a2d0  8b442404             mov eax, dword ptr [esp + 4]
// 0081a2d4  89413c               mov dword ptr [ecx + 0x3c], eax
// 0081a2d7  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0073f3b0@ns_ROCX000077@@QAEXH@Z)

namespace ns_ROCX000077 {
struct S_func_0073f3b0 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_0073f3b0::f(int a1)
{
    m_x = (int)a1;
}
}
