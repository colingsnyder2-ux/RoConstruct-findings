// roc 2010-06 008a8560  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8560
//
// 008a8560  8b442404             mov eax, dword ptr [esp + 4]
// 008a8564  898194000000         mov dword ptr [ecx + 0x94], eax
// 008a856a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a8560 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_008a8560::f(int a1)
{
    m_x = (int)a1;
}
