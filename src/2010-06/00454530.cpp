// roc 2010-06 00454530  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454530
//
// 00454530  8b442404             mov eax, dword ptr [esp + 4]
// 00454534  898100010000         mov dword ptr [ecx + 0x100], eax
// 0045453a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00454530 {
    char pad0[256];
    int m_x;
    void f(int a1);
};
void S_func_00454530::f(int a1)
{
    m_x = (int)a1;
}
