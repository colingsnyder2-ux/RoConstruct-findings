// roc 2008-06 0068bd90  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bd90
//
// 0068bd90  8b442404             mov eax, dword ptr [esp + 4]
// 0068bd94  894134               mov dword ptr [ecx + 0x34], eax
// 0068bd97  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0068bd90 {
    char pad0[52];
    int m_x;
    void f(int a1);
};
void S_func_0068bd90::f(int a1)
{
    m_x = (int)a1;
}
