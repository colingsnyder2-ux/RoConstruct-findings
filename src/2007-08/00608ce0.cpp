// roc 2007-08 00608ce0  unit: RBX::SimJobStage  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608ce0
//
// 00608ce0  6aff                 push -1
// 00608ce2  6818c47500           push 0x75c418
// 00608ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00608ced  50                   push eax
// 00608cee  64892500000000       mov dword ptr fs:[0], esp
// 00608cf5  51                   push ecx
// 00608cf6  56                   push esi
// 00608cf7  8bf1                 mov esi, ecx
// 00608cf9  e8b206faff           call 0x5a93b0
// 00608cfe  894604               mov dword ptr [esi + 4], eax
// 00608d01  c6401101             mov byte ptr [eax + 0x11], 1
// 00608d05  8b4604               mov eax, dword ptr [esi + 4]
// 00608d08  894004               mov dword ptr [eax + 4], eax
// 00608d0b  8b4604               mov eax, dword ptr [esi + 4]
// 00608d0e  8900                 mov dword ptr [eax], eax
// 00608d10  8b4604               mov eax, dword ptr [esi + 4]
// 00608d13  894008               mov dword ptr [eax + 8], eax
// 00608d16  33c0                 xor eax, eax
// 00608d18  894608               mov dword ptr [esi + 8], eax
// 00608d1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00608d1f  894610               mov dword ptr [esi + 0x10], eax
// 00608d22  894614               mov dword ptr [esi + 0x14], eax
// 00608d25  894618               mov dword ptr [esi + 0x18], eax
// 00608d28  89461c               mov dword ptr [esi + 0x1c], eax
// 00608d2b  894620               mov dword ptr [esi + 0x20], eax
// 00608d2e  8bc6                 mov eax, esi
// 00608d30  5e                   pop esi
// 00608d31  64890d00000000       mov dword ptr fs:[0], ecx
// 00608d38  83c410               add esp, 0x10
// 00608d3b  c3                   ret 
// library rbxgs/v8world\SimJobStage.cpp (function ??0Mechanism@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
