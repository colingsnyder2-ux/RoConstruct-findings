// roc 2009-06 00749640  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00749640
//
// 00749640  8b8184020000         mov eax, dword ptr [ecx + 0x284]
// 00749646  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00749640 {
    char pad0[644];
    int m_x;
    int f();
};
int S_func_00749640::f()
{
    return m_x;
}
