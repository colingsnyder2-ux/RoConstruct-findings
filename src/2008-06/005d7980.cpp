// roc 2008-06 005d7980  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7980
//
// 005d7980  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 005d7986  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d7980 {
    char pad0[444];
    int m_x;
    int f();
};
int S_func_005d7980::f()
{
    return m_x;
}
