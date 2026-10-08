// roc 2007-03 005e7c20  unit: seg_005e0000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7c20
//
// 005e7c20  6aff                 push -1
// 005e7c22  68a8c17500           push 0x75c1a8
// 005e7c27  64a100000000         mov eax, dword ptr fs:[0]
// 005e7c2d  50                   push eax
// 005e7c2e  64892500000000       mov dword ptr fs:[0], esp
// 005e7c35  83ec10               sub esp, 0x10
// 005e7c38  53                   push ebx
// 005e7c39  56                   push esi
// 005e7c3a  8bf1                 mov esi, ecx
// 005e7c3c  57                   push edi
// 005e7c3d  8974240c             mov dword ptr [esp + 0xc], esi
// 005e7c41  e8ea57fcff           call 0x5ad430
// 005e7c46  894604               mov dword ptr [esi + 4], eax
// 005e7c49  c6401101             mov byte ptr [eax + 0x11], 1
// 005e7c4d  8b4604               mov eax, dword ptr [esi + 4]
// 005e7c50  894004               mov dword ptr [eax + 4], eax
// 005e7c53  8b4604               mov eax, dword ptr [esi + 4]
// 005e7c56  8900                 mov dword ptr [eax], eax
// 005e7c58  8b4604               mov eax, dword ptr [esi + 4]
// 005e7c5b  894008               mov dword ptr [eax + 8], eax
// 005e7c5e  33c0                 xor eax, eax
// 005e7c60  894608               mov dword ptr [esi + 8], eax
// 005e7c63  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005e7c67  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005e7c6b  3bfb                 cmp edi, ebx
// 005e7c6d  89442424             mov dword ptr [esp + 0x24], eax
// 005e7c71  7414                 je 0x5e7c87
// 005e7c73  57                   push edi
// 005e7c74  8d442414             lea eax, [esp + 0x14]
// 005e7c78  50                   push eax
// 005e7c79  8bce                 mov ecx, esi
// 005e7c7b  e8f0b70200           call 0x613470
// 005e7c80  83c704               add edi, 4
// 005e7c83  3bfb                 cmp edi, ebx
// 005e7c85  75ec                 jne 0x5e7c73
// 005e7c87  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e7c8b  5f                   pop edi
// 005e7c8c  8bc6                 mov eax, esi
// 005e7c8e  5e                   pop esi
// 005e7c8f  5b                   pop ebx
// 005e7c90  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7c97  83c41c               add esp, 0x1c
// 005e7c9a  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
