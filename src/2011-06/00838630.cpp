// roc 2011-06 00838630  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838630
//
// 00838630  8b8184020000         mov eax, dword ptr [ecx + 0x284]
// 00838636  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00838630 {
    char pad0[644];
    int m_x;
    int f();
};
int S_func_00838630::f()
{
    return m_x;
}
