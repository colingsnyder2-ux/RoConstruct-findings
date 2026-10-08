// roc 2007-08 0065e560  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e560
//
// 0065e560  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0065e563  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065e560 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_0065e560::f()
{
    return m_x;
}
