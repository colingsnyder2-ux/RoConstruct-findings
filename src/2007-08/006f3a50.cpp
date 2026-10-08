// from server: 100% by colin
// roc 2007-08 006f3a50  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f3a50
//
// 006f3a50  56                   push esi
// 006f3a51  8bf1                 mov esi, ecx
// 006f3a53  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 006f3a5a  7429                 je 0x6f3a85
// 006f3a5c  57                   push edi
// 006f3a5d  8d8e80000000         lea ecx, [esi + 0x80]
// 006f3a63  e8d809ffff           call 0x6e4440
// 006f3a68  8bf8                 mov edi, eax
// 006f3a6a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006f3a6d  50                   push eax
// 006f3a6e  8d8e9c000000         lea ecx, [esi + 0x9c]
// 006f3a74  e8f70cffff           call 0x6e4770
// 006f3a79  897e7c               mov dword ptr [esi + 0x7c], edi
// 006f3a7c  5f                   pop edi
// 006f3a7d  8bce                 mov ecx, esi
// 006f3a7f  5e                   pop esi
// 006f3a80  e90beeffff           jmp 0x6f2890
// 006f3a85  5e                   pop esi
// 006f3a86  c3                   ret 

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
