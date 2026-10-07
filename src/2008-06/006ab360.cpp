// roc 2008-06 006ab360  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab360
//
// 006ab360  8b442404             mov eax, dword ptr [esp + 4]
// 006ab364  8981d4000000         mov dword ptr [ecx + 0xd4], eax
// 006ab36a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006ab360 {
    char pad0[212];
    int m_x;
    void f(int a1);
};
void S_func_006ab360::f(int a1)
{
    m_x = (int)a1;
}
