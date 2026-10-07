// roc 2008-06 006b50b0  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b50b0
//
// 006b50b0  8b442404             mov eax, dword ptr [esp + 4]
// 006b50b4  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 006b50ba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006b50b0 {
    char pad0[200];
    int m_x;
    void f(int a1);
};
void S_func_006b50b0::f(int a1)
{
    m_x = (int)a1;
}
