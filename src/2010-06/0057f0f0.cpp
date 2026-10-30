// from server: 100% by auto
// roc 2010-06 0057f0f0  unit: seg_00570000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057f0f0
//
// 0057f0f0  83ec2c               sub esp, 0x2c
// 0057f0f3  53                   push ebx
// 0057f0f4  55                   push ebp
// 0057f0f5  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0057f0f9  56                   push esi
// 0057f0fa  57                   push edi
// 0057f0fb  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 0057f101  33f6                 xor esi, esi
// 0057f103  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0057f109  897c2420             mov dword ptr [esp + 0x20], edi
// 0057f10d  7e4d                 jle 0x57f15c
// 0057f10f  8d8528010000         lea eax, [ebp + 0x128]
// 0057f115  89442410             mov dword ptr [esp + 0x10], eax
// 0057f119  8da42400000000       lea esp, [esp]
// 0057f120  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f124  8b01                 mov eax, dword ptr [ecx]
// 0057f126  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0057f129  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 0057f12f  8b4004               mov eax, dword ptr [eax + 4]
// 0057f132  0fafd9               imul ebx, ecx
// 0057f135  8b5504               mov edx, dword ptr [ebp + 4]
// 0057f138  8b5220               mov edx, dword ptr [edx + 0x20]
// 0057f13b  6a01                 push 1
// 0057f13d  51                   push ecx
// 0057f13e  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 0057f142  53                   push ebx
// 0057f143  51                   push ecx
// 0057f144  55                   push ebp
// 0057f145  ffd2                 call edx
// 0057f147  8344242404           add dword ptr [esp + 0x24], 4
// 0057f14c  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0057f150  46                   inc esi
// 0057f151  83c414               add esp, 0x14
// 0057f154  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0057f15a  7cc4                 jl 0x57f120
// 0057f15c  8b7718               mov esi, dword ptr [edi + 0x18]
// 0057f15f  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0057f162  89742424             mov dword ptr [esp + 0x24], esi
// 0057f166  0f8d02010000         jge 0x57f26e
// 0057f16c  8d642400             lea esp, [esp]
// 0057f170  8b4714               mov eax, dword ptr [edi + 0x14]
// 0057f173  89442410             mov dword ptr [esp + 0x10], eax
// 0057f177  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0057f17d  0f83d6000000         jae 0x57f259
// 0057f183  33d2                 xor edx, edx
// 0057f185  33db                 xor ebx, ebx
// 0057f187  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0057f18d  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057f191  0f8e96000000         jle 0x57f22d
// 0057f197  8d8528010000         lea eax, [ebp + 0x128]
// 0057f19d  89442414             mov dword ptr [esp + 0x14], eax
// 0057f1a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057f1a5  8b39                 mov edi, dword ptr [ecx]
// 0057f1a7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057f1aa  8bc1                 mov eax, ecx
// 0057f1ac  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0057f1b1  837f3800             cmp dword ptr [edi + 0x38], 0
// 0057f1b5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057f1bd  7e54                 jle 0x57f213
// 0057f1bf  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 0057f1c3  c1e007               shl eax, 7
// 0057f1c6  89442428             mov dword ptr [esp + 0x28], eax
// 0057f1ca  8d2cb2               lea ebp, [edx + esi*4]
// 0057f1cd  8d4900               lea ecx, [ecx]
// 0057f1d0  8b4500               mov eax, dword ptr [ebp]
// 0057f1d3  03442428             add eax, dword ptr [esp + 0x28]
// 0057f1d7  33d2                 xor edx, edx
// 0057f1d9  85c9                 test ecx, ecx
// 0057f1db  7e19                 jle 0x57f1f6
// 0057f1dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057f1e1  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 0057f1e5  8906                 mov dword ptr [esi], eax
// 0057f1e7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057f1ea  42                   inc edx
// 0057f1eb  43                   inc ebx
// 0057f1ec  83c604               add esi, 4
// 0057f1ef  83e880               sub eax, -0x80
// 0057f1f2  3bd1                 cmp edx, ecx
// 0057f1f4  7cef                 jl 0x57f1e5
// 0057f1f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057f1fa  40                   inc eax
// 0057f1fb  83c504               add ebp, 4
// 0057f1fe  3b4738               cmp eax, dword ptr [edi + 0x38]
// 0057f201  89442418             mov dword ptr [esp + 0x18], eax
// 0057f205  7cc9                 jl 0x57f1d0
// 0057f207  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0057f20b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057f20f  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057f213  8344241404           add dword ptr [esp + 0x14], 4
// 0057f218  42                   inc edx
// 0057f219  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 0057f21f  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057f223  0f8c78ffffff         jl 0x57f1a1
// 0057f229  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057f22d  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0057f233  8d4720               lea eax, [edi + 0x20]
// 0057f236  50                   push eax
// 0057f237  8b4204               mov eax, dword ptr [edx + 4]
// 0057f23a  55                   push ebp
// 0057f23b  ffd0                 call eax
// 0057f23d  83c408               add esp, 8
// 0057f240  84c0                 test al, al
// 0057f242  7469                 je 0x57f2ad
// 0057f244  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057f248  40                   inc eax
// 0057f249  89442410             mov dword ptr [esp + 0x10], eax
// 0057f24d  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0057f253  0f822affffff         jb 0x57f183
// 0057f259  46                   inc esi
// 0057f25a  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0057f261  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 0057f264  89742424             mov dword ptr [esp + 0x24], esi
// 0057f268  0f8c02ffffff         jl 0x57f170
// 0057f26e  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0057f274  be01000000           mov esi, 1
// 0057f279  01b580000000         add dword ptr [ebp + 0x80], esi
// 0057f27f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0057f285  3bca                 cmp ecx, edx
// 0057f287  7361                 jae 0x57f2ea
// 0057f289  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0057f28f  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0057f295  7e2a                 jle 0x57f2c1
// 0057f297  33c9                 xor ecx, ecx
// 0057f299  5f                   pop edi
// 0057f29a  89701c               mov dword ptr [eax + 0x1c], esi
// 0057f29d  894814               mov dword ptr [eax + 0x14], ecx
// 0057f2a0  894818               mov dword ptr [eax + 0x18], ecx
// 0057f2a3  8d4602               lea eax, [esi + 2]
// 0057f2a6  5e                   pop esi
// 0057f2a7  5d                   pop ebp
// 0057f2a8  5b                   pop ebx
// 0057f2a9  83c42c               add esp, 0x2c
// 0057f2ac  c3                   ret 
// 0057f2ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f2b1  897718               mov dword ptr [edi + 0x18], esi
// 0057f2b4  894f14               mov dword ptr [edi + 0x14], ecx
// 0057f2b7  5f                   pop edi
// 0057f2b8  5e                   pop esi
// 0057f2b9  5d                   pop ebp
// 0057f2ba  33c0                 xor eax, eax
// 0057f2bc  5b                   pop ebx
// 0057f2bd  83c42c               add esp, 0x2c
// 0057f2c0  c3                   ret 
// 0057f2c1  4a                   dec edx
// 0057f2c2  3bca                 cmp ecx, edx
// 0057f2c4  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0057f2ca  7305                 jae 0x57f2d1
// 0057f2cc  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0057f2cf  eb03                 jmp 0x57f2d4
// 0057f2d1  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0057f2d4  5f                   pop edi
// 0057f2d5  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057f2d8  33c9                 xor ecx, ecx
// 0057f2da  5e                   pop esi
// 0057f2db  5d                   pop ebp
// 0057f2dc  894814               mov dword ptr [eax + 0x14], ecx
// 0057f2df  894818               mov dword ptr [eax + 0x18], ecx
// 0057f2e2  8d4103               lea eax, [ecx + 3]
// 0057f2e5  5b                   pop ebx
// 0057f2e6  83c42c               add esp, 0x2c
// 0057f2e9  c3                   ret 
// 0057f2ea  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0057f2f0  8b420c               mov eax, dword ptr [edx + 0xc]
// 0057f2f3  55                   push ebp
// 0057f2f4  ffd0                 call eax
// 0057f2f6  83c404               add esp, 4
// 0057f2f9  5f                   pop edi
// 0057f2fa  5e                   pop esi
// 0057f2fb  5d                   pop ebp
// 0057f2fc  b804000000           mov eax, 4
// 0057f301  5b                   pop ebx
// 0057f302  83c42c               add esp, 0x2c
// 0057f305  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
