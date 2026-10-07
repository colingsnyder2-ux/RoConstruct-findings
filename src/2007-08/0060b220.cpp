// roc 2007-08 0060b220  unit: CXTCaptionButtonTheme  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b220
//
// 0060b220  8b442404             mov eax, dword ptr [esp + 4]
// 0060b224  894128               mov dword ptr [ecx + 0x28], eax
// 0060b227  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0060b220 {
    char pad0[40];
    int m_x;
    void f(int a1);
};
void S_func_0060b220::f(int a1)
{
    m_x = (int)a1;
}
