// roc 2007-03 00524320  unit: seg_00520000  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524320
//
// 00524320  8b4704               mov eax, dword ptr [edi + 4]
// 00524323  8b10                 mov edx, dword ptr [eax]
// 00524325  53                   push ebx
// 00524326  55                   push ebp
// 00524327  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052432b  56                   push esi
// 0052432c  8bcd                 mov ecx, ebp
// 0052432e  c1e105               shl ecx, 5
// 00524331  51                   push ecx
// 00524332  6a01                 push 1
// 00524334  57                   push edi
// 00524335  ffd2                 call edx
// 00524337  8bf0                 mov esi, eax
// 00524339  33db                 xor ebx, ebx
// 0052433b  b81f000000           mov eax, 0x1f
// 00524340  56                   push esi
// 00524341  8bcf                 mov ecx, edi
// 00524343  891e                 mov dword ptr [esi], ebx
// 00524345  894604               mov dword ptr [esi + 4], eax
// 00524348  895e08               mov dword ptr [esi + 8], ebx
// 0052434b  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 00524352  895e10               mov dword ptr [esi + 0x10], ebx
// 00524355  894614               mov dword ptr [esi + 0x14], eax
// 00524358  e8f3f8ffff           call 0x523c50
// 0052435d  55                   push ebp
// 0052435e  6a01                 push 1
// 00524360  56                   push esi
// 00524361  57                   push edi
// 00524362  e8e9fcffff           call 0x524050
// 00524367  8be8                 mov ebp, eax
// 00524369  83c420               add esp, 0x20
// 0052436c  3beb                 cmp ebp, ebx
// 0052436e  7e16                 jle 0x524386
// 00524370  53                   push ebx
// 00524371  57                   push edi
// 00524372  8bc6                 mov eax, esi
// 00524374  e827feffff           call 0x5241a0
// 00524379  83c301               add ebx, 1
// 0052437c  83c408               add esp, 8
// 0052437f  83c620               add esi, 0x20
// 00524382  3bdd                 cmp ebx, ebp
// 00524384  7cea                 jl 0x524370
// 00524386  8b07                 mov eax, dword ptr [edi]
// 00524388  896f70               mov dword ptr [edi + 0x70], ebp
// 0052438b  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00524392  8b0f                 mov ecx, dword ptr [edi]
// 00524394  896918               mov dword ptr [ecx + 0x18], ebp
// 00524397  8b17                 mov edx, dword ptr [edi]
// 00524399  8b4204               mov eax, dword ptr [edx + 4]
// 0052439c  6a01                 push 1
// 0052439e  57                   push edi
// 0052439f  ffd0                 call eax
// 005243a1  83c408               add esp, 8
// 005243a4  5e                   pop esi
// 005243a5  5d                   pop ebp
// 005243a6  5b                   pop ebx
// 005243a7  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
