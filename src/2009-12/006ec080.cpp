// roc 2009-12 006ec080  unit: RBX::Geometry  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec080
//
// 006ec080  8b442404             mov eax, dword ptr [esp + 4]
// 006ec084  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 006ec087  7506                 jne 0x6ec08f
// 006ec089  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006ec08c  c20400               ret 4
// 006ec08f  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 006ec092  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0066f650@ns_ROCX00000e@@QAEHH@Z)

namespace ns_ROCX00000e {
// from server: 100% by why2
struct S_func_0066f650 {
    char pad0[0x10];
    int m_key;
    char pad14[4];
    int m_value_if_equal;
    int m_value_otherwise;
    int f(int key);
};

int S_func_0066f650::f(int key)
{
    if (key == m_key)
        return m_value_if_equal;
    return m_value_otherwise;
}
}
