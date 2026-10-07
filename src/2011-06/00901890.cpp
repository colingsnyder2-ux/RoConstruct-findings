// roc 2011-06 00901890  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901890
//
// 00901890  8b442404             mov eax, dword ptr [esp + 4]
// 00901894  894134               mov dword ptr [ecx + 0x34], eax
// 00901897  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00901890 {
    char pad0[52];
    int m_x;
    void f(int a1);
};
void S_func_00901890::f(int a1)
{
    m_x = (int)a1;
}
