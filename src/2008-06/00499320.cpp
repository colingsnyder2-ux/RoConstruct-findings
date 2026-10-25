// from server: 100% by king_originala
// roc 2008-06 00499320  unit: RBX::Network::VPlayers::?$SignalDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499320
//
// 00499320  6aff                 push -1
// 00499322  68cc6f7c00           push 0x7c6fcc
// 00499327  64a100000000         mov eax, dword ptr fs:[0]
// 0049932d  50                   push eax
// 0049932e  64892500000000       mov dword ptr fs:[0], esp
// 00499335  51                   push ecx
// 00499336  56                   push esi
// 00499337  8bf1                 mov esi, ecx
// 00499339  8d4e08               lea ecx, [esi + 8]
// 0049933c  89742404             mov dword ptr [esp + 4], esi
// 00499340  ff1560248000         call dword ptr [0x802460]
// 00499346  8d4e24               lea ecx, [esi + 0x24]
// 00499349  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00499351  e81af4ffff           call 0x498770
// 00499356  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049935a  8bc6                 mov eax, esi
// 0049935c  5e                   pop esi
// 0049935d  64890d00000000       mov dword ptr fs:[0], ecx
// 00499364  83c410               add esp, 0x10
// 00499367  c3                   ret 

extern "C" {
    extern void (__thiscall *construct_string)(void *);
}

struct StringStorage {
    char data[28];
    StringStorage();
    ~StringStorage();
};

inline StringStorage::StringStorage()
{
    construct_string(this);
}

struct Tail {
    Tail();
};

struct S {
    char prefix[8];
    StringStorage text;
    Tail tail;
    S();
};

S::S()
{
}
