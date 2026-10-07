// roc 2009-06 0071fa40  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071fa40
//
// 0071fa40  8b442404             mov eax, dword ptr [esp + 4]
// 0071fa44  8981d4000000         mov dword ptr [ecx + 0xd4], eax
// 0071fa4a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0071fa40 {
    char pad0[212];
    int m_x;
    void f(int a1);
};
void S_func_0071fa40::f(int a1)
{
    m_x = (int)a1;
}
