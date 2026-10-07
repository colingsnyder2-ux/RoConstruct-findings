// roc 2009-06 006a6130  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a6130
//
// 006a6130  8b442404             mov eax, dword ptr [esp + 4]
// 006a6134  894134               mov dword ptr [ecx + 0x34], eax
// 006a6137  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006a6130 {
    char pad0[52];
    int m_x;
    void f(int a1);
};
void S_func_006a6130::f(int a1)
{
    m_x = (int)a1;
}
