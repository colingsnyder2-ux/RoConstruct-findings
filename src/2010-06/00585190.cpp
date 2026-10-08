// from server: 100% by auto
// roc 2010-06 00585190  unit: seg_00580000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585190
//
// 00585190  83ec2c               sub esp, 0x2c
// 00585193  53                   push ebx
// 00585194  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00585198  55                   push ebp
// 00585199  56                   push esi
// 0058519a  57                   push edi
// 0058519b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 005851a1  33f6                 xor esi, esi
// 005851a3  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 005851a9  897c2420             mov dword ptr [esp + 0x20], edi
// 005851ad  7e4a                 jle 0x5851f9
// 005851af  8d83e8000000         lea eax, [ebx + 0xe8]
// 005851b5  89442410             mov dword ptr [esp + 0x10], eax
// 005851b9  8da42400000000       lea esp, [esp]
// 005851c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005851c4  8b01                 mov eax, dword ptr [ecx]
// 005851c6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005851c9  8b6f08               mov ebp, dword ptr [edi + 8]
// 005851cc  8b4004               mov eax, dword ptr [eax + 4]
// 005851cf  0fafe9               imul ebp, ecx
// 005851d2  8b5304               mov edx, dword ptr [ebx + 4]
// 005851d5  8b5220               mov edx, dword ptr [edx + 0x20]
// 005851d8  6a00                 push 0
// 005851da  51                   push ecx
// 005851db  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 005851df  55                   push ebp
// 005851e0  51                   push ecx
// 005851e1  53                   push ebx
// 005851e2  ffd2                 call edx
// 005851e4  8344242404           add dword ptr [esp + 0x24], 4
// 005851e9  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 005851ed  46                   inc esi
// 005851ee  83c414               add esp, 0x14
// 005851f1  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 005851f7  7cc7                 jl 0x5851c0
// 005851f9  8b7710               mov esi, dword ptr [edi + 0x10]
// 005851fc  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005851ff  89742424             mov dword ptr [esp + 0x24], esi
// 00585203  0f8d04010000         jge 0x58530d
// 00585209  8da42400000000       lea esp, [esp]
// 00585210  8b470c               mov eax, dword ptr [edi + 0xc]
// 00585213  89442410             mov dword ptr [esp + 0x10], eax
// 00585217  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 0058521d  0f83d5000000         jae 0x5852f8
// 00585223  33d2                 xor edx, edx
// 00585225  33ed                 xor ebp, ebp
// 00585227  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 0058522d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00585231  0f8e95000000         jle 0x5852cc
// 00585237  8d83e8000000         lea eax, [ebx + 0xe8]
// 0058523d  89442414             mov dword ptr [esp + 0x14], eax
// 00585241  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00585245  8b39                 mov edi, dword ptr [ecx]
// 00585247  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0058524a  8bc1                 mov eax, ecx
// 0058524c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00585251  837f3800             cmp dword ptr [edi + 0x38], 0
// 00585255  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058525d  7e53                 jle 0x5852b2
// 0058525f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00585263  c1e007               shl eax, 7
// 00585266  89442428             mov dword ptr [esp + 0x28], eax
// 0058526a  8d1cb2               lea ebx, [edx + esi*4]
// 0058526d  8d4900               lea ecx, [ecx]
// 00585270  8b03                 mov eax, dword ptr [ebx]
// 00585272  03442428             add eax, dword ptr [esp + 0x28]
// 00585276  33d2                 xor edx, edx
// 00585278  85c9                 test ecx, ecx
// 0058527a  7e19                 jle 0x585295
// 0058527c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585280  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 00585284  8906                 mov dword ptr [esi], eax
// 00585286  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00585289  42                   inc edx
// 0058528a  45                   inc ebp
// 0058528b  83c604               add esi, 4
// 0058528e  83e880               sub eax, -0x80
// 00585291  3bd1                 cmp edx, ecx
// 00585293  7cef                 jl 0x585284
// 00585295  8b442418             mov eax, dword ptr [esp + 0x18]
// 00585299  40                   inc eax
// 0058529a  83c304               add ebx, 4
// 0058529d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 005852a0  89442418             mov dword ptr [esp + 0x18], eax
// 005852a4  7cca                 jl 0x585270
// 005852a6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005852aa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005852ae  8b742424             mov esi, dword ptr [esp + 0x24]
// 005852b2  8344241404           add dword ptr [esp + 0x14], 4
// 005852b7  42                   inc edx
// 005852b8  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 005852be  8954241c             mov dword ptr [esp + 0x1c], edx
// 005852c2  0f8c79ffffff         jl 0x585241
// 005852c8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005852cc  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 005852d2  8d4718               lea eax, [edi + 0x18]
// 005852d5  50                   push eax
// 005852d6  8b4204               mov eax, dword ptr [edx + 4]
// 005852d9  53                   push ebx
// 005852da  ffd0                 call eax
// 005852dc  83c408               add esp, 8
// 005852df  84c0                 test al, al
// 005852e1  7455                 je 0x585338
// 005852e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005852e7  40                   inc eax
// 005852e8  89442410             mov dword ptr [esp + 0x10], eax
// 005852ec  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 005852f2  0f822bffffff         jb 0x585223
// 005852f8  46                   inc esi
// 005852f9  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00585300  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00585303  89742424             mov dword ptr [esp + 0x24], esi
// 00585307  0f8c03ffffff         jl 0x585210
// 0058530d  b901000000           mov ecx, 1
// 00585312  014f08               add dword ptr [edi + 8], ecx
// 00585315  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 0058531b  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 00585321  7e29                 jle 0x58534c
// 00585323  5f                   pop edi
// 00585324  894814               mov dword ptr [eax + 0x14], ecx
// 00585327  5e                   pop esi
// 00585328  33c9                 xor ecx, ecx
// 0058532a  5d                   pop ebp
// 0058532b  89480c               mov dword ptr [eax + 0xc], ecx
// 0058532e  894810               mov dword ptr [eax + 0x10], ecx
// 00585331  b001                 mov al, 1
// 00585333  5b                   pop ebx
// 00585334  83c42c               add esp, 0x2c
// 00585337  c3                   ret 
// 00585338  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058533c  897710               mov dword ptr [edi + 0x10], esi
// 0058533f  894f0c               mov dword ptr [edi + 0xc], ecx
// 00585342  5f                   pop edi
// 00585343  5e                   pop esi
// 00585344  5d                   pop ebp
// 00585345  32c0                 xor al, al
// 00585347  5b                   pop ebx
// 00585348  83c42c               add esp, 0x2c
// 0058534b  c3                   ret 
// 0058534c  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 00585352  2bd1                 sub edx, ecx
// 00585354  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 0058535a  395008               cmp dword ptr [eax + 8], edx
// 0058535d  7305                 jae 0x585364
// 0058535f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00585362  eb03                 jmp 0x585367
// 00585364  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00585367  5f                   pop edi
// 00585368  5e                   pop esi
// 00585369  33c9                 xor ecx, ecx
// 0058536b  5d                   pop ebp
// 0058536c  895014               mov dword ptr [eax + 0x14], edx
// 0058536f  89480c               mov dword ptr [eax + 0xc], ecx
// 00585372  894810               mov dword ptr [eax + 0x10], ecx
// 00585375  b001                 mov al, 1
// 00585377  5b                   pop ebx
// 00585378  83c42c               add esp, 0x2c
// 0058537b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
