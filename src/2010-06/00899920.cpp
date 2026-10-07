// roc 2010-06 00899920  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899920
//
// 00899920  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00899926  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00899920 {
    char pad0[156];
    int m_x;
    int f();
};
int S_func_00899920::f()
{
    return m_x;
}
