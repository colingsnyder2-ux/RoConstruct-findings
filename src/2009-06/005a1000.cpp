// roc 2009-06 005a1000  unit: seg_005a0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1000
//
// 005a1000  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 005a1006  55                   push ebp
// 005a1007  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 005a100a  57                   push edi
// 005a100b  33ff                 xor edi, edi
// 005a100d  397e64               cmp dword ptr [esi + 0x64], edi
// 005a1010  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 005a1014  7e25                 jle 0x5a103b
// 005a1016  53                   push ebx
// 005a1017  8d5844               lea ebx, [eax + 0x44]
// 005a101a  8d9b00000000         lea ebx, [ebx]
// 005a1020  8b4604               mov eax, dword ptr [esi + 4]
// 005a1023  8b4804               mov ecx, dword ptr [eax + 4]
// 005a1026  55                   push ebp
// 005a1027  6a01                 push 1
// 005a1029  56                   push esi
// 005a102a  ffd1                 call ecx
// 005a102c  8903                 mov dword ptr [ebx], eax
// 005a102e  47                   inc edi
// 005a102f  83c40c               add esp, 0xc
// 005a1032  83c304               add ebx, 4
// 005a1035  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 005a1038  7ce6                 jl 0x5a1020
// 005a103a  5b                   pop ebx
// 005a103b  5f                   pop edi
// 005a103c  5d                   pop ebp
// 005a103d  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
