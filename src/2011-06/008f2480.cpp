// roc 2011-06 008f2480  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2480
//
// 008f2480  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 008f2486  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008f2480 {
    char pad0[156];
    int m_x;
    int f();
};
int S_func_008f2480::f()
{
    return m_x;
}
