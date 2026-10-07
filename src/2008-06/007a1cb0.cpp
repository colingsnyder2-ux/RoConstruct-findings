// roc 2008-06 007a1cb0  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1cb0
//
// 007a1cb0  8b442404             mov eax, dword ptr [esp + 4]
// 007a1cb4  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 007a1cba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a1cb0 {
    char pad0[172];
    int m_x;
    void f(int a1);
};
void S_func_007a1cb0::f(int a1)
{
    m_x = (int)a1;
}
