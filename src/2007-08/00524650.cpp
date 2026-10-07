// roc 2007-08 00524650  unit: G3D::Line  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524650
//
// 00524650  83ec0c               sub esp, 0xc
// 00524653  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00524656  8b4604               mov eax, dword ptr [esi + 4]
// 00524659  8b10                 mov edx, dword ptr [eax]
// 0052465b  53                   push ebx
// 0052465c  55                   push ebp
// 0052465d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00524663  03c9                 add ecx, ecx
// 00524665  57                   push edi
// 00524666  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0052466c  03c9                 add ecx, ecx
// 0052466e  03c9                 add ecx, ecx
// 00524670  51                   push ecx
// 00524671  6a01                 push 1
// 00524673  56                   push esi
// 00524674  897c2420             mov dword ptr [esp + 0x20], edi
// 00524678  ffd2                 call edx
// 0052467a  894738               mov dword ptr [edi + 0x38], eax
// 0052467d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00524680  8d1488               lea edx, [eax + ecx*4]
// 00524683  89573c               mov dword ptr [edi + 0x3c], edx
// 00524686  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0052468c  33db                 xor ebx, ebx
// 0052468e  83c40c               add esp, 0xc
// 00524691  395e24               cmp dword ptr [esi + 0x24], ebx
// 00524694  7e5d                 jle 0x5246f3
// 00524696  83c504               add ebp, 4
// 00524699  896c240c             mov dword ptr [esp + 0xc], ebp
// 0052469d  8d680c               lea ebp, [eax + 0xc]
// 005246a0  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005246a3  0faf4500             imul eax, dword ptr [ebp]
// 005246a7  99                   cdq 
// 005246a8  f7be18010000         idiv dword ptr [esi + 0x118]
// 005246ae  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005246b2  0faff8               imul edi, eax
// 005246b5  8d0cfd00000000       lea ecx, [edi*8]
// 005246bc  51                   push ecx
// 005246bd  89442414             mov dword ptr [esp + 0x14], eax
// 005246c1  8b4604               mov eax, dword ptr [esi + 4]
// 005246c4  8b10                 mov edx, dword ptr [eax]
// 005246c6  6a01                 push 1
// 005246c8  56                   push esi
// 005246c9  ffd2                 call edx
// 005246cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005246cf  8d0488               lea eax, [eax + ecx*4]
// 005246d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005246d6  8b5138               mov edx, dword ptr [ecx + 0x38]
// 005246d9  89049a               mov dword ptr [edx + ebx*4], eax
// 005246dc  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 005246df  8d04b8               lea eax, [eax + edi*4]
// 005246e2  890499               mov dword ptr [ecx + ebx*4], eax
// 005246e5  83c301               add ebx, 1
// 005246e8  83c40c               add esp, 0xc
// 005246eb  83c554               add ebp, 0x54
// 005246ee  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005246f1  7cad                 jl 0x5246a0
// 005246f3  5f                   pop edi
// 005246f4  5d                   pop ebp
// 005246f5  5b                   pop ebx
// 005246f6  83c40c               add esp, 0xc
// 005246f9  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
