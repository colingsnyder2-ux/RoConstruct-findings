// from server: 100% by auto
// roc 2011-06 00574c00  unit: seg_00570000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574c00
//
// 00574c00  83ec10               sub esp, 0x10
// 00574c03  53                   push ebx
// 00574c04  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00574c08  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 00574c0e  55                   push ebp
// 00574c0f  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00574c15  56                   push esi
// 00574c16  33f6                 xor esi, esi
// 00574c18  397324               cmp dword ptr [ebx + 0x24], esi
// 00574c1b  57                   push edi
// 00574c1c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 00574c22  897c2418             mov dword ptr [esp + 0x18], edi
// 00574c26  8944241c             mov dword ptr [esp + 0x1c], eax
// 00574c2a  89742410             mov dword ptr [esp + 0x10], esi
// 00574c2e  0f8e97000000         jle 0x574ccb
// 00574c34  83c50c               add ebp, 0xc
// 00574c37  896c2414             mov dword ptr [esp + 0x14], ebp
// 00574c3b  eb07                 jmp 0x574c44
// 00574c3d  8d4900               lea ecx, [ecx]
// 00574c40  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00574c44  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00574c47  0faf4500             imul eax, dword ptr [ebp]
// 00574c4b  99                   cdq 
// 00574c4c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 00574c52  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00574c55  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00574c58  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00574c5b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 00574c5e  85c0                 test eax, eax
// 00574c60  7e54                 jle 0x574cb6
// 00574c62  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00574c66  8d5602               lea edx, [esi + 2]
// 00574c69  0fafd0               imul edx, eax
// 00574c6c  46                   inc esi
// 00574c6d  0faff0               imul esi, eax
// 00574c70  8d1c97               lea ebx, [edi + edx*4]
// 00574c73  8d148500000000       lea edx, [eax*4]
// 00574c7a  8bea                 mov ebp, edx
// 00574c7c  8bd7                 mov edx, edi
// 00574c7e  2bd5                 sub edx, ebp
// 00574c80  8d34b7               lea esi, [edi + esi*4]
// 00574c83  2bcf                 sub ecx, edi
// 00574c85  8b2c31               mov ebp, dword ptr [ecx + esi]
// 00574c88  892c11               mov dword ptr [ecx + edx], ebp
// 00574c8b  8b2e                 mov ebp, dword ptr [esi]
// 00574c8d  892a                 mov dword ptr [edx], ebp
// 00574c8f  8b2c39               mov ebp, dword ptr [ecx + edi]
// 00574c92  892c19               mov dword ptr [ecx + ebx], ebp
// 00574c95  8b2f                 mov ebp, dword ptr [edi]
// 00574c97  892b                 mov dword ptr [ebx], ebp
// 00574c99  83c604               add esi, 4
// 00574c9c  83c204               add edx, 4
// 00574c9f  83c704               add edi, 4
// 00574ca2  83c304               add ebx, 4
// 00574ca5  83e801               sub eax, 1
// 00574ca8  75db                 jne 0x574c85
// 00574caa  8b742410             mov esi, dword ptr [esp + 0x10]
// 00574cae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00574cb2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00574cb6  46                   inc esi
// 00574cb7  83c554               add ebp, 0x54
// 00574cba  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 00574cbd  89742410             mov dword ptr [esp + 0x10], esi
// 00574cc1  896c2414             mov dword ptr [esp + 0x14], ebp
// 00574cc5  0f8c75ffffff         jl 0x574c40
// 00574ccb  5f                   pop edi
// 00574ccc  5e                   pop esi
// 00574ccd  5d                   pop ebp
// 00574cce  5b                   pop ebx
// 00574ccf  83c410               add esp, 0x10
// 00574cd2  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
