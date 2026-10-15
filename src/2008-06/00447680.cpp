// from server: 100% by colin
// roc 2008-06 00447680  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447680
//
// 00447680  6aff                 push -1
// 00447682  68c98e7d00           push 0x7d8ec9
// 00447687  64a100000000         mov eax, dword ptr fs:[0]
// 0044768d  50                   push eax
// 0044768e  64892500000000       mov dword ptr fs:[0], esp
// 00447695  83ec1c               sub esp, 0x1c
// 00447698  53                   push ebx
// 00447699  56                   push esi
// 0044769a  57                   push edi
// 0044769b  68c4149300           push 0x9314c4
// 004476a0  8bf1                 mov esi, ecx
// 004476a2  68b85f8100           push 0x815fb8
// 004476a7  8974242c             mov dword ptr [esp + 0x2c], esi
// 004476ab  e8e04e1200           call 0x56c590
// 004476b0  8d442423             lea eax, [esp + 0x23]
// 004476b4  50                   push eax
// 004476b5  8d542427             lea edx, [esp + 0x27]
// 004476b9  33ff                 xor edi, edi
// 004476bb  8d4e30               lea ecx, [esi + 0x30]
// 004476be  52                   push edx
// 004476bf  897c2438             mov dword ptr [esp + 0x38], edi
// 004476c3  c706f85e8100         mov dword ptr [esi], 0x815ef8
// 004476c9  e842eaffff           call 0x446110
// 004476ce  8d442423             lea eax, [esp + 0x23]
// 004476d2  50                   push eax
// 004476d3  8d542427             lea edx, [esp + 0x27]
// 004476d7  8d4e50               lea ecx, [esi + 0x50]
// 004476da  52                   push edx
// 004476db  c644243801           mov byte ptr [esp + 0x38], 1
// 004476e0  e82beaffff           call 0x446110
// 004476e5  6a04                 push 4
// 004476e7  c644243402           mov byte ptr [esp + 0x34], 2
// 004476ec  8d5e70               lea ebx, [esi + 0x70]
// 004476ef  e82c922500           call 0x6a0920
// 004476f4  83c404               add esp, 4
// 004476f7  3bc7                 cmp eax, edi
// 004476f9  7404                 je 0x4476ff
// 004476fb  8918                 mov dword ptr [eax], ebx
// 004476fd  eb02                 jmp 0x447701
// 004476ff  33c0                 xor eax, eax
// 00447701  8903                 mov dword ptr [ebx], eax
// 00447703  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447706  897b10               mov dword ptr [ebx + 0x10], edi
// 00447709  897b14               mov dword ptr [ebx + 0x14], edi
// 0044770c  6a04                 push 4
// 0044770e  c644243404           mov byte ptr [esp + 0x34], 4
// 00447713  8d9e88000000         lea ebx, [esi + 0x88]
// 00447719  e802922500           call 0x6a0920
// 0044771e  83c404               add esp, 4
// 00447721  3bc7                 cmp eax, edi
// 00447723  7404                 je 0x447729
// 00447725  8918                 mov dword ptr [eax], ebx
// 00447727  eb02                 jmp 0x44772b
// 00447729  33c0                 xor eax, eax
// 0044772b  8903                 mov dword ptr [ebx], eax
// 0044772d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447730  897b10               mov dword ptr [ebx + 0x10], edi
// 00447733  897b14               mov dword ptr [ebx + 0x14], edi
// 00447736  6a04                 push 4
// 00447738  c644243406           mov byte ptr [esp + 0x34], 6
// 0044773d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00447743  e8d8912500           call 0x6a0920
// 00447748  83c404               add esp, 4
// 0044774b  3bc7                 cmp eax, edi
// 0044774d  7404                 je 0x447753
// 0044774f  8918                 mov dword ptr [eax], ebx
// 00447751  eb02                 jmp 0x447755
// 00447753  33c0                 xor eax, eax
// 00447755  8903                 mov dword ptr [ebx], eax
// 00447757  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044775a  897b10               mov dword ptr [ebx + 0x10], edi
// 0044775d  897b14               mov dword ptr [ebx + 0x14], edi
// 00447760  6a04                 push 4
// 00447762  c644243408           mov byte ptr [esp + 0x34], 8
// 00447767  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0044776d  e8ae912500           call 0x6a0920
// 00447772  83c404               add esp, 4
// 00447775  3bc7                 cmp eax, edi
// 00447777  7404                 je 0x44777d
// 00447779  8918                 mov dword ptr [eax], ebx
// 0044777b  eb02                 jmp 0x44777f
// 0044777d  33c0                 xor eax, eax
// 0044777f  8903                 mov dword ptr [ebx], eax
// 00447781  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447784  897b10               mov dword ptr [ebx + 0x10], edi
// 00447787  897b14               mov dword ptr [ebx + 0x14], edi
// 0044778a  6a04                 push 4
// 0044778c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00447791  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00447797  e884912500           call 0x6a0920
// 0044779c  83c404               add esp, 4
// 0044779f  3bc7                 cmp eax, edi
// 004477a1  7404                 je 0x4477a7
// 004477a3  8918                 mov dword ptr [eax], ebx
// 004477a5  eb02                 jmp 0x4477a9
// 004477a7  33c0                 xor eax, eax
// 004477a9  8903                 mov dword ptr [ebx], eax
// 004477ab  897b0c               mov dword ptr [ebx + 0xc], edi
// 004477ae  897b10               mov dword ptr [ebx + 0x10], edi
// 004477b1  897b14               mov dword ptr [ebx + 0x14], edi
// 004477b4  68705f8100           push 0x815f70
// 004477b9  57                   push edi
// 004477ba  8bce                 mov ecx, esi
// 004477bc  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 004477c1  e86a5d2000           call 0x64d530
// 004477c6  68905f8100           push 0x815f90
// 004477cb  6a01                 push 1
// 004477cd  8bce                 mov ecx, esi
// 004477cf  e85c5d2000           call 0x64d530
// 004477d4  688c5f8100           push 0x815f8c
// 004477d9  6a02                 push 2
// 004477db  8bce                 mov ecx, esi
// 004477dd  e84e5d2000           call 0x64d530
// 004477e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004477e6  5f                   pop edi
// 004477e7  8bc6                 mov eax, esi
// 004477e9  5e                   pop esi
// 004477ea  5b                   pop ebx
// 004477eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004477f2  83c428               add esp, 0x28
// 004477f5  c3                   ret 

// from server: 35% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_fe1ffe951039446c.cpp
