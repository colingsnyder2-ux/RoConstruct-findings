// roc 2009-06 00819730  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819730
//
// 00819730  8b442404             mov eax, dword ptr [esp + 4]
// 00819734  898194000000         mov dword ptr [ecx + 0x94], eax
// 0081973a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00819730 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_00819730::f(int a1)
{
    m_x = (int)a1;
}
