// roc 2007-03 0051f320  unit: seg_00510000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f320
//
// 0051f320  83ec0c               sub esp, 0xc
// 0051f323  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0051f326  8b4604               mov eax, dword ptr [esi + 4]
// 0051f329  8b10                 mov edx, dword ptr [eax]
// 0051f32b  53                   push ebx
// 0051f32c  55                   push ebp
// 0051f32d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 0051f333  03c9                 add ecx, ecx
// 0051f335  57                   push edi
// 0051f336  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0051f33c  03c9                 add ecx, ecx
// 0051f33e  03c9                 add ecx, ecx
// 0051f340  51                   push ecx
// 0051f341  6a01                 push 1
// 0051f343  56                   push esi
// 0051f344  897c2420             mov dword ptr [esp + 0x20], edi
// 0051f348  ffd2                 call edx
// 0051f34a  894738               mov dword ptr [edi + 0x38], eax
// 0051f34d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0051f350  8d1488               lea edx, [eax + ecx*4]
// 0051f353  89573c               mov dword ptr [edi + 0x3c], edx
// 0051f356  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0051f35c  33db                 xor ebx, ebx
// 0051f35e  83c40c               add esp, 0xc
// 0051f361  395e24               cmp dword ptr [esi + 0x24], ebx
// 0051f364  7e5d                 jle 0x51f3c3
// 0051f366  83c504               add ebp, 4
// 0051f369  896c240c             mov dword ptr [esp + 0xc], ebp
// 0051f36d  8d680c               lea ebp, [eax + 0xc]
// 0051f370  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0051f373  0faf4500             imul eax, dword ptr [ebp]
// 0051f377  99                   cdq 
// 0051f378  f7be18010000         idiv dword ptr [esi + 0x118]
// 0051f37e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051f382  0faff8               imul edi, eax
// 0051f385  8d0cfd00000000       lea ecx, [edi*8]
// 0051f38c  51                   push ecx
// 0051f38d  89442414             mov dword ptr [esp + 0x14], eax
// 0051f391  8b4604               mov eax, dword ptr [esi + 4]
// 0051f394  8b10                 mov edx, dword ptr [eax]
// 0051f396  6a01                 push 1
// 0051f398  56                   push esi
// 0051f399  ffd2                 call edx
// 0051f39b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051f39f  8d0488               lea eax, [eax + ecx*4]
// 0051f3a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051f3a6  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0051f3a9  89049a               mov dword ptr [edx + ebx*4], eax
// 0051f3ac  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 0051f3af  8d04b8               lea eax, [eax + edi*4]
// 0051f3b2  890499               mov dword ptr [ecx + ebx*4], eax
// 0051f3b5  83c301               add ebx, 1
// 0051f3b8  83c40c               add esp, 0xc
// 0051f3bb  83c554               add ebp, 0x54
// 0051f3be  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0051f3c1  7cad                 jl 0x51f370
// 0051f3c3  5f                   pop edi
// 0051f3c4  5d                   pop ebp
// 0051f3c5  5b                   pop ebx
// 0051f3c6  83c40c               add esp, 0xc
// 0051f3c9  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
