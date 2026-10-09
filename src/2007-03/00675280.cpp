// roc 2007-03 00675280  unit: seg_00670000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00675280
//
// 00675280  56                   push esi
// 00675281  8bf1                 mov esi, ecx
// 00675283  e8f8d3ffff           call 0x672680
// 00675288  6a01                 push 1
// 0067528a  8bce                 mov ecx, esi
// 0067528c  e80fffffff           call 0x6751a0
// 00675291  89463c               mov dword ptr [esi + 0x3c], eax
// 00675294  5e                   pop esi
// 00675295  c3                   ret 
// copied from an identical function in another client (function ?func_67d150@CXTPControls@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct CXTPControls
{
    char pad[0x3c];
    int field_3c;
    void sub_67a590();
    int sub_67d0c0(int);
    void func_67d150();
};

void CXTPControls::func_67d150()
{
    sub_67a590();
    field_3c = sub_67d0c0(1);
}
}
