// roc 2011-06 00832620  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832620
//
// 00832620  8b442404             mov eax, dword ptr [esp + 4]
// 00832624  8981c0010000         mov dword ptr [ecx + 0x1c0], eax
// 0083262a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00832620 {
    char pad0[448];
    int m_x;
    void f(int a1);
};
void S_func_00832620::f(int a1)
{
    m_x = (int)a1;
}
