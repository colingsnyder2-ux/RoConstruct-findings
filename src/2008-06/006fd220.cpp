// roc 2008-06 006fd220  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd220
//
// 006fd220  8b442404             mov eax, dword ptr [esp + 4]
// 006fd224  894158               mov dword ptr [ecx + 0x58], eax
// 006fd227  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006fd220 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_006fd220::f(int a1)
{
    m_x = (int)a1;
}
