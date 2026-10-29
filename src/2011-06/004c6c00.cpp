// roc 2011-06 004c6c00  unit: RBX::Network::VPlayer::?$EventDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c6c00
//
// 004c6c00  6aff                 push -1
// 004c6c02  686c079e00           push 0x9e076c
// 004c6c07  64a100000000         mov eax, dword ptr fs:[0]
// 004c6c0d  50                   push eax
// 004c6c0e  64892500000000       mov dword ptr fs:[0], esp
// 004c6c15  51                   push ecx
// 004c6c16  56                   push esi
// 004c6c17  8bf1                 mov esi, ecx
// 004c6c19  89742404             mov dword ptr [esp + 4], esi
// 004c6c1d  8d4e20               lea ecx, [esi + 0x20]
// 004c6c20  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c6c28  ff15d004a400         call dword ptr [0xa404d0]
// 004c6c2e  8d4e04               lea ecx, [esi + 4]
// 004c6c31  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c6c39  ff15d004a400         call dword ptr [0xa404d0]
// 004c6c3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c6c43  5e                   pop esi
// 004c6c44  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6c4b  83c410               add esp, 0x10
// 004c6c4e  c3                   ret 
// copied from an identical function in another client (function ??1S@ns_ROCX000007@@QAE@XZ)

namespace ns_ROCX000007 {
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
}
