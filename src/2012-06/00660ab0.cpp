// roc 2012-06 00660ab0  unit: seg_00660000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660ab0
//
// 00660ab0  83ec2c               sub esp, 0x2c
// 00660ab3  53                   push ebx
// 00660ab4  55                   push ebp
// 00660ab5  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00660ab9  56                   push esi
// 00660aba  57                   push edi
// 00660abb  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 00660ac1  33f6                 xor esi, esi
// 00660ac3  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 00660ac9  897c2420             mov dword ptr [esp + 0x20], edi
// 00660acd  7e4d                 jle 0x660b1c
// 00660acf  8d8528010000         lea eax, [ebp + 0x128]
// 00660ad5  89442410             mov dword ptr [esp + 0x10], eax
// 00660ad9  8da42400000000       lea esp, [esp]
// 00660ae0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00660ae4  8b01                 mov eax, dword ptr [ecx]
// 00660ae6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00660ae9  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 00660aef  8b4004               mov eax, dword ptr [eax + 4]
// 00660af2  0fafd9               imul ebx, ecx
// 00660af5  8b5504               mov edx, dword ptr [ebp + 4]
// 00660af8  8b5220               mov edx, dword ptr [edx + 0x20]
// 00660afb  6a01                 push 1
// 00660afd  51                   push ecx
// 00660afe  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 00660b02  53                   push ebx
// 00660b03  51                   push ecx
// 00660b04  55                   push ebp
// 00660b05  ffd2                 call edx
// 00660b07  8344242404           add dword ptr [esp + 0x24], 4
// 00660b0c  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 00660b10  46                   inc esi
// 00660b11  83c414               add esp, 0x14
// 00660b14  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 00660b1a  7cc4                 jl 0x660ae0
// 00660b1c  8b7718               mov esi, dword ptr [edi + 0x18]
// 00660b1f  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00660b22  89742424             mov dword ptr [esp + 0x24], esi
// 00660b26  0f8d02010000         jge 0x660c2e
// 00660b2c  8d642400             lea esp, [esp]
// 00660b30  8b4714               mov eax, dword ptr [edi + 0x14]
// 00660b33  89442410             mov dword ptr [esp + 0x10], eax
// 00660b37  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 00660b3d  0f83d6000000         jae 0x660c19
// 00660b43  33d2                 xor edx, edx
// 00660b45  33db                 xor ebx, ebx
// 00660b47  399524010000         cmp dword ptr [ebp + 0x124], edx
// 00660b4d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00660b51  0f8e96000000         jle 0x660bed
// 00660b57  8d8528010000         lea eax, [ebp + 0x128]
// 00660b5d  89442414             mov dword ptr [esp + 0x14], eax
// 00660b61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00660b65  8b39                 mov edi, dword ptr [ecx]
// 00660b67  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00660b6a  8bc1                 mov eax, ecx
// 00660b6c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00660b71  837f3800             cmp dword ptr [edi + 0x38], 0
// 00660b75  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00660b7d  7e54                 jle 0x660bd3
// 00660b7f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00660b83  c1e007               shl eax, 7
// 00660b86  89442428             mov dword ptr [esp + 0x28], eax
// 00660b8a  8d2cb2               lea ebp, [edx + esi*4]
// 00660b8d  8d4900               lea ecx, [ecx]
// 00660b90  8b4500               mov eax, dword ptr [ebp]
// 00660b93  03442428             add eax, dword ptr [esp + 0x28]
// 00660b97  33d2                 xor edx, edx
// 00660b99  85c9                 test ecx, ecx
// 00660b9b  7e19                 jle 0x660bb6
// 00660b9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00660ba1  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 00660ba5  8906                 mov dword ptr [esi], eax
// 00660ba7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00660baa  42                   inc edx
// 00660bab  43                   inc ebx
// 00660bac  83c604               add esi, 4
// 00660baf  83e880               sub eax, -0x80
// 00660bb2  3bd1                 cmp edx, ecx
// 00660bb4  7cef                 jl 0x660ba5
// 00660bb6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00660bba  40                   inc eax
// 00660bbb  83c504               add ebp, 4
// 00660bbe  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00660bc1  89442418             mov dword ptr [esp + 0x18], eax
// 00660bc5  7cc9                 jl 0x660b90
// 00660bc7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00660bcb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00660bcf  8b742424             mov esi, dword ptr [esp + 0x24]
// 00660bd3  8344241404           add dword ptr [esp + 0x14], 4
// 00660bd8  42                   inc edx
// 00660bd9  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 00660bdf  8954241c             mov dword ptr [esp + 0x1c], edx
// 00660be3  0f8c78ffffff         jl 0x660b61
// 00660be9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00660bed  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 00660bf3  8d4720               lea eax, [edi + 0x20]
// 00660bf6  50                   push eax
// 00660bf7  8b4204               mov eax, dword ptr [edx + 4]
// 00660bfa  55                   push ebp
// 00660bfb  ffd0                 call eax
// 00660bfd  83c408               add esp, 8
// 00660c00  84c0                 test al, al
// 00660c02  7469                 je 0x660c6d
// 00660c04  8b442410             mov eax, dword ptr [esp + 0x10]
// 00660c08  40                   inc eax
// 00660c09  89442410             mov dword ptr [esp + 0x10], eax
// 00660c0d  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 00660c13  0f822affffff         jb 0x660b43
// 00660c19  46                   inc esi
// 00660c1a  c7471400000000       mov dword ptr [edi + 0x14], 0
// 00660c21  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00660c24  89742424             mov dword ptr [esp + 0x24], esi
// 00660c28  0f8c02ffffff         jl 0x660b30
// 00660c2e  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00660c34  be01000000           mov esi, 1
// 00660c39  01b580000000         add dword ptr [ebp + 0x80], esi
// 00660c3f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 00660c45  3bca                 cmp ecx, edx
// 00660c47  7361                 jae 0x660caa
// 00660c49  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 00660c4f  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00660c55  7e2a                 jle 0x660c81
// 00660c57  33c9                 xor ecx, ecx
// 00660c59  5f                   pop edi
// 00660c5a  89701c               mov dword ptr [eax + 0x1c], esi
// 00660c5d  894814               mov dword ptr [eax + 0x14], ecx
// 00660c60  894818               mov dword ptr [eax + 0x18], ecx
// 00660c63  8d4602               lea eax, [esi + 2]
// 00660c66  5e                   pop esi
// 00660c67  5d                   pop ebp
// 00660c68  5b                   pop ebx
// 00660c69  83c42c               add esp, 0x2c
// 00660c6c  c3                   ret 
// 00660c6d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00660c71  897718               mov dword ptr [edi + 0x18], esi
// 00660c74  894f14               mov dword ptr [edi + 0x14], ecx
// 00660c77  5f                   pop edi
// 00660c78  5e                   pop esi
// 00660c79  5d                   pop ebp
// 00660c7a  33c0                 xor eax, eax
// 00660c7c  5b                   pop ebx
// 00660c7d  83c42c               add esp, 0x2c
// 00660c80  c3                   ret 
// 00660c81  4a                   dec edx
// 00660c82  3bca                 cmp ecx, edx
// 00660c84  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 00660c8a  7305                 jae 0x660c91
// 00660c8c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00660c8f  eb03                 jmp 0x660c94
// 00660c91  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00660c94  5f                   pop edi
// 00660c95  89481c               mov dword ptr [eax + 0x1c], ecx
// 00660c98  33c9                 xor ecx, ecx
// 00660c9a  5e                   pop esi
// 00660c9b  5d                   pop ebp
// 00660c9c  894814               mov dword ptr [eax + 0x14], ecx
// 00660c9f  894818               mov dword ptr [eax + 0x18], ecx
// 00660ca2  8d4103               lea eax, [ecx + 3]
// 00660ca5  5b                   pop ebx
// 00660ca6  83c42c               add esp, 0x2c
// 00660ca9  c3                   ret 
// 00660caa  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00660cb0  8b420c               mov eax, dword ptr [edx + 0xc]
// 00660cb3  55                   push ebp
// 00660cb4  ffd0                 call eax
// 00660cb6  83c404               add esp, 4
// 00660cb9  5f                   pop edi
// 00660cba  5e                   pop esi
// 00660cbb  5d                   pop ebp
// 00660cbc  b804000000           mov eax, 4
// 00660cc1  5b                   pop ebx
// 00660cc2  83c42c               add esp, 0x2c
// 00660cc5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
