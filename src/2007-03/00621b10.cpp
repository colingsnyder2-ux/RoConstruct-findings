// roc 2007-03 00621b10  unit: seg_00620000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00621b10
//
// 00621b10  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 00621b16  50                   push eax
// 00621b17  e844edffff           call 0x620860
// 00621b1c  50                   push eax
// 00621b1d  e86ecbffff           call 0x61e690
// 00621b22  83c408               add esp, 8
// 00621b25  c3                   ret 
// copied from an identical function in another client (function ?method_637300@CPatchedControlComboBox@ns_ROCX00002f@@QAEHXZ)

namespace ns_ROCX00002f {
struct CPatchedControlComboBox {
    char m_pad[0x16c];
    int m_field_16c;
    int method_637300();
};

extern "C" int __cdecl sub_6360f0(int);
extern "C" int __cdecl sub_630202(int);

int CPatchedControlComboBox::method_637300()
{
    return sub_630202(sub_6360f0(m_field_16c));
}
}
