// roc 2007-08 00627100  unit: RBX::GettingUp  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627100
//
// 00627100  6aff                 push -1
// 00627102  6818d37500           push 0x75d318
// 00627107  64a100000000         mov eax, dword ptr fs:[0]
// 0062710d  50                   push eax
// 0062710e  64892500000000       mov dword ptr fs:[0], esp
// 00627115  83ec08               sub esp, 8
// 00627118  56                   push esi
// 00627119  8bf1                 mov esi, ecx
// 0062711b  89742408             mov dword ptr [esp + 8], esi
// 0062711f  c7061c4b7c00         mov dword ptr [esi], 0x7c4b1c
// 00627125  c74608144b7c00       mov dword ptr [esi + 8], 0x7c4b14
// 0062712c  8b4604               mov eax, dword ptr [esi + 4]
// 0062712f  85c0                 test eax, eax
// 00627131  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00627139  7405                 je 0x627140
// 0062713b  83c004               add eax, 4
// 0062713e  eb02                 jmp 0x627142
// 00627140  33c0                 xor eax, eax
// 00627142  50                   push eax
// 00627143  b9f0598c00           mov ecx, 0x8c59f0
// 00627148  e82391f4ff           call 0x570270
// 0062714d  85c0                 test eax, eax
// 0062714f  740f                 je 0x627160
// 00627151  6a00                 push 0
// 00627153  8d4c240b             lea ecx, [esp + 0xb]
// 00627157  51                   push ecx
// 00627158  8d4810               lea ecx, [eax + 0x10]
// 0062715b  e80078f8ff           call 0x5ae960
// 00627160  8bce                 mov ecx, esi
// 00627162  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062716a  e8d1b3fdff           call 0x602540
// 0062716f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00627173  5e                   pop esi
// 00627174  64890d00000000       mov dword ptr fs:[0], ecx
// 0062717b  83c414               add esp, 0x14
// 0062717e  c3                   ret 
// library rbxgs/humanoid\GettingUp.cpp (function ??1GettingUp@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/GettingUp.cpp
