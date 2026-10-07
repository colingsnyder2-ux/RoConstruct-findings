// roc 2010-06 007d84a0  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d84a0
//
// 007d84a0  8b8184020000         mov eax, dword ptr [ecx + 0x284]
// 007d84a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007d84a0 {
    char pad0[644];
    int m_x;
    int f();
};
int S_func_007d84a0::f()
{
    return m_x;
}
