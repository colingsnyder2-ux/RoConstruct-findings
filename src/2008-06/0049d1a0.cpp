// from server: 100% by king_originala
// roc 2008-06 0049d1a0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d1a0
//
// 0049d1a0  6aff                 push -1
// 0049d1a2  6888737c00           push 0x7c7388
// 0049d1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0049d1ad  50                   push eax
// 0049d1ae  64892500000000       mov dword ptr fs:[0], esp
// 0049d1b5  51                   push ecx
// 0049d1b6  56                   push esi
// 0049d1b7  8bf1                 mov esi, ecx
// 0049d1b9  6a04                 push 4
// 0049d1bb  89742408             mov dword ptr [esp + 8], esi
// 0049d1bf  e85c372000           call 0x6a0920
// 0049d1c4  33c9                 xor ecx, ecx
// 0049d1c6  83c404               add esp, 4
// 0049d1c9  3bc1                 cmp eax, ecx
// 0049d1cb  7404                 je 0x49d1d1
// 0049d1cd  8930                 mov dword ptr [eax], esi
// 0049d1cf  eb02                 jmp 0x49d1d3
// 0049d1d1  33c0                 xor eax, eax
// 0049d1d3  8906                 mov dword ptr [esi], eax
// 0049d1d5  894e10               mov dword ptr [esi + 0x10], ecx
// 0049d1d8  894e14               mov dword ptr [esi + 0x14], ecx
// 0049d1db  894e18               mov dword ptr [esi + 0x18], ecx
// 0049d1de  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0049d1e1  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049d1e5  8d4e20               lea ecx, [esi + 0x20]
// 0049d1e8  e8a37a0f00           call 0x594c90
// 0049d1ed  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049d1f1  8bc6                 mov eax, esi
// 0049d1f3  5e                   pop esi
// 0049d1f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d1fb  83c410               add esp, 0x10
// 0049d1fe  c3                   ret 

void* __cdecl operator new(unsigned int);

struct S;

struct Storage
{
    S** owner;
    unsigned int reserved[3];
    unsigned int first;
    unsigned int second;
    unsigned int third;
    unsigned int fourth;

    Storage(S* value);
    ~Storage();
};

struct Tail
{
    unsigned int value;
    unsigned char flag;

    Tail();
};

struct S
{
    Storage storage;
    Tail tail;

    S();
};

inline Storage::Storage(S* value)
    : owner(new S*(value)),
      first(0),
      second(0),
      third(0),
      fourth(0)
{
}

S::S()
    : storage(this), tail()
{
}
