// roc 2007-08 00720df0  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00720df0
//
// 00720df0  8b442404             mov eax, dword ptr [esp + 4]
// 00720df4  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 00720dfa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720df0 {
    char pad0[156];
    int m_x;
    void f(int a1);
};
void S_func_00720df0::f(int a1)
{
    m_x = (int)a1;
}
