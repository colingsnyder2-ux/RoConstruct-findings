// from server: 100% by king_originala
// roc 2008-06 00561020  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00561020
//
// 00561020  6aff                 push -1
// 00561022  68a8057d00           push 0x7d05a8
// 00561027  64a100000000         mov eax, dword ptr fs:[0]
// 0056102d  50                   push eax
// 0056102e  64892500000000       mov dword ptr fs:[0], esp
// 00561035  51                   push ecx
// 00561036  56                   push esi
// 00561037  8bf1                 mov esi, ecx
// 00561039  89742404             mov dword ptr [esp + 4], esi
// 0056103d  8d4e20               lea ecx, [esi + 0x20]
// 00561040  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00561048  e813fbffff           call 0x560b60
// 0056104d  8bce                 mov ecx, esi
// 0056104f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00561057  ff1568248000         call dword ptr [0x802468]
// 0056105d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561061  5e                   pop esi
// 00561062  64890d00000000       mov dword ptr fs:[0], ecx
// 00561069  83c410               add esp, 0x10
// 0056106c  c3                   ret 

extern void (__thiscall *destroy_string)(void *);

struct StringStorage
{
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct Member
{
    ~Member();
};

struct S : StringStorage
{
    Member member;
    ~S();
};

S::~S()
{
}
