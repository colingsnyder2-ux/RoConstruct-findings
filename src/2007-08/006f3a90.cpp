// from server: 100% by colin
// roc 2007-08 006f3a90  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f3a90
//
// 006f3a90  56                   push esi
// 006f3a91  8bf1                 mov esi, ecx
// 006f3a93  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 006f3a9a  7429                 je 0x6f3ac5
// 006f3a9c  57                   push edi
// 006f3a9d  8d8e9c000000         lea ecx, [esi + 0x9c]
// 006f3aa3  e89809ffff           call 0x6e4440
// 006f3aa8  8bf8                 mov edi, eax
// 006f3aaa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006f3aad  50                   push eax
// 006f3aae  8d8e80000000         lea ecx, [esi + 0x80]
// 006f3ab4  e8b70cffff           call 0x6e4770
// 006f3ab9  897e7c               mov dword ptr [esi + 0x7c], edi
// 006f3abc  5f                   pop edi
// 006f3abd  8bce                 mov ecx, esi
// 006f3abf  5e                   pop esi
// 006f3ac0  e9cbedffff           jmp 0x6f2890
// 006f3ac5  5e                   pop esi
// 006f3ac6  c3                   ret 

struct CXTPImageEditorPicture {
    void sub_6F3A90();
    int sub_6E4440();
    int sub_6E4770(int);
    void sub_6F2890();
    char pad[0x7c];
    int field_7c;
    char pad2[0x28];
    int field_a8;
};

void CXTPImageEditorPicture::sub_6F3A90() {
    if (field_a8 != 0) {
        int saved = ((CXTPImageEditorPicture*)((char*)this + 0x9c))->sub_6E4440();
        ((CXTPImageEditorPicture*)((char*)this + 0x80))->sub_6E4770(field_7c);
        field_7c = saved;
        sub_6F2890();
    }
}
