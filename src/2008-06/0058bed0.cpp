// from server: 100% by king_originala
// roc 2008-06 0058bed0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058bed0
//
// 0058bed0  6aff                 push -1
// 0058bed2  68d8167d00           push 0x7d16d8
// 0058bed7  64a100000000         mov eax, dword ptr fs:[0]
// 0058bedd  50                   push eax
// 0058bede  64892500000000       mov dword ptr fs:[0], esp
// 0058bee5  51                   push ecx
// 0058bee6  56                   push esi
// 0058bee7  8bf1                 mov esi, ecx
// 0058bee9  89742404             mov dword ptr [esp + 4], esi
// 0058beed  8d4e24               lea ecx, [esi + 0x24]
// 0058bef0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058bef8  ff1568248000         call dword ptr [0x802468]
// 0058befe  8bce                 mov ecx, esi
// 0058bf00  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058bf08  e843ffffff           call 0x58be50
// 0058bf0d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058bf11  5e                   pop esi
// 0058bf12  64890d00000000       mov dword ptr fs:[0], ecx
// 0058bf19  83c410               add esp, 0x10
// 0058bf1c  c3                   ret 

extern "C" void (__thiscall *string_destroy)(void *);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    string_destroy(this);
}

struct Base {
    char storage[36];
    ~Base();
};

struct S : Base {
    String text;
    ~S();
};

S::~S()
{
}
