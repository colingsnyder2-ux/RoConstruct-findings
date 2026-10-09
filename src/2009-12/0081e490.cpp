// roc 2009-12 0081e490  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e490
//
// 0081e490  8b442404             mov eax, dword ptr [esp + 4]
// 0081e494  8981c0010000         mov dword ptr [ecx + 0x1c0], eax
// 0081e49a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_007435e0@ns_ROCX000006@@QAEXH@Z)

namespace ns_ROCX000006 {
struct S_func_007435e0 {
    char pad0[448];
    int m_x;
    void f(int a1);
};
void S_func_007435e0::f(int a1)
{
    m_x = (int)a1;
}
}
