// from server: 100% by king_originala
// roc 2008-06 0042eb40  unit: CPatchedControlComboBox  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eb40
//
// 0042eb40  6aff                 push -1
// 0042eb42  6828317c00           push 0x7c3128
// 0042eb47  64a100000000         mov eax, dword ptr fs:[0]
// 0042eb4d  50                   push eax
// 0042eb4e  64892500000000       mov dword ptr fs:[0], esp
// 0042eb55  51                   push ecx
// 0042eb56  56                   push esi
// 0042eb57  8bf1                 mov esi, ecx
// 0042eb59  89742404             mov dword ptr [esp + 4], esi
// 0042eb5d  e83c242700           call 0x6a0f9e
// 0042eb62  8d4e58               lea ecx, [esi + 0x58]
// 0042eb65  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042eb6d  c7069c0a8100         mov dword ptr [esi], 0x810a9c
// 0042eb73  e81871ffff           call 0x425c90
// 0042eb78  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042eb7c  8bc6                 mov eax, esi
// 0042eb7e  5e                   pop esi
// 0042eb7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0042eb86  83c410               add esp, 0x10
// 0042eb89  c3                   ret 

struct Base
{
    char padding[84];

    Base();
    virtual ~Base();
};

struct Member
{
    Member();
    ~Member();
};

struct CPatchedControlComboBox : Base
{
    Member member;

    CPatchedControlComboBox();
    virtual ~CPatchedControlComboBox();
};

CPatchedControlComboBox::CPatchedControlComboBox()
    : Base(), member()
{
}
