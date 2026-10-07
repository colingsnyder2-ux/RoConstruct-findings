// roc 2009-06 00743630  unit: RBX::VirtualHardwareDevice  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743630
//
// 00743630  8b442404             mov eax, dword ptr [esp + 4]
// 00743634  894128               mov dword ptr [ecx + 0x28], eax
// 00743637  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00743630 {
    char pad0[40];
    int m_x;
    void f(int a1);
};
void S_func_00743630::f(int a1)
{
    m_x = (int)a1;
}
