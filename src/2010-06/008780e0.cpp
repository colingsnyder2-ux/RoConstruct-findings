// roc 2010-06 008780e0  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008780e0
//
// 008780e0  56                   push esi
// 008780e1  8bf1                 mov esi, ecx
// 008780e3  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 008780ea  7429                 je 0x878115
// 008780ec  57                   push edi
// 008780ed  8d8e80000000         lea ecx, [esi + 0x80]
// 008780f3  e8b8ebffff           call 0x876cb0
// 008780f8  8bf8                 mov edi, eax
// 008780fa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008780fd  50                   push eax
// 008780fe  8d8e9c000000         lea ecx, [esi + 0x9c]
// 00878104  e897710100           call 0x88f2a0
// 00878109  897e7c               mov dword ptr [esi + 0x7c], edi
// 0087810c  5f                   pop edi
// 0087810d  8bce                 mov ecx, esi
// 0087810f  5e                   pop esi
// 00878110  e90beeffff           jmp 0x876f20
// 00878115  5e                   pop esi
// 00878116  c3                   ret 
// copied from an identical function in another client (function ?sub_6F3A50@CXTPImageEditorPicture@ns_ROCX0000be@@QAEXXZ)

namespace ns_ROCX0000be {
struct CXTPImageEditorPicture {
    void sub_6F3A50();
    int sub_6E4440();
    int sub_6E4770(int);
    void sub_6F2890();
    char pad[0x7c];
    int field_7c;
    char pad2[0x0c];
    int field_8c;
};

void CXTPImageEditorPicture::sub_6F3A50() {
    if (field_8c != 0) {
        int saved = ((CXTPImageEditorPicture*)((char*)this + 0x80))->sub_6E4440();
        ((CXTPImageEditorPicture*)((char*)this + 0x9c))->sub_6E4770(field_7c);
        field_7c = saved;
        sub_6F2890();
    }
}
}
