// roc 2008-06 00770c90  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00770c90
//
// 00770c90  56                   push esi
// 00770c91  8bf1                 mov esi, ecx
// 00770c93  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 00770c9a  7429                 je 0x770cc5
// 00770c9c  57                   push edi
// 00770c9d  8d8e80000000         lea ecx, [esi + 0x80]
// 00770ca3  e8b842feff           call 0x754f60
// 00770ca8  8bf8                 mov edi, eax
// 00770caa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00770cad  50                   push eax
// 00770cae  8d8e9c000000         lea ecx, [esi + 0x9c]
// 00770cb4  e807aeffff           call 0x76bac0
// 00770cb9  897e7c               mov dword ptr [esi + 0x7c], edi
// 00770cbc  5f                   pop edi
// 00770cbd  8bce                 mov ecx, esi
// 00770cbf  5e                   pop esi
// 00770cc0  e90beeffff           jmp 0x76fad0
// 00770cc5  5e                   pop esi
// 00770cc6  c3                   ret 
// copied from an identical function in another client (function ?sub_6F3A50@CXTPImageEditorPicture@ns_ROCX0000d6@@QAEXXZ)

namespace ns_ROCX0000d6 {
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
