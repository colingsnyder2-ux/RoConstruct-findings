// roc 2009-12 0061cc00  unit: seg_00610000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061cc00
//
// 0061cc00  83ec0c               sub esp, 0xc
// 0061cc03  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0061cc06  8b4604               mov eax, dword ptr [esi + 4]
// 0061cc09  8b10                 mov edx, dword ptr [eax]
// 0061cc0b  53                   push ebx
// 0061cc0c  55                   push ebp
// 0061cc0d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 0061cc13  03c9                 add ecx, ecx
// 0061cc15  57                   push edi
// 0061cc16  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0061cc1c  03c9                 add ecx, ecx
// 0061cc1e  03c9                 add ecx, ecx
// 0061cc20  51                   push ecx
// 0061cc21  6a01                 push 1
// 0061cc23  56                   push esi
// 0061cc24  897c2420             mov dword ptr [esp + 0x20], edi
// 0061cc28  ffd2                 call edx
// 0061cc2a  894738               mov dword ptr [edi + 0x38], eax
// 0061cc2d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0061cc30  8d1488               lea edx, [eax + ecx*4]
// 0061cc33  89573c               mov dword ptr [edi + 0x3c], edx
// 0061cc36  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0061cc3c  33db                 xor ebx, ebx
// 0061cc3e  83c40c               add esp, 0xc
// 0061cc41  395e24               cmp dword ptr [esi + 0x24], ebx
// 0061cc44  7e5b                 jle 0x61cca1
// 0061cc46  83c504               add ebp, 4
// 0061cc49  896c240c             mov dword ptr [esp + 0xc], ebp
// 0061cc4d  8d680c               lea ebp, [eax + 0xc]
// 0061cc50  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0061cc53  0faf4500             imul eax, dword ptr [ebp]
// 0061cc57  99                   cdq 
// 0061cc58  f7be18010000         idiv dword ptr [esi + 0x118]
// 0061cc5e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061cc62  0faff8               imul edi, eax
// 0061cc65  8d0cfd00000000       lea ecx, [edi*8]
// 0061cc6c  51                   push ecx
// 0061cc6d  89442414             mov dword ptr [esp + 0x14], eax
// 0061cc71  8b4604               mov eax, dword ptr [esi + 4]
// 0061cc74  8b10                 mov edx, dword ptr [eax]
// 0061cc76  6a01                 push 1
// 0061cc78  56                   push esi
// 0061cc79  ffd2                 call edx
// 0061cc7b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061cc7f  8d0488               lea eax, [eax + ecx*4]
// 0061cc82  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061cc86  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0061cc89  89049a               mov dword ptr [edx + ebx*4], eax
// 0061cc8c  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 0061cc8f  8d04b8               lea eax, [eax + edi*4]
// 0061cc92  890499               mov dword ptr [ecx + ebx*4], eax
// 0061cc95  43                   inc ebx
// 0061cc96  83c40c               add esp, 0xc
// 0061cc99  83c554               add ebp, 0x54
// 0061cc9c  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0061cc9f  7caf                 jl 0x61cc50
// 0061cca1  5f                   pop edi
// 0061cca2  5d                   pop ebp
// 0061cca3  5b                   pop ebx
// 0061cca4  83c40c               add esp, 0xc
// 0061cca7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
