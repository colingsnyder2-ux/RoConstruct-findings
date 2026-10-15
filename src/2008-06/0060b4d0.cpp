// roc 2008-06 0060b4d0  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b4d0
//
// 0060b4d0  6aff                 push -1
// 0060b4d2  68c98e7d00           push 0x7d8ec9
// 0060b4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0060b4dd  50                   push eax
// 0060b4de  64892500000000       mov dword ptr fs:[0], esp
// 0060b4e5  83ec1c               sub esp, 0x1c
// 0060b4e8  53                   push ebx
// 0060b4e9  56                   push esi
// 0060b4ea  57                   push edi
// 0060b4eb  681ca49500           push 0x95a41c
// 0060b4f0  8bf1                 mov esi, ecx
// 0060b4f2  68ac2f8400           push 0x842fac
// 0060b4f7  8974242c             mov dword ptr [esp + 0x2c], esi
// 0060b4fb  e89010f6ff           call 0x56c590
// 0060b500  8d442423             lea eax, [esp + 0x23]
// 0060b504  50                   push eax
// 0060b505  8d542427             lea edx, [esp + 0x27]
// 0060b509  33ff                 xor edi, edi
// 0060b50b  8d4e30               lea ecx, [esi + 0x30]
// 0060b50e  52                   push edx
// 0060b50f  897c2438             mov dword ptr [esp + 0x38], edi
// 0060b513  c706742f8400         mov dword ptr [esi], 0x842f74
// 0060b519  e8f2abe3ff           call 0x446110
// 0060b51e  8d442423             lea eax, [esp + 0x23]
// 0060b522  50                   push eax
// 0060b523  8d542427             lea edx, [esp + 0x27]
// 0060b527  8d4e50               lea ecx, [esi + 0x50]
// 0060b52a  52                   push edx
// 0060b52b  c644243801           mov byte ptr [esp + 0x38], 1
// 0060b530  e8dbabe3ff           call 0x446110
// 0060b535  6a04                 push 4
// 0060b537  c644243402           mov byte ptr [esp + 0x34], 2
// 0060b53c  8d5e70               lea ebx, [esi + 0x70]
// 0060b53f  e8dc530900           call 0x6a0920
// 0060b544  83c404               add esp, 4
// 0060b547  3bc7                 cmp eax, edi
// 0060b549  7404                 je 0x60b54f
// 0060b54b  8918                 mov dword ptr [eax], ebx
// 0060b54d  eb02                 jmp 0x60b551
// 0060b54f  33c0                 xor eax, eax
// 0060b551  8903                 mov dword ptr [ebx], eax
// 0060b553  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b556  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b559  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b55c  6a04                 push 4
// 0060b55e  c644243404           mov byte ptr [esp + 0x34], 4
// 0060b563  8d9e88000000         lea ebx, [esi + 0x88]
// 0060b569  e8b2530900           call 0x6a0920
// 0060b56e  83c404               add esp, 4
// 0060b571  3bc7                 cmp eax, edi
// 0060b573  7404                 je 0x60b579
// 0060b575  8918                 mov dword ptr [eax], ebx
// 0060b577  eb02                 jmp 0x60b57b
// 0060b579  33c0                 xor eax, eax
// 0060b57b  8903                 mov dword ptr [ebx], eax
// 0060b57d  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b580  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b583  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b586  6a04                 push 4
// 0060b588  c644243406           mov byte ptr [esp + 0x34], 6
// 0060b58d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0060b593  e888530900           call 0x6a0920
// 0060b598  83c404               add esp, 4
// 0060b59b  3bc7                 cmp eax, edi
// 0060b59d  7404                 je 0x60b5a3
// 0060b59f  8918                 mov dword ptr [eax], ebx
// 0060b5a1  eb02                 jmp 0x60b5a5
// 0060b5a3  33c0                 xor eax, eax
// 0060b5a5  8903                 mov dword ptr [ebx], eax
// 0060b5a7  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b5aa  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b5ad  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b5b0  6a04                 push 4
// 0060b5b2  c644243408           mov byte ptr [esp + 0x34], 8
// 0060b5b7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0060b5bd  e85e530900           call 0x6a0920
// 0060b5c2  83c404               add esp, 4
// 0060b5c5  3bc7                 cmp eax, edi
// 0060b5c7  7404                 je 0x60b5cd
// 0060b5c9  8918                 mov dword ptr [eax], ebx
// 0060b5cb  eb02                 jmp 0x60b5cf
// 0060b5cd  33c0                 xor eax, eax
// 0060b5cf  8903                 mov dword ptr [ebx], eax
// 0060b5d1  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b5d4  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b5d7  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b5da  6a04                 push 4
// 0060b5dc  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 0060b5e1  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0060b5e7  e834530900           call 0x6a0920
// 0060b5ec  83c404               add esp, 4
// 0060b5ef  3bc7                 cmp eax, edi
// 0060b5f1  7404                 je 0x60b5f7
// 0060b5f3  8918                 mov dword ptr [eax], ebx
// 0060b5f5  eb02                 jmp 0x60b5f9
// 0060b5f7  33c0                 xor eax, eax
// 0060b5f9  8903                 mov dword ptr [ebx], eax
// 0060b5fb  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b5fe  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b601  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b604  68a42f8400           push 0x842fa4
// 0060b609  57                   push edi
// 0060b60a  8bce                 mov ecx, esi
// 0060b60c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 0060b611  e81a1f0400           call 0x64d530
// 0060b616  689c2f8400           push 0x842f9c
// 0060b61b  6a01                 push 1
// 0060b61d  8bce                 mov ecx, esi
// 0060b61f  e80c1f0400           call 0x64d530
// 0060b624  687c2f8400           push 0x842f7c
// 0060b629  6a02                 push 2
// 0060b62b  8bce                 mov ecx, esi
// 0060b62d  e8fe1e0400           call 0x64d530
// 0060b632  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060b636  5f                   pop edi
// 0060b637  8bc6                 mov eax, esi
// 0060b639  5e                   pop esi
// 0060b63a  5b                   pop ebx
// 0060b63b  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b642  83c428               add esp, 0x28
// 0060b645  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4InOut@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
