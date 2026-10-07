// roc 2010-06 008a8580  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8580
//
// 008a8580  8b442404             mov eax, dword ptr [esp + 4]
// 008a8584  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 008a858a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a8580 {
    char pad0[172];
    int m_x;
    void f(int a1);
};
void S_func_008a8580::f(int a1)
{
    m_x = (int)a1;
}
