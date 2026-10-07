// roc 2011-06 0057ae40  unit: seg_00570000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ae40
//
// 0057ae40  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0057ae46  55                   push ebp
// 0057ae47  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0057ae4a  57                   push edi
// 0057ae4b  33ff                 xor edi, edi
// 0057ae4d  397e64               cmp dword ptr [esi + 0x64], edi
// 0057ae50  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 0057ae54  7e25                 jle 0x57ae7b
// 0057ae56  53                   push ebx
// 0057ae57  8d5844               lea ebx, [eax + 0x44]
// 0057ae5a  8d9b00000000         lea ebx, [ebx]
// 0057ae60  8b4604               mov eax, dword ptr [esi + 4]
// 0057ae63  8b4804               mov ecx, dword ptr [eax + 4]
// 0057ae66  55                   push ebp
// 0057ae67  6a01                 push 1
// 0057ae69  56                   push esi
// 0057ae6a  ffd1                 call ecx
// 0057ae6c  8903                 mov dword ptr [ebx], eax
// 0057ae6e  47                   inc edi
// 0057ae6f  83c40c               add esp, 0xc
// 0057ae72  83c304               add ebx, 4
// 0057ae75  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 0057ae78  7ce6                 jl 0x57ae60
// 0057ae7a  5b                   pop ebx
// 0057ae7b  5f                   pop edi
// 0057ae7c  5d                   pop ebp
// 0057ae7d  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
