// roc 2011-06 0081ad30  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ad30
//
// 0081ad30  8b442404             mov eax, dword ptr [esp + 4]
// 0081ad34  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0081ad3a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0081ad30 {
    char pad0[200];
    int m_x;
    void f(int a1);
};
void S_func_0081ad30::f(int a1)
{
    m_x = (int)a1;
}
