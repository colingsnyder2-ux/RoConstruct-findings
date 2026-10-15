// roc 2008-06 006311b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006311b0
//
// 006311b0  6aff                 push -1
// 006311b2  68d8a17d00           push 0x7da1d8
// 006311b7  64a100000000         mov eax, dword ptr fs:[0]
// 006311bd  50                   push eax
// 006311be  64892500000000       mov dword ptr fs:[0], esp
// 006311c5  83ec08               sub esp, 8
// 006311c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006311cc  56                   push esi
// 006311cd  57                   push edi
// 006311ce  8bf1                 mov esi, ecx
// 006311d0  89742408             mov dword ptr [esp + 8], esi
// 006311d4  50                   push eax
// 006311d5  51                   push ecx
// 006311d6  8bc4                 mov eax, esp
// 006311d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006311e0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006311e8  89642414             mov dword ptr [esp + 0x14], esp
// 006311ec  c70000000000         mov dword ptr [eax], 0
// 006311f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006311f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006311fa  51                   push ecx
// 006311fb  52                   push edx
// 006311fc  c644242801           mov byte ptr [esp + 0x28], 1
// 00631201  e85afeffff           call 0x631060
// 00631206  50                   push eax
// 00631207  8bce                 mov ecx, esi
// 00631209  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063120e  e89d92f6ff           call 0x59a4b0
// 00631213  6a18                 push 0x18
// 00631215  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063121a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631220  e8fbf60600           call 0x6a0920
// 00631225  83c404               add esp, 4
// 00631228  85c0                 test eax, eax
// 0063122a  7422                 je 0x63124e
// 0063122c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00631230  c700c4728400         mov dword ptr [eax], 0x8472c4
// 00631236  897004               mov dword ptr [eax + 4], esi
// 00631239  894808               mov dword ptr [eax + 8], ecx
// 0063123c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00631240  895010               mov dword ptr [eax + 0x10], edx
// 00631243  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00631247  894814               mov dword ptr [eax + 0x14], ecx
// 0063124a  8bf8                 mov edi, eax
// 0063124c  eb02                 jmp 0x631250
// 0063124e  33ff                 xor edi, edi
// 00631250  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631253  3bf8                 cmp edi, eax
// 00631255  740d                 je 0x631264
// 00631257  85c0                 test eax, eax
// 00631259  7409                 je 0x631264
// 0063125b  50                   push eax
// 0063125c  e819f40600           call 0x6a067a
// 00631261  83c404               add esp, 4
// 00631264  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631268  897e18               mov dword ptr [esi + 0x18], edi
// 0063126b  5f                   pop edi
// 0063126c  8bc6                 mov eax, esi
// 0063126e  64890d00000000       mov dword ptr fs:[0], ecx
// 00631275  5e                   pop esi
// 00631276  83c414               add esp, 0x14
// 00631279  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
