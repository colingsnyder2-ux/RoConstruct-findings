// from server: 100% by auto
// roc 2008-06 0070d3d0  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d3d0
//
// 0070d3d0  6aff                 push -1
// 0070d3d2  683c4d7e00           push 0x7e4d3c
// 0070d3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0070d3dd  50                   push eax
// 0070d3de  51                   push ecx
// 0070d3df  56                   push esi
// 0070d3e0  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0070d3e5  33c4                 xor eax, esp
// 0070d3e7  50                   push eax
// 0070d3e8  8d44240c             lea eax, [esp + 0xc]
// 0070d3ec  64a300000000         mov dword ptr fs:[0], eax
// 0070d3f2  8bf1                 mov esi, ecx
// 0070d3f4  8b4630               mov eax, dword ptr [esi + 0x30]
// 0070d3f7  83c0fe               add eax, -2
// 0070d3fa  83f804               cmp eax, 4
// 0070d3fd  0f872f010000         ja 0x70d532
// 0070d403  ff248588d57000       jmp dword ptr [eax*4 + 0x70d588]
// 0070d40a  6830010000           push 0x130
// 0070d40f  e80c35f9ff           call 0x6a0920
// 0070d414  83c404               add esp, 4
// 0070d417  89442408             mov dword ptr [esp + 8], eax
// 0070d41b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0070d423  85c0                 test eax, eax
// 0070d425  0f8445010000         je 0x70d570
// 0070d42b  56                   push esi
// 0070d42c  8bc8                 mov ecx, eax
// 0070d42e  e8ade8ffff           call 0x70bce0
// 0070d433  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d437  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d43e  59                   pop ecx
// 0070d43f  5e                   pop esi
// 0070d440  83c410               add esp, 0x10
// 0070d443  c20400               ret 4
// 0070d446  685c020000           push 0x25c
// 0070d44b  e8d034f9ff           call 0x6a0920
// 0070d450  83c404               add esp, 4
// 0070d453  89442408             mov dword ptr [esp + 8], eax
// 0070d457  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0070d45f  85c0                 test eax, eax
// 0070d461  0f8409010000         je 0x70d570
// 0070d467  56                   push esi
// 0070d468  8bc8                 mov ecx, eax
// 0070d46a  e801fdffff           call 0x70d170
// 0070d46f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d473  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d47a  59                   pop ecx
// 0070d47b  5e                   pop esi
// 0070d47c  83c410               add esp, 0x10
// 0070d47f  c20400               ret 4
// 0070d482  6830010000           push 0x130
// 0070d487  e89434f9ff           call 0x6a0920
// 0070d48c  83c404               add esp, 4
// 0070d48f  89442408             mov dword ptr [esp + 8], eax
// 0070d493  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0070d49b  85c0                 test eax, eax
// 0070d49d  0f84cd000000         je 0x70d570
// 0070d4a3  56                   push esi
// 0070d4a4  8bc8                 mov ecx, eax
// 0070d4a6  e8f5f9ffff           call 0x70cea0
// 0070d4ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d4af  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d4b6  59                   pop ecx
// 0070d4b7  5e                   pop esi
// 0070d4b8  83c410               add esp, 0x10
// 0070d4bb  c20400               ret 4
// 0070d4be  6830010000           push 0x130
// 0070d4c3  e85834f9ff           call 0x6a0920
// 0070d4c8  83c404               add esp, 4
// 0070d4cb  89442408             mov dword ptr [esp + 8], eax
// 0070d4cf  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0070d4d7  85c0                 test eax, eax
// 0070d4d9  0f8491000000         je 0x70d570
// 0070d4df  56                   push esi
// 0070d4e0  8bc8                 mov ecx, eax
// 0070d4e2  e809fbffff           call 0x70cff0
// 0070d4e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d4eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d4f2  59                   pop ecx
// 0070d4f3  5e                   pop esi
// 0070d4f4  83c410               add esp, 0x10
// 0070d4f7  c20400               ret 4
// 0070d4fa  6898010000           push 0x198
// 0070d4ff  e81c34f9ff           call 0x6a0920
// 0070d504  83c404               add esp, 4
// 0070d507  89442408             mov dword ptr [esp + 8], eax
// 0070d50b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 0070d513  85c0                 test eax, eax
// 0070d515  7459                 je 0x70d570
// 0070d517  56                   push esi
// 0070d518  8bc8                 mov ecx, eax
// 0070d51a  e811fdffff           call 0x70d230
// 0070d51f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d523  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d52a  59                   pop ecx
// 0070d52b  5e                   pop esi
// 0070d52c  83c410               add esp, 0x10
// 0070d52f  c20400               ret 4
// 0070d532  6a70                 push 0x70
// 0070d534  e8e733f9ff           call 0x6a0920
// 0070d539  8bf0                 mov esi, eax
// 0070d53b  83c404               add esp, 4
// 0070d53e  89742408             mov dword ptr [esp + 8], esi
// 0070d542  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0070d54a  85f6                 test esi, esi
// 0070d54c  7422                 je 0x70d570
// 0070d54e  8bce                 mov ecx, esi
// 0070d550  e85ff20a00           call 0x7bc7b4
// 0070d555  c7063cc38500         mov dword ptr [esi], 0x85c33c
// 0070d55b  8bc6                 mov eax, esi
// 0070d55d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d561  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d568  59                   pop ecx
// 0070d569  5e                   pop esi
// 0070d56a  83c410               add esp, 0x10
// 0070d56d  c20400               ret 4
// 0070d570  33c0                 xor eax, eax
// 0070d572  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070d576  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d57d  59                   pop ecx
// 0070d57e  5e                   pop esi
// 0070d57f  83c410               add esp, 0x10
// 0070d582  c20400               ret 4
// 0070d585  8d4900               lea ecx, [ecx]
// 0070d588  0ad4                 or dl, ah
// 0070d58a  7000                 jo 0x70d58c
// 0070d58c  46                   inc esi
// 0070d58d  d470                 aam 0x70
// 0070d58f  0082d47000be         add byte ptr [edx - 0x41ff8f2c], al
// 0070d595  d470                 aam 0x70
// 0070d597  00fa                 add dl, bh
// 0070d599  d470                 aam 0x70
// library xtp-11.2.2-lib-strlen/Source\Common\XTPToolTipContext.cpp (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Common/XTPToolTipContext.cpp
