// roc 2007-08 00714b90  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714b90
//
// 00714b90  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00714b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714b90 {
    char pad0[156];
    int m_x;
    int f();
};
int S_func_00714b90::f()
{
    return m_x;
}
