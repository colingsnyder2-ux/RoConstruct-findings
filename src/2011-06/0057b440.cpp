// roc 2011-06 0057b440  unit: seg_00570000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b440
//
// 0057b440  83ec2c               sub esp, 0x2c
// 0057b443  53                   push ebx
// 0057b444  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057b448  55                   push ebp
// 0057b449  56                   push esi
// 0057b44a  57                   push edi
// 0057b44b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 0057b451  33f6                 xor esi, esi
// 0057b453  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 0057b459  897c2420             mov dword ptr [esp + 0x20], edi
// 0057b45d  7e4a                 jle 0x57b4a9
// 0057b45f  8d83e8000000         lea eax, [ebx + 0xe8]
// 0057b465  89442410             mov dword ptr [esp + 0x10], eax
// 0057b469  8da42400000000       lea esp, [esp]
// 0057b470  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057b474  8b01                 mov eax, dword ptr [ecx]
// 0057b476  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0057b479  8b6f08               mov ebp, dword ptr [edi + 8]
// 0057b47c  8b4004               mov eax, dword ptr [eax + 4]
// 0057b47f  0fafe9               imul ebp, ecx
// 0057b482  8b5304               mov edx, dword ptr [ebx + 4]
// 0057b485  8b5220               mov edx, dword ptr [edx + 0x20]
// 0057b488  6a00                 push 0
// 0057b48a  51                   push ecx
// 0057b48b  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 0057b48f  55                   push ebp
// 0057b490  51                   push ecx
// 0057b491  53                   push ebx
// 0057b492  ffd2                 call edx
// 0057b494  8344242404           add dword ptr [esp + 0x24], 4
// 0057b499  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0057b49d  46                   inc esi
// 0057b49e  83c414               add esp, 0x14
// 0057b4a1  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 0057b4a7  7cc7                 jl 0x57b470
// 0057b4a9  8b7710               mov esi, dword ptr [edi + 0x10]
// 0057b4ac  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0057b4af  89742424             mov dword ptr [esp + 0x24], esi
// 0057b4b3  0f8d04010000         jge 0x57b5bd
// 0057b4b9  8da42400000000       lea esp, [esp]
// 0057b4c0  8b470c               mov eax, dword ptr [edi + 0xc]
// 0057b4c3  89442410             mov dword ptr [esp + 0x10], eax
// 0057b4c7  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 0057b4cd  0f83d5000000         jae 0x57b5a8
// 0057b4d3  33d2                 xor edx, edx
// 0057b4d5  33ed                 xor ebp, ebp
// 0057b4d7  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 0057b4dd  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057b4e1  0f8e95000000         jle 0x57b57c
// 0057b4e7  8d83e8000000         lea eax, [ebx + 0xe8]
// 0057b4ed  89442414             mov dword ptr [esp + 0x14], eax
// 0057b4f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057b4f5  8b39                 mov edi, dword ptr [ecx]
// 0057b4f7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057b4fa  8bc1                 mov eax, ecx
// 0057b4fc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0057b501  837f3800             cmp dword ptr [edi + 0x38], 0
// 0057b505  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057b50d  7e53                 jle 0x57b562
// 0057b50f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 0057b513  c1e007               shl eax, 7
// 0057b516  89442428             mov dword ptr [esp + 0x28], eax
// 0057b51a  8d1cb2               lea ebx, [edx + esi*4]
// 0057b51d  8d4900               lea ecx, [ecx]
// 0057b520  8b03                 mov eax, dword ptr [ebx]
// 0057b522  03442428             add eax, dword ptr [esp + 0x28]
// 0057b526  33d2                 xor edx, edx
// 0057b528  85c9                 test ecx, ecx
// 0057b52a  7e19                 jle 0x57b545
// 0057b52c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057b530  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 0057b534  8906                 mov dword ptr [esi], eax
// 0057b536  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057b539  42                   inc edx
// 0057b53a  45                   inc ebp
// 0057b53b  83c604               add esi, 4
// 0057b53e  83e880               sub eax, -0x80
// 0057b541  3bd1                 cmp edx, ecx
// 0057b543  7cef                 jl 0x57b534
// 0057b545  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b549  40                   inc eax
// 0057b54a  83c304               add ebx, 4
// 0057b54d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 0057b550  89442418             mov dword ptr [esp + 0x18], eax
// 0057b554  7cca                 jl 0x57b520
// 0057b556  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0057b55a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057b55e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057b562  8344241404           add dword ptr [esp + 0x14], 4
// 0057b567  42                   inc edx
// 0057b568  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 0057b56e  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057b572  0f8c79ffffff         jl 0x57b4f1
// 0057b578  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057b57c  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 0057b582  8d4718               lea eax, [edi + 0x18]
// 0057b585  50                   push eax
// 0057b586  8b4204               mov eax, dword ptr [edx + 4]
// 0057b589  53                   push ebx
// 0057b58a  ffd0                 call eax
// 0057b58c  83c408               add esp, 8
// 0057b58f  84c0                 test al, al
// 0057b591  7455                 je 0x57b5e8
// 0057b593  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b597  40                   inc eax
// 0057b598  89442410             mov dword ptr [esp + 0x10], eax
// 0057b59c  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 0057b5a2  0f822bffffff         jb 0x57b4d3
// 0057b5a8  46                   inc esi
// 0057b5a9  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 0057b5b0  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0057b5b3  89742424             mov dword ptr [esp + 0x24], esi
// 0057b5b7  0f8c03ffffff         jl 0x57b4c0
// 0057b5bd  b901000000           mov ecx, 1
// 0057b5c2  014f08               add dword ptr [edi + 8], ecx
// 0057b5c5  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 0057b5cb  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 0057b5d1  7e29                 jle 0x57b5fc
// 0057b5d3  5f                   pop edi
// 0057b5d4  894814               mov dword ptr [eax + 0x14], ecx
// 0057b5d7  5e                   pop esi
// 0057b5d8  33c9                 xor ecx, ecx
// 0057b5da  5d                   pop ebp
// 0057b5db  89480c               mov dword ptr [eax + 0xc], ecx
// 0057b5de  894810               mov dword ptr [eax + 0x10], ecx
// 0057b5e1  b001                 mov al, 1
// 0057b5e3  5b                   pop ebx
// 0057b5e4  83c42c               add esp, 0x2c
// 0057b5e7  c3                   ret 
// 0057b5e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057b5ec  897710               mov dword ptr [edi + 0x10], esi
// 0057b5ef  894f0c               mov dword ptr [edi + 0xc], ecx
// 0057b5f2  5f                   pop edi
// 0057b5f3  5e                   pop esi
// 0057b5f4  5d                   pop ebp
// 0057b5f5  32c0                 xor al, al
// 0057b5f7  5b                   pop ebx
// 0057b5f8  83c42c               add esp, 0x2c
// 0057b5fb  c3                   ret 
// 0057b5fc  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 0057b602  2bd1                 sub edx, ecx
// 0057b604  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 0057b60a  395008               cmp dword ptr [eax + 8], edx
// 0057b60d  7305                 jae 0x57b614
// 0057b60f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0057b612  eb03                 jmp 0x57b617
// 0057b614  8b5148               mov edx, dword ptr [ecx + 0x48]
// 0057b617  5f                   pop edi
// 0057b618  5e                   pop esi
// 0057b619  33c9                 xor ecx, ecx
// 0057b61b  5d                   pop ebp
// 0057b61c  895014               mov dword ptr [eax + 0x14], edx
// 0057b61f  89480c               mov dword ptr [eax + 0xc], ecx
// 0057b622  894810               mov dword ptr [eax + 0x10], ecx
// 0057b625  b001                 mov al, 1
// 0057b627  5b                   pop ebx
// 0057b628  83c42c               add esp, 0x2c
// 0057b62b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
