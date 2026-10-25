// from server: 100% by king_originala
// roc 2008-06 00495ee0  unit: RBX::VRunService::?$SignalDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495ee0
//
// 00495ee0  6aff                 push -1
// 00495ee2  689c6a7c00           push 0x7c6a9c
// 00495ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00495eed  50                   push eax
// 00495eee  64892500000000       mov dword ptr fs:[0], esp
// 00495ef5  51                   push ecx
// 00495ef6  56                   push esi
// 00495ef7  8bf1                 mov esi, ecx
// 00495ef9  89742404             mov dword ptr [esp + 4], esi
// 00495efd  8d4e20               lea ecx, [esi + 0x20]
// 00495f00  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00495f08  ff1568248000         call dword ptr [0x802468]
// 00495f0e  8d4e04               lea ecx, [esi + 4]
// 00495f11  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00495f19  ff1568248000         call dword ptr [0x802468]
// 00495f1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00495f23  5e                   pop esi
// 00495f24  64890d00000000       mov dword ptr fs:[0], ecx
// 00495f2b  83c410               add esp, 0x10
// 00495f2e  c3                   ret 

extern void (__thiscall *destroy_string)(void *);

struct String
{
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct S
{
    int prefix;
    String first;
    String second;
    ~S();
};

S::~S()
{
}
