// roc 2007-08 0065bd50  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065bd50
//
// 0065bd50  8b442404             mov eax, dword ptr [esp + 4]
// 0065bd54  898130020000         mov dword ptr [ecx + 0x230], eax
// 0065bd5a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0065bd50 {
    char pad0[560];
    int m_x;
    void f(int a1);
};
void S_func_0065bd50::f(int a1)
{
    m_x = (int)a1;
}
