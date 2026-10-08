// roc 2007-03 005a88a0  unit: seg_005a0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a88a0
//
// 005a88a0  6aff                 push -1
// 005a88a2  6818957500           push 0x759518
// 005a88a7  64a100000000         mov eax, dword ptr fs:[0]
// 005a88ad  50                   push eax
// 005a88ae  64892500000000       mov dword ptr fs:[0], esp
// 005a88b5  51                   push ecx
// 005a88b6  56                   push esi
// 005a88b7  8bf1                 mov esi, ecx
// 005a88b9  e8724b0000           call 0x5ad430
// 005a88be  894604               mov dword ptr [esi + 4], eax
// 005a88c1  c6401101             mov byte ptr [eax + 0x11], 1
// 005a88c5  8b4604               mov eax, dword ptr [esi + 4]
// 005a88c8  894004               mov dword ptr [eax + 4], eax
// 005a88cb  8b4604               mov eax, dword ptr [esi + 4]
// 005a88ce  8900                 mov dword ptr [eax], eax
// 005a88d0  8b4604               mov eax, dword ptr [esi + 4]
// 005a88d3  894008               mov dword ptr [eax + 8], eax
// 005a88d6  33c0                 xor eax, eax
// 005a88d8  894608               mov dword ptr [esi + 8], eax
// 005a88db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a88df  894610               mov dword ptr [esi + 0x10], eax
// 005a88e2  894614               mov dword ptr [esi + 0x14], eax
// 005a88e5  894618               mov dword ptr [esi + 0x18], eax
// 005a88e8  89461c               mov dword ptr [esi + 0x1c], eax
// 005a88eb  894620               mov dword ptr [esi + 0x20], eax
// 005a88ee  8bc6                 mov eax, esi
// 005a88f0  5e                   pop esi
// 005a88f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005a88f8  83c410               add esp, 0x10
// 005a88fb  c3                   ret 
// library rbxgs/v8world\SimJobStage.cpp (function ??0Mechanism@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
