// roc 2009-06 006a6140  unit: CXTCaptionButtonTheme  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a6140
//
// 006a6140  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006a6143  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6140 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_006a6140::f()
{
    return m_x;
}
