// roc 2010-06 004bfac0  unit: RBX::Network::VPlayer::?$EventDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bfac0
//
// 004bfac0  6aff                 push -1
// 004bfac2  68bc5f9800           push 0x985fbc
// 004bfac7  64a100000000         mov eax, dword ptr fs:[0]
// 004bfacd  50                   push eax
// 004bface  64892500000000       mov dword ptr fs:[0], esp
// 004bfad5  51                   push ecx
// 004bfad6  56                   push esi
// 004bfad7  8bf1                 mov esi, ecx
// 004bfad9  89742404             mov dword ptr [esp + 4], esi
// 004bfadd  8d4e20               lea ecx, [esi + 0x20]
// 004bfae0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004bfae8  ff1500a49e00         call dword ptr [0x9ea400]
// 004bfaee  8d4e04               lea ecx, [esi + 4]
// 004bfaf1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004bfaf9  ff1500a49e00         call dword ptr [0x9ea400]
// 004bfaff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bfb03  5e                   pop esi
// 004bfb04  64890d00000000       mov dword ptr fs:[0], ecx
// 004bfb0b  83c410               add esp, 0x10
// 004bfb0e  c3                   ret 
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