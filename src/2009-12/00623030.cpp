// roc 2009-12 00623030  unit: seg_00620000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623030
//
// 00623030  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00623036  55                   push ebp
// 00623037  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0062303a  57                   push edi
// 0062303b  33ff                 xor edi, edi
// 0062303d  397e64               cmp dword ptr [esi + 0x64], edi
// 00623040  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 00623044  7e25                 jle 0x62306b
// 00623046  53                   push ebx
// 00623047  8d5844               lea ebx, [eax + 0x44]
// 0062304a  8d9b00000000         lea ebx, [ebx]
// 00623050  8b4604               mov eax, dword ptr [esi + 4]
// 00623053  8b4804               mov ecx, dword ptr [eax + 4]
// 00623056  55                   push ebp
// 00623057  6a01                 push 1
// 00623059  56                   push esi
// 0062305a  ffd1                 call ecx
// 0062305c  8903                 mov dword ptr [ebx], eax
// 0062305e  47                   inc edi
// 0062305f  83c40c               add esp, 0xc
// 00623062  83c304               add ebx, 4
// 00623065  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00623068  7ce6                 jl 0x623050
// 0062306a  5b                   pop ebx
// 0062306b  5f                   pop edi
// 0062306c  5d                   pop ebp
// 0062306d  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
