// from server: 100% by tester
// roc 2010-06 007081e0  unit: RBX::KernelJoint  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007081e0
//
// 007081e0  8b442404             mov eax, dword ptr [esp + 4]
// 007081e4  8b4481f0             mov eax, dword ptr [ecx + eax*4 - 0x10]
// 007081e8  85c0                 test eax, eax
// 007081ea  7406                 je 0x7081f2
// 007081ec  83c008               add eax, 8
// 007081ef  c20400               ret 4
// 007081f2  33c0                 xor eax, eax
// 007081f4  c20400               ret 4

struct KernelJoint
{
    int m_values[1];
    int get(int index);
};

int KernelJoint::get(int index)
{
    int value = m_values[index - 4];
    return value ? value + 8 : 0;
}
