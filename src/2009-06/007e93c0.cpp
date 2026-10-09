// roc 2009-06 007e93c0  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e93c0
//
// 007e93c0  56                   push esi
// 007e93c1  8bf1                 mov esi, ecx
// 007e93c3  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 007e93ca  7429                 je 0x7e93f5
// 007e93cc  57                   push edi
// 007e93cd  8d8e80000000         lea ecx, [esi + 0x80]
// 007e93d3  e86841feff           call 0x7cd540
// 007e93d8  8bf8                 mov edi, eax
// 007e93da  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007e93dd  50                   push eax
// 007e93de  8d8e9c000000         lea ecx, [esi + 0x9c]
// 007e93e4  e8e7c4ffff           call 0x7e58d0
// 007e93e9  897e7c               mov dword ptr [esi + 0x7c], edi
// 007e93ec  5f                   pop edi
// 007e93ed  8bce                 mov ecx, esi
// 007e93ef  5e                   pop esi
// 007e93f0  e90beeffff           jmp 0x7e8200
// 007e93f5  5e                   pop esi
// 007e93f6  c3                   ret 
// copied from an identical function in another client (function ?sub_6F3A50@CXTPImageEditorPicture@ns_ROCX0000b4@@QAEXXZ)

namespace ns_ROCX0000b4 {
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
