// roc 2009-12 0061d590  unit: seg_00610000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d590
//
// 0061d590  83ec2c               sub esp, 0x2c
// 0061d593  53                   push ebx
// 0061d594  55                   push ebp
// 0061d595  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061d599  56                   push esi
// 0061d59a  57                   push edi
// 0061d59b  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 0061d5a1  33f6                 xor esi, esi
// 0061d5a3  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0061d5a9  897c2420             mov dword ptr [esp + 0x20], edi
// 0061d5ad  7e4d                 jle 0x61d5fc
// 0061d5af  8d8528010000         lea eax, [ebp + 0x128]
// 0061d5b5  89442410             mov dword ptr [esp + 0x10], eax
// 0061d5b9  8da42400000000       lea esp, [esp]
// 0061d5c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061d5c4  8b01                 mov eax, dword ptr [ecx]
// 0061d5c6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061d5c9  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 0061d5cf  8b4004               mov eax, dword ptr [eax + 4]
// 0061d5d2  0fafd9               imul ebx, ecx
// 0061d5d5  8b5504               mov edx, dword ptr [ebp + 4]
// 0061d5d8  8b5220               mov edx, dword ptr [edx + 0x20]
// 0061d5db  6a01                 push 1
// 0061d5dd  51                   push ecx
// 0061d5de  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 0061d5e2  53                   push ebx
// 0061d5e3  51                   push ecx
// 0061d5e4  55                   push ebp
// 0061d5e5  ffd2                 call edx
// 0061d5e7  8344242404           add dword ptr [esp + 0x24], 4
// 0061d5ec  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0061d5f0  46                   inc esi
// 0061d5f1  83c414               add esp, 0x14
// 0061d5f4  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0061d5fa  7cc4                 jl 0x61d5c0
// 0061d5fc  8b7718               mov esi, dword ptr [edi + 0x18]
// 0061d5ff  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0061d602  89742424             mov dword ptr [esp + 0x24], esi
// 0061d606  0f8d02010000         jge 0x61d70e
// 0061d60c  8d642400             lea esp, [esp]
// 0061d610  8b4714               mov eax, dword ptr [edi + 0x14]
// 0061d613  89442410             mov dword ptr [esp + 0x10], eax
// 0061d617  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0061d61d  0f83d6000000         jae 0x61d6f9
// 0061d623  33d2                 xor edx, edx
// 0061d625  33db                 xor ebx, ebx
// 0061d627  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0061d62d  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061d631  0f8e96000000         jle 0x61d6cd
// 0061d637  8d8528010000         lea eax, [ebp + 0x128]
// 0061d63d  89442414             mov dword ptr [esp + 0x14], eax
// 0061d641  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061d645  8b39                 mov edi, dword ptr [ecx]
// 0061d647  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0061d64a  8bc1                 mov eax, ecx
// 0061d64c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0061d651  837f3800             cmp dword ptr [edi + 0x38], 0
// 0061d655  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061d65d  7e54                 jle 0x61d6b3
// 0061d65f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 0061d663  c1e007               shl eax, 7
// 0061d666  89442428             mov dword ptr [esp + 0x28], eax
// 0061d66a  8d2cb2               lea ebp, [edx + esi*4]
// 0061d66d  8d4900               lea ecx, [ecx]
// 0061d670  8b4500               mov eax, dword ptr [ebp]
// 0061d673  03442428             add eax, dword ptr [esp + 0x28]
// 0061d677  33d2                 xor edx, edx
// 0061d679  85c9                 test ecx, ecx
// 0061d67b  7e19                 jle 0x61d696
// 0061d67d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061d681  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 0061d685  8906                 mov dword ptr [esi], eax
// 0061d687  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0061d68a  42                   inc edx
// 0061d68b  43                   inc ebx
// 0061d68c  83c604               add esi, 4
// 0061d68f  83e880               sub eax, -0x80
// 0061d692  3bd1                 cmp edx, ecx
// 0061d694  7cef                 jl 0x61d685
// 0061d696  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061d69a  40                   inc eax
// 0061d69b  83c504               add ebp, 4
// 0061d69e  3b4738               cmp eax, dword ptr [edi + 0x38]
// 0061d6a1  89442418             mov dword ptr [esp + 0x18], eax
// 0061d6a5  7cc9                 jl 0x61d670
// 0061d6a7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0061d6ab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061d6af  8b742424             mov esi, dword ptr [esp + 0x24]
// 0061d6b3  8344241404           add dword ptr [esp + 0x14], 4
// 0061d6b8  42                   inc edx
// 0061d6b9  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 0061d6bf  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061d6c3  0f8c78ffffff         jl 0x61d641
// 0061d6c9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061d6cd  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0061d6d3  8d4720               lea eax, [edi + 0x20]
// 0061d6d6  50                   push eax
// 0061d6d7  8b4204               mov eax, dword ptr [edx + 4]
// 0061d6da  55                   push ebp
// 0061d6db  ffd0                 call eax
// 0061d6dd  83c408               add esp, 8
// 0061d6e0  84c0                 test al, al
// 0061d6e2  7469                 je 0x61d74d
// 0061d6e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061d6e8  40                   inc eax
// 0061d6e9  89442410             mov dword ptr [esp + 0x10], eax
// 0061d6ed  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0061d6f3  0f822affffff         jb 0x61d623
// 0061d6f9  46                   inc esi
// 0061d6fa  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0061d701  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0061d704  89742424             mov dword ptr [esp + 0x24], esi
// 0061d708  0f8c02ffffff         jl 0x61d610
// 0061d70e  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0061d714  be01000000           mov esi, 1
// 0061d719  01b580000000         add dword ptr [ebp + 0x80], esi
// 0061d71f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0061d725  3bca                 cmp ecx, edx
// 0061d727  7361                 jae 0x61d78a
// 0061d729  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0061d72f  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0061d735  7e2a                 jle 0x61d761
// 0061d737  33c9                 xor ecx, ecx
// 0061d739  5f                   pop edi
// 0061d73a  89701c               mov dword ptr [eax + 0x1c], esi
// 0061d73d  894814               mov dword ptr [eax + 0x14], ecx
// 0061d740  894818               mov dword ptr [eax + 0x18], ecx
// 0061d743  8d4602               lea eax, [esi + 2]
// 0061d746  5e                   pop esi
// 0061d747  5d                   pop ebp
// 0061d748  5b                   pop ebx
// 0061d749  83c42c               add esp, 0x2c
// 0061d74c  c3                   ret 
// 0061d74d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061d751  897718               mov dword ptr [edi + 0x18], esi
// 0061d754  894f14               mov dword ptr [edi + 0x14], ecx
// 0061d757  5f                   pop edi
// 0061d758  5e                   pop esi
// 0061d759  5d                   pop ebp
// 0061d75a  33c0                 xor eax, eax
// 0061d75c  5b                   pop ebx
// 0061d75d  83c42c               add esp, 0x2c
// 0061d760  c3                   ret 
// 0061d761  4a                   dec edx
// 0061d762  3bca                 cmp ecx, edx
// 0061d764  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0061d76a  7305                 jae 0x61d771
// 0061d76c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0061d76f  eb03                 jmp 0x61d774
// 0061d771  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0061d774  5f                   pop edi
// 0061d775  89481c               mov dword ptr [eax + 0x1c], ecx
// 0061d778  33c9                 xor ecx, ecx
// 0061d77a  5e                   pop esi
// 0061d77b  5d                   pop ebp
// 0061d77c  894814               mov dword ptr [eax + 0x14], ecx
// 0061d77f  894818               mov dword ptr [eax + 0x18], ecx
// 0061d782  8d4103               lea eax, [ecx + 3]
// 0061d785  5b                   pop ebx
// 0061d786  83c42c               add esp, 0x2c
// 0061d789  c3                   ret 
// 0061d78a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0061d790  8b420c               mov eax, dword ptr [edx + 0xc]
// 0061d793  55                   push ebp
// 0061d794  ffd0                 call eax
// 0061d796  83c404               add esp, 4
// 0061d799  5f                   pop edi
// 0061d79a  5e                   pop esi
// 0061d79b  5d                   pop ebp
// 0061d79c  b804000000           mov eax, 4
// 0061d7a1  5b                   pop ebx
// 0061d7a2  83c42c               add esp, 0x2c
// 0061d7a5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
