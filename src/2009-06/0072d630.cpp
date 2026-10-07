// roc 2009-06 0072d630  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d630
//
// 0072d630  8b442404             mov eax, dword ptr [esp + 4]
// 0072d634  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0072d63a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0072d630 {
    char pad0[200];
    int m_x;
    void f(int a1);
};
void S_func_0072d630::f(int a1)
{
    m_x = (int)a1;
}
