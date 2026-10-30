// from server: 100% by auto
// roc 2011-06 00574a10  unit: seg_00570000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574a10
//
// 00574a10  83ec0c               sub esp, 0xc
// 00574a13  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00574a16  8b4604               mov eax, dword ptr [esi + 4]
// 00574a19  8b10                 mov edx, dword ptr [eax]
// 00574a1b  53                   push ebx
// 00574a1c  55                   push ebp
// 00574a1d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00574a23  03c9                 add ecx, ecx
// 00574a25  57                   push edi
// 00574a26  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 00574a2c  03c9                 add ecx, ecx
// 00574a2e  03c9                 add ecx, ecx
// 00574a30  51                   push ecx
// 00574a31  6a01                 push 1
// 00574a33  56                   push esi
// 00574a34  897c2420             mov dword ptr [esp + 0x20], edi
// 00574a38  ffd2                 call edx
// 00574a3a  894738               mov dword ptr [edi + 0x38], eax
// 00574a3d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00574a40  8d1488               lea edx, [eax + ecx*4]
// 00574a43  89573c               mov dword ptr [edi + 0x3c], edx
// 00574a46  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00574a4c  33db                 xor ebx, ebx
// 00574a4e  83c40c               add esp, 0xc
// 00574a51  395e24               cmp dword ptr [esi + 0x24], ebx
// 00574a54  7e5b                 jle 0x574ab1
// 00574a56  83c504               add ebp, 4
// 00574a59  896c240c             mov dword ptr [esp + 0xc], ebp
// 00574a5d  8d680c               lea ebp, [eax + 0xc]
// 00574a60  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00574a63  0faf4500             imul eax, dword ptr [ebp]
// 00574a67  99                   cdq 
// 00574a68  f7be18010000         idiv dword ptr [esi + 0x118]
// 00574a6e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574a72  0faff8               imul edi, eax
// 00574a75  8d0cfd00000000       lea ecx, [edi*8]
// 00574a7c  51                   push ecx
// 00574a7d  89442414             mov dword ptr [esp + 0x14], eax
// 00574a81  8b4604               mov eax, dword ptr [esi + 4]
// 00574a84  8b10                 mov edx, dword ptr [eax]
// 00574a86  6a01                 push 1
// 00574a88  56                   push esi
// 00574a89  ffd2                 call edx
// 00574a8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00574a8f  8d0488               lea eax, [eax + ecx*4]
// 00574a92  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00574a96  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00574a99  89049a               mov dword ptr [edx + ebx*4], eax
// 00574a9c  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 00574a9f  8d04b8               lea eax, [eax + edi*4]
// 00574aa2  890499               mov dword ptr [ecx + ebx*4], eax
// 00574aa5  43                   inc ebx
// 00574aa6  83c40c               add esp, 0xc
// 00574aa9  83c554               add ebp, 0x54
// 00574aac  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 00574aaf  7caf                 jl 0x574a60
// 00574ab1  5f                   pop edi
// 00574ab2  5d                   pop ebp
// 00574ab3  5b                   pop ebx
// 00574ab4  83c40c               add esp, 0xc
// 00574ab7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
