// from server: 100% by colin
// roc 2008-06 00499d60  unit: RBX::Network::VPlayers::?$SignalDesc  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499d60
//
// 00499d60  6aff                 push -1
// 00499d62  68a86f7c00           push 0x7c6fa8
// 00499d67  64a100000000         mov eax, dword ptr fs:[0]
// 00499d6d  50                   push eax
// 00499d6e  64892500000000       mov dword ptr fs:[0], esp
// 00499d75  83ec08               sub esp, 8
// 00499d78  56                   push esi
// 00499d79  8bf1                 mov esi, ecx
// 00499d7b  8d442407             lea eax, [esp + 7]
// 00499d7f  50                   push eax
// 00499d80  8d4c240b             lea ecx, [esp + 0xb]
// 00499d84  51                   push ecx
// 00499d85  8bce                 mov ecx, esi
// 00499d87  89742410             mov dword ptr [esp + 0x10], esi
// 00499d8b  e800f40e00           call 0x589190
// 00499d90  8d4e20               lea ecx, [esi + 0x20]
// 00499d93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00499d9b  e8d0920c00           call 0x563070
// 00499da0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499da4  8bc6                 mov eax, esi
// 00499da6  5e                   pop esi
// 00499da7  64890d00000000       mov dword ptr fs:[0], ecx
// 00499dae  83c414               add esp, 0x14
// 00499db1  c3                   ret 

#include <set>

struct Member {
    void* data;
    bool enabled;
    int count;

    Member();
};

struct S : std::set<double> {
    Member member;

    S();
};

S::S()
    : member()
{
}
