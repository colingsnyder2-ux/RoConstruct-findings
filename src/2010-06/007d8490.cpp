// roc 2010-06 007d8490  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8490
//
// 007d8490  8b442404             mov eax, dword ptr [esp + 4]
// 007d8494  8981bc010000         mov dword ptr [ecx + 0x1bc], eax
// 007d849a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007d8490 {
    char pad0[444];
    int m_x;
    void f(int a1);
};
void S_func_007d8490::f(int a1)
{
    m_x = (int)a1;
}
