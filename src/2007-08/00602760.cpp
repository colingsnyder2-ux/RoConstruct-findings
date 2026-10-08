// roc 2007-08 00602760  unit: RBX::Running  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602760
//
// 00602760  6aff                 push -1
// 00602762  6818d37500           push 0x75d318
// 00602767  64a100000000         mov eax, dword ptr fs:[0]
// 0060276d  50                   push eax
// 0060276e  64892500000000       mov dword ptr fs:[0], esp
// 00602775  83ec08               sub esp, 8
// 00602778  56                   push esi
// 00602779  8bf1                 mov esi, ecx
// 0060277b  89742408             mov dword ptr [esp + 8], esi
// 0060277f  c706842b7c00         mov dword ptr [esi], 0x7c2b84
// 00602785  c746087c2b7c00       mov dword ptr [esi + 8], 0x7c2b7c
// 0060278c  8b4604               mov eax, dword ptr [esi + 4]
// 0060278f  85c0                 test eax, eax
// 00602791  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00602799  7405                 je 0x6027a0
// 0060279b  83c004               add eax, 4
// 0060279e  eb02                 jmp 0x6027a2
// 006027a0  33c0                 xor eax, eax
// 006027a2  50                   push eax
// 006027a3  b920598c00           mov ecx, 0x8c5920
// 006027a8  e8c3daf6ff           call 0x570270
// 006027ad  85c0                 test eax, eax
// 006027af  7413                 je 0x6027c4
// 006027b1  d9ee                 fldz 
// 006027b3  51                   push ecx
// 006027b4  8d4c240b             lea ecx, [esp + 0xb]
// 006027b8  d91c24               fstp dword ptr [esp]
// 006027bb  51                   push ecx
// 006027bc  8d4810               lea ecx, [eax + 0x10]
// 006027bf  e8ccb0e8ff           call 0x48d890
// 006027c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 006027c7  e8443afaff           call 0x5a6210
// 006027cc  85c0                 test eax, eax
// 006027ce  7411                 je 0x6027e1
// 006027d0  8b4e04               mov ecx, dword ptr [esi + 4]
// 006027d3  6a01                 push 1
// 006027d5  e8363afaff           call 0x5a6210
// 006027da  8bc8                 mov ecx, eax
// 006027dc  e8bf20fbff           call 0x5b48a0
// 006027e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006027e4  e8473afaff           call 0x5a6230
// 006027e9  85c0                 test eax, eax
// 006027eb  7411                 je 0x6027fe
// 006027ed  8b4e04               mov ecx, dword ptr [esi + 4]
// 006027f0  6a01                 push 1
// 006027f2  e8393afaff           call 0x5a6230
// 006027f7  8bc8                 mov ecx, eax
// 006027f9  e8a220fbff           call 0x5b48a0
// 006027fe  8bce                 mov ecx, esi
// 00602800  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00602808  e833fdffff           call 0x602540
// 0060280d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602811  5e                   pop esi
// 00602812  64890d00000000       mov dword ptr fs:[0], ecx
// 00602819  83c414               add esp, 0x14
// 0060281c  c3                   ret 
// library rbxgs/humanoid\Running.cpp (function ??1Running@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Running.cpp
