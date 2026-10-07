// roc 2010-06 008a81b0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a81b0
//
// 008a81b0  8b442404             mov eax, dword ptr [esp + 4]
// 008a81b4  894128               mov dword ptr [ecx + 0x28], eax
// 008a81b7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a81b0 {
    char pad0[40];
    int m_x;
    void f(int a1);
};
void S_func_008a81b0::f(int a1)
{
    m_x = (int)a1;
}
