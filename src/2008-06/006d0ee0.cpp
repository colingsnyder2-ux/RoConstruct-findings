// roc 2008-06 006d0ee0  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0ee0
//
// 006d0ee0  8b8184020000         mov eax, dword ptr [ecx + 0x284]
// 006d0ee6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d0ee0 {
    char pad0[644];
    int m_x;
    int f();
};
int S_func_006d0ee0::f()
{
    return m_x;
}
