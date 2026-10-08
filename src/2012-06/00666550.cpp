// from server: 100% by auto
// roc 2012-06 00666550  unit: seg_00660000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666550
//
// 00666550  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00666556  55                   push ebp
// 00666557  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0066655a  57                   push edi
// 0066655b  33ff                 xor edi, edi
// 0066655d  397e64               cmp dword ptr [esi + 0x64], edi
// 00666560  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00666564  7e25                 jle 0x66658b
// 00666566  53                   push ebx
// 00666567  8d5844               lea ebx, [eax + 0x44]
// 0066656a  8d9b00000000         lea ebx, [ebx]
// 00666570  8b4604               mov eax, dword ptr [esi + 4]
// 00666573  8b4804               mov ecx, dword ptr [eax + 4]
// 00666576  55                   push ebp
// 00666577  6a01                 push 1
// 00666579  56                   push esi
// 0066657a  ffd1                 call ecx
// 0066657c  8903                 mov dword ptr [ebx], eax
// 0066657e  47                   inc edi
// 0066657f  83c40c               add esp, 0xc
// 00666582  83c304               add ebx, 4
// 00666585  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00666588  7ce6                 jl 0x666570
// 0066658a  5b                   pop ebx
// 0066658b  5f                   pop edi
// 0066658c  5d                   pop ebp
// 0066658d  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
