// roc 2009-12 00824430  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824430
//
// 00824430  8b442404             mov eax, dword ptr [esp + 4]
// 00824434  8981bc010000         mov dword ptr [ecx + 0x1bc], eax
// 0082443a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00749620@ns_ROCX000015@@QAEXH@Z)

namespace ns_ROCX000015 {
struct S_func_00749620 {
    char pad0[444];
    int m_x;
    void f(int a1);
};
void S_func_00749620::f(int a1)
{
    m_x = (int)a1;
}
}
