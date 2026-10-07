// roc 2008-06 00536d20  unit: seg_00530000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536d20
//
// 00536d20  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00536d26  55                   push ebp
// 00536d27  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 00536d2a  57                   push edi
// 00536d2b  33ff                 xor edi, edi
// 00536d2d  397e64               cmp dword ptr [esi + 0x64], edi
// 00536d30  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00536d34  7e25                 jle 0x536d5b
// 00536d36  53                   push ebx
// 00536d37  8d5844               lea ebx, [eax + 0x44]
// 00536d3a  8d9b00000000         lea ebx, [ebx]
// 00536d40  8b4604               mov eax, dword ptr [esi + 4]
// 00536d43  8b4804               mov ecx, dword ptr [eax + 4]
// 00536d46  55                   push ebp
// 00536d47  6a01                 push 1
// 00536d49  56                   push esi
// 00536d4a  ffd1                 call ecx
// 00536d4c  8903                 mov dword ptr [ebx], eax
// 00536d4e  47                   inc edi
// 00536d4f  83c40c               add esp, 0xc
// 00536d52  83c304               add ebx, 4
// 00536d55  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00536d58  7ce6                 jl 0x536d40
// 00536d5a  5b                   pop ebx
// 00536d5b  5f                   pop edi
// 00536d5c  5d                   pop ebp
// 00536d5d  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
