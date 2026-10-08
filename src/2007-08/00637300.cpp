// from server: 100% by colin
// roc 2007-08 00637300  unit: CPatchedControlComboBox  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637300
//
// 00637300  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 00637306  50                   push eax
// 00637307  e8e4edffff           call 0x6360f0
// 0063730c  50                   push eax
// 0063730d  e8f08effff           call 0x630202
// 00637312  83c408               add esp, 8
// 00637315  c3                   ret 

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
