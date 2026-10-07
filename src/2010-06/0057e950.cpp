// roc 2010-06 0057e950  unit: seg_00570000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057e950
//
// 0057e950  83ec10               sub esp, 0x10
// 0057e953  53                   push ebx
// 0057e954  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057e958  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0057e95e  55                   push ebp
// 0057e95f  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 0057e965  56                   push esi
// 0057e966  33f6                 xor esi, esi
// 0057e968  397324               cmp dword ptr [ebx + 0x24], esi
// 0057e96b  57                   push edi
// 0057e96c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 0057e972  897c2418             mov dword ptr [esp + 0x18], edi
// 0057e976  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e97a  89742410             mov dword ptr [esp + 0x10], esi
// 0057e97e  0f8e97000000         jle 0x57ea1b
// 0057e984  83c50c               add ebp, 0xc
// 0057e987  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057e98b  eb07                 jmp 0x57e994
// 0057e98d  8d4900               lea ecx, [ecx]
// 0057e990  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057e994  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0057e997  0faf4500             imul eax, dword ptr [ebp]
// 0057e99b  99                   cdq 
// 0057e99c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 0057e9a2  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0057e9a5  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0057e9a8  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0057e9ab  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0057e9ae  85c0                 test eax, eax
// 0057e9b0  7e54                 jle 0x57ea06
// 0057e9b2  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057e9b6  8d5602               lea edx, [esi + 2]
// 0057e9b9  0fafd0               imul edx, eax
// 0057e9bc  46                   inc esi
// 0057e9bd  0faff0               imul esi, eax
// 0057e9c0  8d1c97               lea ebx, [edi + edx*4]
// 0057e9c3  8d148500000000       lea edx, [eax*4]
// 0057e9ca  8bea                 mov ebp, edx
// 0057e9cc  8bd7                 mov edx, edi
// 0057e9ce  2bd5                 sub edx, ebp
// 0057e9d0  8d34b7               lea esi, [edi + esi*4]
// 0057e9d3  2bcf                 sub ecx, edi
// 0057e9d5  8b2c31               mov ebp, dword ptr [ecx + esi]
// 0057e9d8  892c11               mov dword ptr [ecx + edx], ebp
// 0057e9db  8b2e                 mov ebp, dword ptr [esi]
// 0057e9dd  892a                 mov dword ptr [edx], ebp
// 0057e9df  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0057e9e2  892c19               mov dword ptr [ecx + ebx], ebp
// 0057e9e5  8b2f                 mov ebp, dword ptr [edi]
// 0057e9e7  892b                 mov dword ptr [ebx], ebp
// 0057e9e9  83c604               add esi, 4
// 0057e9ec  83c204               add edx, 4
// 0057e9ef  83c704               add edi, 4
// 0057e9f2  83c304               add ebx, 4
// 0057e9f5  83e801               sub eax, 1
// 0057e9f8  75db                 jne 0x57e9d5
// 0057e9fa  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e9fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057ea02  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057ea06  46                   inc esi
// 0057ea07  83c554               add ebp, 0x54
// 0057ea0a  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 0057ea0d  89742410             mov dword ptr [esp + 0x10], esi
// 0057ea11  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057ea15  0f8c75ffffff         jl 0x57e990
// 0057ea1b  5f                   pop edi
// 0057ea1c  5e                   pop esi
// 0057ea1d  5d                   pop ebp
// 0057ea1e  5b                   pop ebx
// 0057ea1f  83c410               add esp, 0x10
// 0057ea22  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
