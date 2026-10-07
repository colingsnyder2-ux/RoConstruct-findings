// roc 2008-06 0044ed40  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ed40
//
// 0044ed40  8b442404             mov eax, dword ptr [esp + 4]
// 0044ed44  898100010000         mov dword ptr [ecx + 0x100], eax
// 0044ed4a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044ed40 {
    char pad0[256];
    int m_x;
    void f(int a1);
};
void S_func_0044ed40::f(int a1)
{
    m_x = (int)a1;
}
