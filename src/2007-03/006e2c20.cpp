// roc 2007-03 006e2c20  unit: seg_006e0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e2c20
//
// 006e2c20  56                   push esi
// 006e2c21  8bf1                 mov esi, ecx
// 006e2c23  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 006e2c2a  7429                 je 0x6e2c55
// 006e2c2c  57                   push edi
// 006e2c2d  8d8e80000000         lea ecx, [esi + 0x80]
// 006e2c33  e848a7feff           call 0x6cd380
// 006e2c38  8bf8                 mov edi, eax
// 006e2c3a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006e2c3d  50                   push eax
// 006e2c3e  8d8e9c000000         lea ecx, [esi + 0x9c]
// 006e2c44  e827fcffff           call 0x6e2870
// 006e2c49  897e7c               mov dword ptr [esi + 0x7c], edi
// 006e2c4c  5f                   pop edi
// 006e2c4d  8bce                 mov ecx, esi
// 006e2c4f  5e                   pop esi
// 006e2c50  e9dbedffff           jmp 0x6e1a30
// 006e2c55  5e                   pop esi
// 006e2c56  c3                   ret 
// copied from an identical function in another client (function ?sub_6F3A50@CXTPImageEditorPicture@ns_ROCX00004b@@QAEXXZ)

namespace ns_ROCX00004b {
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
