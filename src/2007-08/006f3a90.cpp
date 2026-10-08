// from server: 69% by colin
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
    char pad[0x7c];
    int field_7c;
    int field_80;
    char pad3[0x9c - 0x84];
    int field_9c;
    char pad4[0xa8 - 0xa0];
    int field_a8;
    void sub_6f2890();
    void func();
};

int sub_6e4440_helper(int* p);
int sub_6e4770_helper(int* p, int v);

void CXTPImageEditorPicture::func()
{
    if (this->field_a8 != 0)
    {
        int edi = sub_6e4440_helper(&this->field_9c);
        int eax = this->field_7c;
        sub_6e4770_helper(&this->field_80, eax);
        this->field_7c = edi;
        this->sub_6f2890();
    }
}
