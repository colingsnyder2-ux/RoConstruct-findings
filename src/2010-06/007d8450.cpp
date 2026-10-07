// roc 2010-06 007d8450  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8450
//
// 007d8450  8b442404             mov eax, dword ptr [esp + 4]
// 007d8454  8981b8020000         mov dword ptr [ecx + 0x2b8], eax
// 007d845a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007d8450 {
    char pad0[696];
    int m_x;
    void f(int a1);
};
void S_func_007d8450::f(int a1)
{
    m_x = (int)a1;
}
