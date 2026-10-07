// roc 2010-06 006c70a0  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c70a0
//
// 006c70a0  8b81bc010000         mov eax, dword ptr [ecx + 0x1bc]
// 006c70a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c70a0 {
    char pad0[444];
    int m_x;
    int f();
};
int S_func_006c70a0::f()
{
    return m_x;
}
