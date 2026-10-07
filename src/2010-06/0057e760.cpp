// roc 2010-06 0057e760  unit: seg_00570000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057e760
//
// 0057e760  83ec0c               sub esp, 0xc
// 0057e763  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0057e766  8b4604               mov eax, dword ptr [esi + 4]
// 0057e769  8b10                 mov edx, dword ptr [eax]
// 0057e76b  53                   push ebx
// 0057e76c  55                   push ebp
// 0057e76d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 0057e773  03c9                 add ecx, ecx
// 0057e775  57                   push edi
// 0057e776  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0057e77c  03c9                 add ecx, ecx
// 0057e77e  03c9                 add ecx, ecx
// 0057e780  51                   push ecx
// 0057e781  6a01                 push 1
// 0057e783  56                   push esi
// 0057e784  897c2420             mov dword ptr [esp + 0x20], edi
// 0057e788  ffd2                 call edx
// 0057e78a  894738               mov dword ptr [edi + 0x38], eax
// 0057e78d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0057e790  8d1488               lea edx, [eax + ecx*4]
// 0057e793  89573c               mov dword ptr [edi + 0x3c], edx
// 0057e796  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0057e79c  33db                 xor ebx, ebx
// 0057e79e  83c40c               add esp, 0xc
// 0057e7a1  395e24               cmp dword ptr [esi + 0x24], ebx
// 0057e7a4  7e5b                 jle 0x57e801
// 0057e7a6  83c504               add ebp, 4
// 0057e7a9  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057e7ad  8d680c               lea ebp, [eax + 0xc]
// 0057e7b0  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0057e7b3  0faf4500             imul eax, dword ptr [ebp]
// 0057e7b7  99                   cdq 
// 0057e7b8  f7be18010000         idiv dword ptr [esi + 0x118]
// 0057e7be  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057e7c2  0faff8               imul edi, eax
// 0057e7c5  8d0cfd00000000       lea ecx, [edi*8]
// 0057e7cc  51                   push ecx
// 0057e7cd  89442414             mov dword ptr [esp + 0x14], eax
// 0057e7d1  8b4604               mov eax, dword ptr [esi + 4]
// 0057e7d4  8b10                 mov edx, dword ptr [eax]
// 0057e7d6  6a01                 push 1
// 0057e7d8  56                   push esi
// 0057e7d9  ffd2                 call edx
// 0057e7db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057e7df  8d0488               lea eax, [eax + ecx*4]
// 0057e7e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057e7e6  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0057e7e9  89049a               mov dword ptr [edx + ebx*4], eax
// 0057e7ec  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 0057e7ef  8d04b8               lea eax, [eax + edi*4]
// 0057e7f2  890499               mov dword ptr [ecx + ebx*4], eax
// 0057e7f5  43                   inc ebx
// 0057e7f6  83c40c               add esp, 0xc
// 0057e7f9  83c554               add ebp, 0x54
// 0057e7fc  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0057e7ff  7caf                 jl 0x57e7b0
// 0057e801  5f                   pop edi
// 0057e802  5d                   pop ebp
// 0057e803  5b                   pop ebx
// 0057e804  83c40c               add esp, 0xc
// 0057e807  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
