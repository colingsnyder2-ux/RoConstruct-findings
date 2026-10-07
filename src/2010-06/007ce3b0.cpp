// roc 2010-06 007ce3b0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce3b0
//
// 007ce3b0  8b442404             mov eax, dword ptr [esp + 4]
// 007ce3b4  894134               mov dword ptr [ecx + 0x34], eax
// 007ce3b7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007ce3b0 {
    char pad0[52];
    int m_x;
    void f(int a1);
};
void S_func_007ce3b0::f(int a1)
{
    m_x = (int)a1;
}
