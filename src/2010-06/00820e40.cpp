// roc 2010-06 00820e40  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820e40
//
// 00820e40  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00820e46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00820e40 {
    char pad0[128];
    int m_x;
    int f();
};
int S_func_00820e40::f()
{
    return m_x;
}
