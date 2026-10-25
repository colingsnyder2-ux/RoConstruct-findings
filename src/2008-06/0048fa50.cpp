// from server: 100% by king_originala
// roc 2008-06 0048fa50  unit: RBX::VClothing::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fa50
//
// 0048fa50  6aff                 push -1
// 0048fa52  68d6637c00           push 0x7c63d6
// 0048fa57  64a100000000         mov eax, dword ptr fs:[0]
// 0048fa5d  50                   push eax
// 0048fa5e  64892500000000       mov dword ptr fs:[0], esp
// 0048fa65  51                   push ecx
// 0048fa66  56                   push esi
// 0048fa67  8bf1                 mov esi, ecx
// 0048fa69  89742404             mov dword ptr [esp + 4], esi
// 0048fa6d  8d8e54010000         lea ecx, [esi + 0x154]
// 0048fa73  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048fa7b  ff1568248000         call dword ptr [0x802468]
// 0048fa81  8d8e34010000         lea ecx, [esi + 0x134]
// 0048fa87  c644241000           mov byte ptr [esp + 0x10], 0
// 0048fa8c  ff1568248000         call dword ptr [0x802468]
// 0048fa92  8bce                 mov ecx, esi
// 0048fa94  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048fa9c  e88ffdffff           call 0x48f830
// 0048faa1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048faa5  5e                   pop esi
// 0048faa6  64890d00000000       mov dword ptr fs:[0], ecx
// 0048faad  83c410               add esp, 0x10
// 0048fab0  c3                   ret 

extern void (__thiscall *string_destructor)(void *);

struct String
{
    char storage[0x20];
    ~String();
};

inline String::~String()
{
    string_destructor(this);
}

struct Base
{
    char storage[0x134];
    ~Base();
};

struct S : Base
{
    String first;
    String second;
    ~S();
};

S::~S()
{
}
