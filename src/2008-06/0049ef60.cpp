// from server: 100% by king_originala
// roc 2008-06 0049ef60  unit: RBX::Network::VClient::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ef60
//
// 0049ef60  6aff                 push -1
// 0049ef62  68496b7c00           push 0x7c6b49
// 0049ef67  64a100000000         mov eax, dword ptr fs:[0]
// 0049ef6d  50                   push eax
// 0049ef6e  64892500000000       mov dword ptr fs:[0], esp
// 0049ef75  51                   push ecx
// 0049ef76  56                   push esi
// 0049ef77  8bf1                 mov esi, ecx
// 0049ef79  89742404             mov dword ptr [esp + 4], esi
// 0049ef7d  8d4e20               lea ecx, [esi + 0x20]
// 0049ef80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049ef88  ff1568248000         call dword ptr [0x802468]
// 0049ef8e  8bce                 mov ecx, esi
// 0049ef90  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049ef98  ff1568248000         call dword ptr [0x802468]
// 0049ef9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049efa2  5e                   pop esi
// 0049efa3  64890d00000000       mov dword ptr fs:[0], ecx
// 0049efaa  83c410               add esp, 0x10
// 0049efad  c3                   ret 

extern void (__thiscall *destroy_string)(void*);

struct StringStorage {
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct S {
    StringStorage first;
    StringStorage second;
    ~S();
};

S::~S()
{
}
