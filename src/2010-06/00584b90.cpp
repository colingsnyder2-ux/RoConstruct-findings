// roc 2010-06 00584b90  unit: seg_00580000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584b90
//
// 00584b90  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00584b96  55                   push ebp
// 00584b97  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 00584b9a  57                   push edi
// 00584b9b  33ff                 xor edi, edi
// 00584b9d  397e64               cmp dword ptr [esi + 0x64], edi
// 00584ba0  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00584ba4  7e25                 jle 0x584bcb
// 00584ba6  53                   push ebx
// 00584ba7  8d5844               lea ebx, [eax + 0x44]
// 00584baa  8d9b00000000         lea ebx, [ebx]
// 00584bb0  8b4604               mov eax, dword ptr [esi + 4]
// 00584bb3  8b4804               mov ecx, dword ptr [eax + 4]
// 00584bb6  55                   push ebp
// 00584bb7  6a01                 push 1
// 00584bb9  56                   push esi
// 00584bba  ffd1                 call ecx
// 00584bbc  8903                 mov dword ptr [ebx], eax
// 00584bbe  47                   inc edi
// 00584bbf  83c40c               add esp, 0xc
// 00584bc2  83c304               add ebx, 4
// 00584bc5  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00584bc8  7ce6                 jl 0x584bb0
// 00584bca  5b                   pop ebx
// 00584bcb  5f                   pop edi
// 00584bcc  5d                   pop ebp
// 00584bcd  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
