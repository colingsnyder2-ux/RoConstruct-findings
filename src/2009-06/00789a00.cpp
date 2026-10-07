// roc 2009-06 00789a00  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789a00
//
// 00789a00  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00789a06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00789a00 {
    char pad0[128];
    int m_x;
    int f();
};
int S_func_00789a00::f()
{
    return m_x;
}
