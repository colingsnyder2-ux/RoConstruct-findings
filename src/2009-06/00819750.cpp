// roc 2009-06 00819750  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819750
//
// 00819750  8b442404             mov eax, dword ptr [esp + 4]
// 00819754  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 0081975a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00819750 {
    char pad0[184];
    int m_x;
    void f(int a1);
};
void S_func_00819750::f(int a1)
{
    m_x = (int)a1;
}
