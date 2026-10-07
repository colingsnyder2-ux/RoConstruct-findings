// roc 2011-06 00856af0  unit: RBX::VirtualHardwareDevice  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856af0
//
// 00856af0  8b442404             mov eax, dword ptr [esp + 4]
// 00856af4  894138               mov dword ptr [ecx + 0x38], eax
// 00856af7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00856af0 {
    char pad0[56];
    int m_x;
    void f(int a1);
};
void S_func_00856af0::f(int a1)
{
    m_x = (int)a1;
}
