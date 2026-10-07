// roc 2008-06 00711200  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711200
//
// 00711200  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00711206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00711200 {
    char pad0[128];
    int m_x;
    int f();
};
int S_func_00711200::f()
{
    return m_x;
}
