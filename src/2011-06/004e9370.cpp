// roc 2011-06 004e9370  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e9370
//
// 004e9370  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 004e9376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e9370 {
    char pad0[276];
    int m_x;
    int f();
};
int S_func_004e9370::f()
{
    return m_x;
}
