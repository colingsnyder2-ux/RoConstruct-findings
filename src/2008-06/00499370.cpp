// from server: 100% by king_originala
// roc 2008-06 00499370  unit: RBX::Network::VPlayers::?$SignalDesc  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499370
//
// 00499370  6aff                 push -1
// 00499372  68cc6f7c00           push 0x7c6fcc
// 00499377  64a100000000         mov eax, dword ptr fs:[0]
// 0049937d  50                   push eax
// 0049937e  64892500000000       mov dword ptr fs:[0], esp
// 00499385  51                   push ecx
// 00499386  56                   push esi
// 00499387  8bf1                 mov esi, ecx
// 00499389  89742404             mov dword ptr [esp + 4], esi
// 0049938d  8d4e24               lea ecx, [esi + 0x24]
// 00499390  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00499398  e8d3fdffff           call 0x499170
// 0049939d  8d4e08               lea ecx, [esi + 8]
// 004993a0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004993a8  ff1568248000         call dword ptr [0x802468]
// 004993ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004993b2  5e                   pop esi
// 004993b3  64890d00000000       mov dword ptr fs:[0], ecx
// 004993ba  83c410               add esp, 0x10
// 004993bd  c3                   ret 

extern "C" {
    extern void (__thiscall *destroy_string)(void *);
}

struct StringStorage {
    char data[28];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct Tail {
    ~Tail();
};

struct S {
    char prefix[8];
    StringStorage text;
    Tail tail;
    ~S();
};

S::~S()
{
}
