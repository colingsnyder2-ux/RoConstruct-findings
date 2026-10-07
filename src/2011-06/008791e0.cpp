// roc 2011-06 008791e0  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008791e0
//
// 008791e0  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008791e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008791e0 {
    char pad0[128];
    int m_x;
    int f();
};
int S_func_008791e0::f()
{
    return m_x;
}
