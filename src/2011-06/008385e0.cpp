// roc 2011-06 008385e0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008385e0
//
// 008385e0  8b442404             mov eax, dword ptr [esp + 4]
// 008385e4  8981b8020000         mov dword ptr [ecx + 0x2b8], eax
// 008385ea  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008385e0 {
    char pad0[696];
    int m_x;
    void f(int a1);
};
void S_func_008385e0::f(int a1)
{
    m_x = (int)a1;
}
