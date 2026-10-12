// from server: 94% by king_originala
// roc 2008-06 00415350  unit: RBX::VChangeHistoryService::?$FactoryProduct::Creator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415350
//
// 00415350  6aff                 push -1
// 00415352  6848d97b00           push 0x7bd948
// 00415357  64a100000000         mov eax, dword ptr fs:[0]
// 0041535d  50                   push eax
// 0041535e  64892500000000       mov dword ptr fs:[0], esp
// 00415365  51                   push ecx
// 00415366  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041536a  56                   push esi
// 0041536b  8bf1                 mov esi, ecx
// 0041536d  50                   push eax
// 0041536e  89742408             mov dword ptr [esp + 8], esi
// 00415372  e8b99e1700           call 0x58f230
// 00415377  8d4c2418             lea ecx, [esp + 0x18]
// 0041537b  51                   push ecx
// 0041537c  8d54241c             lea edx, [esp + 0x1c]
// 00415380  52                   push edx
// 00415381  8d4e28               lea ecx, [esi + 0x28]
// 00415384  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041538c  c70628ea8000         mov dword ptr [esi], 0x80ea28
// 00415392  e8f9f0ffff           call 0x414490
// 00415397  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041539b  8bc6                 mov eax, esi
// 0041539d  5e                   pop esi
// 0041539e  64890d00000000       mov dword ptr fs:[0], ecx
// 004153a5  83c410               add esp, 0x10
// 004153a8  c20400               ret 4

struct Base {
    virtual ~Base();
    Base(int value);
    char data[36];
};

struct Member {
    Member(const int& first, const int& second);
};

struct S : Base {
    Member member;
    S(int value);
    virtual ~S();
};

S::S(int value) : Base(value), member(value, value)
{
}
