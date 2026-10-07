// roc 2009-06 0059b560  unit: seg_00590000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b560
//
// 0059b560  83ec2c               sub esp, 0x2c
// 0059b563  53                   push ebx
// 0059b564  55                   push ebp
// 0059b565  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0059b569  56                   push esi
// 0059b56a  57                   push edi
// 0059b56b  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 0059b571  33f6                 xor esi, esi
// 0059b573  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0059b579  897c2420             mov dword ptr [esp + 0x20], edi
// 0059b57d  7e4d                 jle 0x59b5cc
// 0059b57f  8d8528010000         lea eax, [ebp + 0x128]
// 0059b585  89442410             mov dword ptr [esp + 0x10], eax
// 0059b589  8da42400000000       lea esp, [esp]
// 0059b590  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b594  8b01                 mov eax, dword ptr [ecx]
// 0059b596  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059b599  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 0059b59f  8b4004               mov eax, dword ptr [eax + 4]
// 0059b5a2  0fafd9               imul ebx, ecx
// 0059b5a5  8b5504               mov edx, dword ptr [ebp + 4]
// 0059b5a8  8b5220               mov edx, dword ptr [edx + 0x20]
// 0059b5ab  6a01                 push 1
// 0059b5ad  51                   push ecx
// 0059b5ae  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 0059b5b2  53                   push ebx
// 0059b5b3  51                   push ecx
// 0059b5b4  55                   push ebp
// 0059b5b5  ffd2                 call edx
// 0059b5b7  8344242404           add dword ptr [esp + 0x24], 4
// 0059b5bc  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0059b5c0  46                   inc esi
// 0059b5c1  83c414               add esp, 0x14
// 0059b5c4  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0059b5ca  7cc4                 jl 0x59b590
// 0059b5cc  8b7718               mov esi, dword ptr [edi + 0x18]
// 0059b5cf  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0059b5d2  89742424             mov dword ptr [esp + 0x24], esi
// 0059b5d6  0f8d02010000         jge 0x59b6de
// 0059b5dc  8d642400             lea esp, [esp]
// 0059b5e0  8b4714               mov eax, dword ptr [edi + 0x14]
// 0059b5e3  89442410             mov dword ptr [esp + 0x10], eax
// 0059b5e7  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0059b5ed  0f83d6000000         jae 0x59b6c9
// 0059b5f3  33d2                 xor edx, edx
// 0059b5f5  33db                 xor ebx, ebx
// 0059b5f7  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0059b5fd  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059b601  0f8e96000000         jle 0x59b69d
// 0059b607  8d8528010000         lea eax, [ebp + 0x128]
// 0059b60d  89442414             mov dword ptr [esp + 0x14], eax
// 0059b611  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059b615  8b39                 mov edi, dword ptr [ecx]
// 0059b617  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0059b61a  8bc1                 mov eax, ecx
// 0059b61c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0059b621  837f3800             cmp dword ptr [edi + 0x38], 0
// 0059b625  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059b62d  7e54                 jle 0x59b683
// 0059b62f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 0059b633  c1e007               shl eax, 7
// 0059b636  89442428             mov dword ptr [esp + 0x28], eax
// 0059b63a  8d2cb2               lea ebp, [edx + esi*4]
// 0059b63d  8d4900               lea ecx, [ecx]
// 0059b640  8b4500               mov eax, dword ptr [ebp]
// 0059b643  03442428             add eax, dword ptr [esp + 0x28]
// 0059b647  33d2                 xor edx, edx
// 0059b649  85c9                 test ecx, ecx
// 0059b64b  7e19                 jle 0x59b666
// 0059b64d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059b651  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 0059b655  8906                 mov dword ptr [esi], eax
// 0059b657  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0059b65a  42                   inc edx
// 0059b65b  43                   inc ebx
// 0059b65c  83c604               add esi, 4
// 0059b65f  83e880               sub eax, -0x80
// 0059b662  3bd1                 cmp edx, ecx
// 0059b664  7cef                 jl 0x59b655
// 0059b666  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059b66a  40                   inc eax
// 0059b66b  83c504               add ebp, 4
// 0059b66e  3b4738               cmp eax, dword ptr [edi + 0x38]
// 0059b671  89442418             mov dword ptr [esp + 0x18], eax
// 0059b675  7cc9                 jl 0x59b640
// 0059b677  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0059b67b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059b67f  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059b683  8344241404           add dword ptr [esp + 0x14], 4
// 0059b688  42                   inc edx
// 0059b689  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 0059b68f  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059b693  0f8c78ffffff         jl 0x59b611
// 0059b699  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059b69d  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0059b6a3  8d4720               lea eax, [edi + 0x20]
// 0059b6a6  50                   push eax
// 0059b6a7  8b4204               mov eax, dword ptr [edx + 4]
// 0059b6aa  55                   push ebp
// 0059b6ab  ffd0                 call eax
// 0059b6ad  83c408               add esp, 8
// 0059b6b0  84c0                 test al, al
// 0059b6b2  7469                 je 0x59b71d
// 0059b6b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059b6b8  40                   inc eax
// 0059b6b9  89442410             mov dword ptr [esp + 0x10], eax
// 0059b6bd  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0059b6c3  0f822affffff         jb 0x59b5f3
// 0059b6c9  46                   inc esi
// 0059b6ca  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0059b6d1  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0059b6d4  89742424             mov dword ptr [esp + 0x24], esi
// 0059b6d8  0f8c02ffffff         jl 0x59b5e0
// 0059b6de  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0059b6e4  be01000000           mov esi, 1
// 0059b6e9  01b580000000         add dword ptr [ebp + 0x80], esi
// 0059b6ef  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0059b6f5  3bca                 cmp ecx, edx
// 0059b6f7  7361                 jae 0x59b75a
// 0059b6f9  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0059b6ff  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0059b705  7e2a                 jle 0x59b731
// 0059b707  33c9                 xor ecx, ecx
// 0059b709  5f                   pop edi
// 0059b70a  89701c               mov dword ptr [eax + 0x1c], esi
// 0059b70d  894814               mov dword ptr [eax + 0x14], ecx
// 0059b710  894818               mov dword ptr [eax + 0x18], ecx
// 0059b713  8d4602               lea eax, [esi + 2]
// 0059b716  5e                   pop esi
// 0059b717  5d                   pop ebp
// 0059b718  5b                   pop ebx
// 0059b719  83c42c               add esp, 0x2c
// 0059b71c  c3                   ret 
// 0059b71d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b721  897718               mov dword ptr [edi + 0x18], esi
// 0059b724  894f14               mov dword ptr [edi + 0x14], ecx
// 0059b727  5f                   pop edi
// 0059b728  5e                   pop esi
// 0059b729  5d                   pop ebp
// 0059b72a  33c0                 xor eax, eax
// 0059b72c  5b                   pop ebx
// 0059b72d  83c42c               add esp, 0x2c
// 0059b730  c3                   ret 
// 0059b731  4a                   dec edx
// 0059b732  3bca                 cmp ecx, edx
// 0059b734  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0059b73a  7305                 jae 0x59b741
// 0059b73c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0059b73f  eb03                 jmp 0x59b744
// 0059b741  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0059b744  5f                   pop edi
// 0059b745  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059b748  33c9                 xor ecx, ecx
// 0059b74a  5e                   pop esi
// 0059b74b  5d                   pop ebp
// 0059b74c  894814               mov dword ptr [eax + 0x14], ecx
// 0059b74f  894818               mov dword ptr [eax + 0x18], ecx
// 0059b752  8d4103               lea eax, [ecx + 3]
// 0059b755  5b                   pop ebx
// 0059b756  83c42c               add esp, 0x2c
// 0059b759  c3                   ret 
// 0059b75a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0059b760  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059b763  55                   push ebp
// 0059b764  ffd0                 call eax
// 0059b766  83c404               add esp, 4
// 0059b769  5f                   pop edi
// 0059b76a  5e                   pop esi
// 0059b76b  5d                   pop ebp
// 0059b76c  b804000000           mov eax, 4
// 0059b771  5b                   pop ebx
// 0059b772  83c42c               add esp, 0x2c
// 0059b775  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
