// from server: 100% by auto
// roc 2009-06 0059abd0  unit: seg_00590000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059abd0
//
// 0059abd0  83ec0c               sub esp, 0xc
// 0059abd3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0059abd6  8b4604               mov eax, dword ptr [esi + 4]
// 0059abd9  8b10                 mov edx, dword ptr [eax]
// 0059abdb  53                   push ebx
// 0059abdc  55                   push ebp
// 0059abdd  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 0059abe3  03c9                 add ecx, ecx
// 0059abe5  57                   push edi
// 0059abe6  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0059abec  03c9                 add ecx, ecx
// 0059abee  03c9                 add ecx, ecx
// 0059abf0  51                   push ecx
// 0059abf1  6a01                 push 1
// 0059abf3  56                   push esi
// 0059abf4  897c2420             mov dword ptr [esp + 0x20], edi
// 0059abf8  ffd2                 call edx
// 0059abfa  894738               mov dword ptr [edi + 0x38], eax
// 0059abfd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0059ac00  8d1488               lea edx, [eax + ecx*4]
// 0059ac03  89573c               mov dword ptr [edi + 0x3c], edx
// 0059ac06  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0059ac0c  33db                 xor ebx, ebx
// 0059ac0e  83c40c               add esp, 0xc
// 0059ac11  395e24               cmp dword ptr [esi + 0x24], ebx
// 0059ac14  7e5b                 jle 0x59ac71
// 0059ac16  83c504               add ebp, 4
// 0059ac19  896c240c             mov dword ptr [esp + 0xc], ebp
// 0059ac1d  8d680c               lea ebp, [eax + 0xc]
// 0059ac20  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0059ac23  0faf4500             imul eax, dword ptr [ebp]
// 0059ac27  99                   cdq 
// 0059ac28  f7be18010000         idiv dword ptr [esi + 0x118]
// 0059ac2e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059ac32  0faff8               imul edi, eax
// 0059ac35  8d0cfd00000000       lea ecx, [edi*8]
// 0059ac3c  51                   push ecx
// 0059ac3d  89442414             mov dword ptr [esp + 0x14], eax
// 0059ac41  8b4604               mov eax, dword ptr [esi + 4]
// 0059ac44  8b10                 mov edx, dword ptr [eax]
// 0059ac46  6a01                 push 1
// 0059ac48  56                   push esi
// 0059ac49  ffd2                 call edx
// 0059ac4b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059ac4f  8d0488               lea eax, [eax + ecx*4]
// 0059ac52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ac56  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0059ac59  89049a               mov dword ptr [edx + ebx*4], eax
// 0059ac5c  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 0059ac5f  8d04b8               lea eax, [eax + edi*4]
// 0059ac62  890499               mov dword ptr [ecx + ebx*4], eax
// 0059ac65  43                   inc ebx
// 0059ac66  83c40c               add esp, 0xc
// 0059ac69  83c554               add ebp, 0x54
// 0059ac6c  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0059ac6f  7caf                 jl 0x59ac20
// 0059ac71  5f                   pop edi
// 0059ac72  5d                   pop ebp
// 0059ac73  5b                   pop ebx
// 0059ac74  83c40c               add esp, 0xc
// 0059ac77  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
