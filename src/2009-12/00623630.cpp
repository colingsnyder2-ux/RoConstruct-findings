// roc 2009-12 00623630  unit: seg_00620000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623630
//
// 00623630  83ec2c               sub esp, 0x2c
// 00623633  53                   push ebx
// 00623634  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00623638  55                   push ebp
// 00623639  56                   push esi
// 0062363a  57                   push edi
// 0062363b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 00623641  33f6                 xor esi, esi
// 00623643  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 00623649  897c2420             mov dword ptr [esp + 0x20], edi
// 0062364d  7e4a                 jle 0x623699
// 0062364f  8d83e8000000         lea eax, [ebx + 0xe8]
// 00623655  89442410             mov dword ptr [esp + 0x10], eax
// 00623659  8da42400000000       lea esp, [esp]
// 00623660  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00623664  8b01                 mov eax, dword ptr [ecx]
// 00623666  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00623669  8b6f08               mov ebp, dword ptr [edi + 8]
// 0062366c  8b4004               mov eax, dword ptr [eax + 4]
// 0062366f  0fafe9               imul ebp, ecx
// 00623672  8b5304               mov edx, dword ptr [ebx + 4]
// 00623675  8b5220               mov edx, dword ptr [edx + 0x20]
// 00623678  6a00                 push 0
// 0062367a  51                   push ecx
// 0062367b  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 0062367f  55                   push ebp
// 00623680  51                   push ecx
// 00623681  53                   push ebx
// 00623682  ffd2                 call edx
// 00623684  8344242404           add dword ptr [esp + 0x24], 4
// 00623689  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0062368d  46                   inc esi
// 0062368e  83c414               add esp, 0x14
// 00623691  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 00623697  7cc7                 jl 0x623660
// 00623699  8b7710               mov esi, dword ptr [edi + 0x10]
// 0062369c  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0062369f  89742424             mov dword ptr [esp + 0x24], esi
// 006236a3  0f8d04010000         jge 0x6237ad
// 006236a9  8da42400000000       lea esp, [esp]
// 006236b0  8b470c               mov eax, dword ptr [edi + 0xc]
// 006236b3  89442410             mov dword ptr [esp + 0x10], eax
// 006236b7  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 006236bd  0f83d5000000         jae 0x623798
// 006236c3  33d2                 xor edx, edx
// 006236c5  33ed                 xor ebp, ebp
// 006236c7  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 006236cd  8954241c             mov dword ptr [esp + 0x1c], edx
// 006236d1  0f8e95000000         jle 0x62376c
// 006236d7  8d83e8000000         lea eax, [ebx + 0xe8]
// 006236dd  89442414             mov dword ptr [esp + 0x14], eax
// 006236e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006236e5  8b39                 mov edi, dword ptr [ecx]
// 006236e7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006236ea  8bc1                 mov eax, ecx
// 006236ec  0faf442410           imul eax, dword ptr [esp + 0x10]
// 006236f1  837f3800             cmp dword ptr [edi + 0x38], 0
// 006236f5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006236fd  7e53                 jle 0x623752
// 006236ff  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00623703  c1e007               shl eax, 7
// 00623706  89442428             mov dword ptr [esp + 0x28], eax
// 0062370a  8d1cb2               lea ebx, [edx + esi*4]
// 0062370d  8d4900               lea ecx, [ecx]
// 00623710  8b03                 mov eax, dword ptr [ebx]
// 00623712  03442428             add eax, dword ptr [esp + 0x28]
// 00623716  33d2                 xor edx, edx
// 00623718  85c9                 test ecx, ecx
// 0062371a  7e19                 jle 0x623735
// 0062371c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00623720  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 00623724  8906                 mov dword ptr [esi], eax
// 00623726  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00623729  42                   inc edx
// 0062372a  45                   inc ebp
// 0062372b  83c604               add esi, 4
// 0062372e  83e880               sub eax, -0x80
// 00623731  3bd1                 cmp edx, ecx
// 00623733  7cef                 jl 0x623724
// 00623735  8b442418             mov eax, dword ptr [esp + 0x18]
// 00623739  40                   inc eax
// 0062373a  83c304               add ebx, 4
// 0062373d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00623740  89442418             mov dword ptr [esp + 0x18], eax
// 00623744  7cca                 jl 0x623710
// 00623746  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0062374a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0062374e  8b742424             mov esi, dword ptr [esp + 0x24]
// 00623752  8344241404           add dword ptr [esp + 0x14], 4
// 00623757  42                   inc edx
// 00623758  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 0062375e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00623762  0f8c79ffffff         jl 0x6236e1
// 00623768  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0062376c  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 00623772  8d4718               lea eax, [edi + 0x18]
// 00623775  50                   push eax
// 00623776  8b4204               mov eax, dword ptr [edx + 4]
// 00623779  53                   push ebx
// 0062377a  ffd0                 call eax
// 0062377c  83c408               add esp, 8
// 0062377f  84c0                 test al, al
// 00623781  7455                 je 0x6237d8
// 00623783  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623787  40                   inc eax
// 00623788  89442410             mov dword ptr [esp + 0x10], eax
// 0062378c  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 00623792  0f822bffffff         jb 0x6236c3
// 00623798  46                   inc esi
// 00623799  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 006237a0  3b7714               cmp esi, dword ptr [edi + 0x14]
// 006237a3  89742424             mov dword ptr [esp + 0x24], esi
// 006237a7  0f8c03ffffff         jl 0x6236b0
// 006237ad  b901000000           mov ecx, 1
// 006237b2  014f08               add dword ptr [edi + 8], ecx
// 006237b5  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 006237bb  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 006237c1  7e29                 jle 0x6237ec
// 006237c3  5f                   pop edi
// 006237c4  894814               mov dword ptr [eax + 0x14], ecx
// 006237c7  5e                   pop esi
// 006237c8  33c9                 xor ecx, ecx
// 006237ca  5d                   pop ebp
// 006237cb  89480c               mov dword ptr [eax + 0xc], ecx
// 006237ce  894810               mov dword ptr [eax + 0x10], ecx
// 006237d1  b001                 mov al, 1
// 006237d3  5b                   pop ebx
// 006237d4  83c42c               add esp, 0x2c
// 006237d7  c3                   ret 
// 006237d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006237dc  897710               mov dword ptr [edi + 0x10], esi
// 006237df  894f0c               mov dword ptr [edi + 0xc], ecx
// 006237e2  5f                   pop edi
// 006237e3  5e                   pop esi
// 006237e4  5d                   pop ebp
// 006237e5  32c0                 xor al, al
// 006237e7  5b                   pop ebx
// 006237e8  83c42c               add esp, 0x2c
// 006237eb  c3                   ret 
// 006237ec  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 006237f2  2bd1                 sub edx, ecx
// 006237f4  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 006237fa  395008               cmp dword ptr [eax + 8], edx
// 006237fd  7305                 jae 0x623804
// 006237ff  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00623802  eb03                 jmp 0x623807
// 00623804  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00623807  5f                   pop edi
// 00623808  5e                   pop esi
// 00623809  33c9                 xor ecx, ecx
// 0062380b  5d                   pop ebp
// 0062380c  895014               mov dword ptr [eax + 0x14], edx
// 0062380f  89480c               mov dword ptr [eax + 0xc], ecx
// 00623812  894810               mov dword ptr [eax + 0x10], ecx
// 00623815  b001                 mov al, 1
// 00623817  5b                   pop ebx
// 00623818  83c42c               add esp, 0x2c
// 0062381b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
