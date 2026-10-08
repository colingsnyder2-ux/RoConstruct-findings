// roc 2007-08 00720de0  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720de0
//
// 00720de0  8b442404             mov eax, dword ptr [esp + 4]
// 00720de4  898190000000         mov dword ptr [ecx + 0x90], eax
// 00720dea  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720de0 {
    char pad0[144];
    int m_x;
    void f(int a1);
};
void S_func_00720de0::f(int a1)
{
    m_x = (int)a1;
}
