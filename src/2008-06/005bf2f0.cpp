// roc 2008-06 005bf2f0  unit: RBX::VGameSettings::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf2f0
//
// 005bf2f0  6aff                 push -1
// 005bf2f2  68880d7c00           push 0x7c0d88
// 005bf2f7  64a100000000         mov eax, dword ptr fs:[0]
// 005bf2fd  50                   push eax
// 005bf2fe  64892500000000       mov dword ptr fs:[0], esp
// 005bf305  83ec08               sub esp, 8
// 005bf308  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bf30c  56                   push esi
// 005bf30d  57                   push edi
// 005bf30e  8bf1                 mov esi, ecx
// 005bf310  89742408             mov dword ptr [esp + 8], esi
// 005bf314  50                   push eax
// 005bf315  51                   push ecx
// 005bf316  8bc4                 mov eax, esp
// 005bf318  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005bf320  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005bf328  89642414             mov dword ptr [esp + 0x14], esp
// 005bf32c  c70000000000         mov dword ptr [eax], 0
// 005bf332  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bf336  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bf33a  51                   push ecx
// 005bf33b  52                   push edx
// 005bf33c  c644242801           mov byte ptr [esp + 0x28], 1
// 005bf341  e83affffff           call 0x5bf280
// 005bf346  50                   push eax
// 005bf347  8bce                 mov ecx, esi
// 005bf349  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005bf34e  e83dafe4ff           call 0x40a290
// 005bf353  6a18                 push 0x18
// 005bf355  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005bf35a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005bf360  e8bb150e00           call 0x6a0920
// 005bf365  83c404               add esp, 4
// 005bf368  85c0                 test eax, eax
// 005bf36a  741e                 je 0x5bf38a
// 005bf36c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005bf370  33c9                 xor ecx, ecx
// 005bf372  33d2                 xor edx, edx
// 005bf374  897808               mov dword ptr [eax + 8], edi
// 005bf377  c7008c848300         mov dword ptr [eax], 0x83848c
// 005bf37d  897004               mov dword ptr [eax + 4], esi
// 005bf380  894810               mov dword ptr [eax + 0x10], ecx
// 005bf383  895014               mov dword ptr [eax + 0x14], edx
// 005bf386  8bf8                 mov edi, eax
// 005bf388  eb02                 jmp 0x5bf38c
// 005bf38a  33ff                 xor edi, edi
// 005bf38c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005bf38f  3bf8                 cmp edi, eax
// 005bf391  740d                 je 0x5bf3a0
// 005bf393  85c0                 test eax, eax
// 005bf395  7409                 je 0x5bf3a0
// 005bf397  50                   push eax
// 005bf398  e8dd120e00           call 0x6a067a
// 005bf39d  83c404               add esp, 4
// 005bf3a0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bf3a4  897e18               mov dword ptr [esi + 0x18], edi
// 005bf3a7  5f                   pop edi
// 005bf3a8  8bc6                 mov eax, esi
// 005bf3aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf3b1  5e                   pop esi
// 005bf3b2  83c414               add esp, 0x14
// 005bf3b5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
