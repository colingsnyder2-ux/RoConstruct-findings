// roc 2009-06 004c3fb0  unit: RBX::Network::VPlayer::?$EventDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c3fb0
//
// 004c3fb0  6aff                 push -1
// 004c3fb2  683c188700           push 0x87183c
// 004c3fb7  64a100000000         mov eax, dword ptr fs:[0]
// 004c3fbd  50                   push eax
// 004c3fbe  64892500000000       mov dword ptr fs:[0], esp
// 004c3fc5  51                   push ecx
// 004c3fc6  56                   push esi
// 004c3fc7  8bf1                 mov esi, ecx
// 004c3fc9  89742404             mov dword ptr [esp + 4], esi
// 004c3fcd  8d4e20               lea ecx, [esi + 0x20]
// 004c3fd0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3fd8  ff15c4e48900         call dword ptr [0x89e4c4]
// 004c3fde  8d4e04               lea ecx, [esi + 4]
// 004c3fe1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c3fe9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004c3fef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c3ff3  5e                   pop esi
// 004c3ff4  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3ffb  83c410               add esp, 0x10
// 004c3ffe  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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