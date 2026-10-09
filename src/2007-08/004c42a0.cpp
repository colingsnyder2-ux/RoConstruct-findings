// from server: 23% by colin
// roc 2007-08 004c42a0  unit: RakPeer  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c42a0
//
// 004c42a0  6aff                 push -1
// 004c42a2  6868bc7400           push 0x74bc68
// 004c42a7  64a100000000         mov eax, dword ptr fs:[0]
// 004c42ad  50                   push eax
// 004c42ae  51                   push ecx
// 004c42af  56                   push esi
// 004c42b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c42b5  33c4                 xor eax, esp
// 004c42b7  50                   push eax
// 004c42b8  8d44240c             lea eax, [esp + 0xc]
// 004c42bc  64a300000000         mov dword ptr fs:[0], eax
// 004c42c2  8bf1                 mov esi, ecx
// 004c42c4  89742408             mov dword ptr [esp + 8], esi
// 004c42c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c42d0  e86b110000           call 0x4c5440
// 004c42d5  8bce                 mov ecx, esi
// 004c42d7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c42df  e85c110000           call 0x4c5440
// 004c42e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c42e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004c42ef  59                   pop ecx
// 004c42f0  5e                   pop esi
// 004c42f1  83c410               add esp, 0x10
// 004c42f4  c3                   ret 

struct RakPeer
{
    void sub_4C5440();
    RakPeer();
};

RakPeer::RakPeer()
{
    sub_4C5440();
    sub_4C5440();
}
