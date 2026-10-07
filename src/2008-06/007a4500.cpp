// roc 2008-06 007a4500  unit: CXTIconHandle  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a4500
//
// 007a4500  83ec0c               sub esp, 0xc
// 007a4503  53                   push ebx
// 007a4504  55                   push ebp
// 007a4505  56                   push esi
// 007a4506  57                   push edi
// 007a4507  0fb77802             movzx edi, word ptr [eax + 2]
// 007a450b  33d2                 xor edx, edx
// 007a450d  8bd9                 mov ebx, ecx
// 007a450f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007a4517  8d4a07               lea ecx, [edx + 7]
// 007a451a  8d7204               lea esi, [edx + 4]
// 007a451d  85ff                 test edi, edi
// 007a451f  7508                 jne 0x7a4529
// 007a4521  b98a000000           mov ecx, 0x8a
// 007a4526  8d7203               lea esi, [edx + 3]
// 007a4529  bdffff0000           mov ebp, 0xffff
// 007a452e  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 007a4533  85db                 test ebx, ebx
// 007a4535  0f8c9b000000         jl 0x7a45d6
// 007a453b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007a453f  83c006               add eax, 6
// 007a4542  43                   inc ebx
// 007a4543  895c2414             mov dword ptr [esp + 0x14], ebx
// 007a4547  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007a454b  89442410             mov dword ptr [esp + 0x10], eax
// 007a454f  90                   nop 
// 007a4550  8bc7                 mov eax, edi
// 007a4552  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a4556  0fb73f               movzx edi, word ptr [edi]
// 007a4559  42                   inc edx
// 007a455a  3bd1                 cmp edx, ecx
// 007a455c  7d04                 jge 0x7a4562
// 007a455e  3bc7                 cmp eax, edi
// 007a4560  7464                 je 0x7a45c6
// 007a4562  3bd6                 cmp edx, esi
// 007a4564  7d0a                 jge 0x7a4570
// 007a4566  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 007a456e  eb2e                 jmp 0x7a459e
// 007a4570  85c0                 test eax, eax
// 007a4572  7415                 je 0x7a4589
// 007a4574  3bc5                 cmp eax, ebp
// 007a4576  7408                 je 0x7a4580
// 007a4578  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 007a4580  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 007a4587  eb15                 jmp 0x7a459e
// 007a4589  83fa0a               cmp edx, 0xa
// 007a458c  7f09                 jg 0x7a4597
// 007a458e  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 007a4595  eb07                 jmp 0x7a459e
// 007a4597  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 007a459e  33d2                 xor edx, edx
// 007a45a0  8be8                 mov ebp, eax
// 007a45a2  85ff                 test edi, edi
// 007a45a4  750a                 jne 0x7a45b0
// 007a45a6  b98a000000           mov ecx, 0x8a
// 007a45ab  8d7203               lea esi, [edx + 3]
// 007a45ae  eb16                 jmp 0x7a45c6
// 007a45b0  3bc7                 cmp eax, edi
// 007a45b2  750a                 jne 0x7a45be
// 007a45b4  b906000000           mov ecx, 6
// 007a45b9  8d71fd               lea esi, [ecx - 3]
// 007a45bc  eb08                 jmp 0x7a45c6
// 007a45be  b907000000           mov ecx, 7
// 007a45c3  8d71fd               lea esi, [ecx - 3]
// 007a45c6  8344241004           add dword ptr [esp + 0x10], 4
// 007a45cb  836c241401           sub dword ptr [esp + 0x14], 1
// 007a45d0  0f857affffff         jne 0x7a4550
// 007a45d6  5f                   pop edi
// 007a45d7  5e                   pop esi
// 007a45d8  5d                   pop ebp
// 007a45d9  5b                   pop ebx
// 007a45da  83c40c               add esp, 0xc
// 007a45dd  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
