// roc 2010-06 007f91b0  unit: RBX::VirtualHardwareDevice  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f91b0
//
// 007f91b0  8b442404             mov eax, dword ptr [esp + 4]
// 007f91b4  894138               mov dword ptr [ecx + 0x38], eax
// 007f91b7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007f91b0 {
    char pad0[56];
    int m_x;
    void f(int a1);
};
void S_func_007f91b0::f(int a1)
{
    m_x = (int)a1;
}
