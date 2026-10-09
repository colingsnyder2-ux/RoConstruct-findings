// roc 2009-12 008f4430  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4430
//
// 008f4430  8b442404             mov eax, dword ptr [esp + 4]
// 008f4434  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 008f443a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00819750@ns_ROCX0000c2@@QAEXH@Z)

namespace ns_ROCX0000c2 {
struct S_func_00819750 {
    char pad0[184];
    int m_x;
    void f(int a1);
};
void S_func_00819750::f(int a1)
{
    m_x = (int)a1;
}
}
