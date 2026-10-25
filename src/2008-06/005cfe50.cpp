// from server: 100% by king_originala
// roc 2008-06 005cfe50  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfe50
//
// 005cfe50  6aff                 push -1
// 005cfe52  6806567d00           push 0x7d5606
// 005cfe57  64a100000000         mov eax, dword ptr fs:[0]
// 005cfe5d  50                   push eax
// 005cfe5e  64892500000000       mov dword ptr fs:[0], esp
// 005cfe65  51                   push ecx
// 005cfe66  56                   push esi
// 005cfe67  8bf1                 mov esi, ecx
// 005cfe69  89742404             mov dword ptr [esp + 4], esi
// 005cfe6d  8d8e80010000         lea ecx, [esi + 0x180]
// 005cfe73  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005cfe7b  ff1568248000         call dword ptr [0x802468]
// 005cfe81  8d8e48010000         lea ecx, [esi + 0x148]
// 005cfe87  c644241000           mov byte ptr [esp + 0x10], 0
// 005cfe8c  e8cff4ffff           call 0x5cf360
// 005cfe91  8bce                 mov ecx, esi
// 005cfe93  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005cfe9b  e8a016e4ff           call 0x411540
// 005cfea0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cfea4  5e                   pop esi
// 005cfea5  64890d00000000       mov dword ptr fs:[0], ecx
// 005cfeac  83c410               add esp, 0x10
// 005cfeaf  c3                   ret 

struct Base {
    unsigned char data[0x148];
    ~Base();
};

struct Member {
    unsigned char data[0x38];
    ~Member();
};

struct String {
    unsigned char data[0x1C];
    ~String();
};

extern void (__thiscall * const destroyString)(String*);

struct S : Base {
    Member member;
    String text;
    ~S();
};

__forceinline String::~String()
{
    destroyString(this);
}

S::~S()
{
}
