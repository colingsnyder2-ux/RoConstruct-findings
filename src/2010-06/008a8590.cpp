// roc 2010-06 008a8590  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8590
//
// 008a8590  8b442404             mov eax, dword ptr [esp + 4]
// 008a8594  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 008a859a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a8590 {
    char pad0[184];
    int m_x;
    void f(int a1);
};
void S_func_008a8590::f(int a1)
{
    m_x = (int)a1;
}
