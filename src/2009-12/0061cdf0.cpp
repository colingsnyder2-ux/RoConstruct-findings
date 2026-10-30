// roc 2009-12 0061cdf0  unit: seg_00610000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061cdf0
//
// 0061cdf0  83ec10               sub esp, 0x10
// 0061cdf3  53                   push ebx
// 0061cdf4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061cdf8  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0061cdfe  55                   push ebp
// 0061cdff  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 0061ce05  56                   push esi
// 0061ce06  33f6                 xor esi, esi
// 0061ce08  397324               cmp dword ptr [ebx + 0x24], esi
// 0061ce0b  57                   push edi
// 0061ce0c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 0061ce12  897c2418             mov dword ptr [esp + 0x18], edi
// 0061ce16  8944241c             mov dword ptr [esp + 0x1c], eax
// 0061ce1a  89742410             mov dword ptr [esp + 0x10], esi
// 0061ce1e  0f8e97000000         jle 0x61cebb
// 0061ce24  83c50c               add ebp, 0xc
// 0061ce27  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061ce2b  eb07                 jmp 0x61ce34
// 0061ce2d  8d4900               lea ecx, [ecx]
// 0061ce30  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061ce34  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0061ce37  0faf4500             imul eax, dword ptr [ebp]
// 0061ce3b  99                   cdq 
// 0061ce3c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 0061ce42  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0061ce45  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0061ce48  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0061ce4b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0061ce4e  85c0                 test eax, eax
// 0061ce50  7e54                 jle 0x61cea6
// 0061ce52  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061ce56  8d5602               lea edx, [esi + 2]
// 0061ce59  0fafd0               imul edx, eax
// 0061ce5c  46                   inc esi
// 0061ce5d  0faff0               imul esi, eax
// 0061ce60  8d1c97               lea ebx, [edi + edx*4]
// 0061ce63  8d148500000000       lea edx, [eax*4]
// 0061ce6a  8bea                 mov ebp, edx
// 0061ce6c  8bd7                 mov edx, edi
// 0061ce6e  2bd5                 sub edx, ebp
// 0061ce70  8d34b7               lea esi, [edi + esi*4]
// 0061ce73  2bcf                 sub ecx, edi
// 0061ce75  8b2c31               mov ebp, dword ptr [ecx + esi]
// 0061ce78  892c11               mov dword ptr [ecx + edx], ebp
// 0061ce7b  8b2e                 mov ebp, dword ptr [esi]
// 0061ce7d  892a                 mov dword ptr [edx], ebp
// 0061ce7f  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0061ce82  892c19               mov dword ptr [ecx + ebx], ebp
// 0061ce85  8b2f                 mov ebp, dword ptr [edi]
// 0061ce87  892b                 mov dword ptr [ebx], ebp
// 0061ce89  83c604               add esi, 4
// 0061ce8c  83c204               add edx, 4
// 0061ce8f  83c704               add edi, 4
// 0061ce92  83c304               add ebx, 4
// 0061ce95  83e801               sub eax, 1
// 0061ce98  75db                 jne 0x61ce75
// 0061ce9a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061ce9e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061cea2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0061cea6  46                   inc esi
// 0061cea7  83c554               add ebp, 0x54
// 0061ceaa  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 0061cead  89742410             mov dword ptr [esp + 0x10], esi
// 0061ceb1  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061ceb5  0f8c75ffffff         jl 0x61ce30
// 0061cebb  5f                   pop edi
// 0061cebc  5e                   pop esi
// 0061cebd  5d                   pop ebp
// 0061cebe  5b                   pop ebx
// 0061cebf  83c410               add esp, 0x10
// 0061cec2  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
