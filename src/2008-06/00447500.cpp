// roc 2008-06 00447500  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447500
//
// 00447500  6aff                 push -1
// 00447502  68c98e7d00           push 0x7d8ec9
// 00447507  64a100000000         mov eax, dword ptr fs:[0]
// 0044750d  50                   push eax
// 0044750e  64892500000000       mov dword ptr fs:[0], esp
// 00447515  83ec1c               sub esp, 0x1c
// 00447518  53                   push ebx
// 00447519  56                   push esi
// 0044751a  57                   push edi
// 0044751b  6894149300           push 0x931494
// 00447520  8bf1                 mov esi, ecx
// 00447522  68a85f8100           push 0x815fa8
// 00447527  8974242c             mov dword ptr [esp + 0x2c], esi
// 0044752b  e860501200           call 0x56c590
// 00447530  8d442423             lea eax, [esp + 0x23]
// 00447534  50                   push eax
// 00447535  8d542427             lea edx, [esp + 0x27]
// 00447539  33ff                 xor edi, edi
// 0044753b  8d4e30               lea ecx, [esi + 0x30]
// 0044753e  52                   push edx
// 0044753f  897c2438             mov dword ptr [esp + 0x38], edi
// 00447543  c706ec5e8100         mov dword ptr [esi], 0x815eec
// 00447549  e8c2ebffff           call 0x446110
// 0044754e  8d442423             lea eax, [esp + 0x23]
// 00447552  50                   push eax
// 00447553  8d542427             lea edx, [esp + 0x27]
// 00447557  8d4e50               lea ecx, [esi + 0x50]
// 0044755a  52                   push edx
// 0044755b  c644243801           mov byte ptr [esp + 0x38], 1
// 00447560  e8abebffff           call 0x446110
// 00447565  6a04                 push 4
// 00447567  c644243402           mov byte ptr [esp + 0x34], 2
// 0044756c  8d5e70               lea ebx, [esi + 0x70]
// 0044756f  e8ac932500           call 0x6a0920
// 00447574  83c404               add esp, 4
// 00447577  3bc7                 cmp eax, edi
// 00447579  7404                 je 0x44757f
// 0044757b  8918                 mov dword ptr [eax], ebx
// 0044757d  eb02                 jmp 0x447581
// 0044757f  33c0                 xor eax, eax
// 00447581  8903                 mov dword ptr [ebx], eax
// 00447583  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447586  897b10               mov dword ptr [ebx + 0x10], edi
// 00447589  897b14               mov dword ptr [ebx + 0x14], edi
// 0044758c  6a04                 push 4
// 0044758e  c644243404           mov byte ptr [esp + 0x34], 4
// 00447593  8d9e88000000         lea ebx, [esi + 0x88]
// 00447599  e882932500           call 0x6a0920
// 0044759e  83c404               add esp, 4
// 004475a1  3bc7                 cmp eax, edi
// 004475a3  7404                 je 0x4475a9
// 004475a5  8918                 mov dword ptr [eax], ebx
// 004475a7  eb02                 jmp 0x4475ab
// 004475a9  33c0                 xor eax, eax
// 004475ab  8903                 mov dword ptr [ebx], eax
// 004475ad  897b0c               mov dword ptr [ebx + 0xc], edi
// 004475b0  897b10               mov dword ptr [ebx + 0x10], edi
// 004475b3  897b14               mov dword ptr [ebx + 0x14], edi
// 004475b6  6a04                 push 4
// 004475b8  c644243406           mov byte ptr [esp + 0x34], 6
// 004475bd  8d9ea0000000         lea ebx, [esi + 0xa0]
// 004475c3  e858932500           call 0x6a0920
// 004475c8  83c404               add esp, 4
// 004475cb  3bc7                 cmp eax, edi
// 004475cd  7404                 je 0x4475d3
// 004475cf  8918                 mov dword ptr [eax], ebx
// 004475d1  eb02                 jmp 0x4475d5
// 004475d3  33c0                 xor eax, eax
// 004475d5  8903                 mov dword ptr [ebx], eax
// 004475d7  897b0c               mov dword ptr [ebx + 0xc], edi
// 004475da  897b10               mov dword ptr [ebx + 0x10], edi
// 004475dd  897b14               mov dword ptr [ebx + 0x14], edi
// 004475e0  6a04                 push 4
// 004475e2  c644243408           mov byte ptr [esp + 0x34], 8
// 004475e7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 004475ed  e82e932500           call 0x6a0920
// 004475f2  83c404               add esp, 4
// 004475f5  3bc7                 cmp eax, edi
// 004475f7  7404                 je 0x4475fd
// 004475f9  8918                 mov dword ptr [eax], ebx
// 004475fb  eb02                 jmp 0x4475ff
// 004475fd  33c0                 xor eax, eax
// 004475ff  8903                 mov dword ptr [ebx], eax
// 00447601  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447604  897b10               mov dword ptr [ebx + 0x10], edi
// 00447607  897b14               mov dword ptr [ebx + 0x14], edi
// 0044760a  6a04                 push 4
// 0044760c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00447611  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00447617  e804932500           call 0x6a0920
// 0044761c  83c404               add esp, 4
// 0044761f  3bc7                 cmp eax, edi
// 00447621  7404                 je 0x447627
// 00447623  8918                 mov dword ptr [eax], ebx
// 00447625  eb02                 jmp 0x447629
// 00447627  33c0                 xor eax, eax
// 00447629  8903                 mov dword ptr [ebx], eax
// 0044762b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044762e  897b10               mov dword ptr [ebx + 0x10], edi
// 00447631  897b14               mov dword ptr [ebx + 0x14], edi
// 00447634  68705f8100           push 0x815f70
// 00447639  57                   push edi
// 0044763a  8bce                 mov ecx, esi
// 0044763c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 00447641  e8ea5e2000           call 0x64d530
// 00447646  688c5f8100           push 0x815f8c
// 0044764b  6a02                 push 2
// 0044764d  8bce                 mov ecx, esi
// 0044764f  e8dc5e2000           call 0x64d530
// 00447654  68905f8100           push 0x815f90
// 00447659  6a01                 push 1
// 0044765b  8bce                 mov ecx, esi
// 0044765d  e8ce5e2000           call 0x64d530
// 00447662  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00447666  5f                   pop edi
// 00447667  8bc6                 mov eax, esi
// 00447669  5e                   pop esi
// 0044766a  5b                   pop ebx
// 0044766b  64890d00000000       mov dword ptr fs:[0], ecx
// 00447672  83c428               add esp, 0x28
// 00447675  c3                   ret 
// library rbxgs/roc_unit_17a2063a9f68116b.cpp (function ??0?$EnumDesc@W4AntialiasingMode@CRenderSettings@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_17a2063a9f68116b.cpp
