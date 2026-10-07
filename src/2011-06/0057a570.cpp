// roc 2011-06 0057a570  unit: seg_00570000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a570
//
// 0057a570  83ec28               sub esp, 0x28
// 0057a573  53                   push ebx
// 0057a574  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0057a578  55                   push ebp
// 0057a579  56                   push esi
// 0057a57a  57                   push edi
// 0057a57b  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 0057a581  8d7720               lea esi, [edi + 0x20]
// 0057a584  56                   push esi
// 0057a585  53                   push ebx
// 0057a586  897c243c             mov dword ptr [esp + 0x3c], edi
// 0057a58a  e8f1feffff           call 0x57a480
// 0057a58f  83c408               add esp, 8
// 0057a592  837b6403             cmp dword ptr [ebx + 0x64], 3
// 0057a596  8be8                 mov ebp, eax
// 0057a598  6a01                 push 1
// 0057a59a  896c2430             mov dword ptr [esp + 0x30], ebp
// 0057a59e  53                   push ebx
// 0057a59f  752a                 jne 0x57a5cb
// 0057a5a1  8b03                 mov eax, dword ptr [ebx]
// 0057a5a3  83c018               add eax, 0x18
// 0057a5a6  8928                 mov dword ptr [eax], ebp
// 0057a5a8  8b0e                 mov ecx, dword ptr [esi]
// 0057a5aa  894804               mov dword ptr [eax + 4], ecx
// 0057a5ad  8b5724               mov edx, dword ptr [edi + 0x24]
// 0057a5b0  895008               mov dword ptr [eax + 8], edx
// 0057a5b3  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0057a5b6  89480c               mov dword ptr [eax + 0xc], ecx
// 0057a5b9  8b13                 mov edx, dword ptr [ebx]
// 0057a5bb  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 0057a5c2  8b03                 mov eax, dword ptr [ebx]
// 0057a5c4  8b4804               mov ecx, dword ptr [eax + 4]
// 0057a5c7  ffd1                 call ecx
// 0057a5c9  eb15                 jmp 0x57a5e0
// 0057a5cb  8b13                 mov edx, dword ptr [ebx]
// 0057a5cd  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 0057a5d4  8b03                 mov eax, dword ptr [ebx]
// 0057a5d6  896818               mov dword ptr [eax + 0x18], ebp
// 0057a5d9  8b0b                 mov ecx, dword ptr [ebx]
// 0057a5db  8b5104               mov edx, dword ptr [ecx + 4]
// 0057a5de  ffd2                 call edx
// 0057a5e0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 0057a5e3  8b4304               mov eax, dword ptr [ebx + 4]
// 0057a5e6  8b5008               mov edx, dword ptr [eax + 8]
// 0057a5e9  83c408               add esp, 8
// 0057a5ec  51                   push ecx
// 0057a5ed  55                   push ebp
// 0057a5ee  6a01                 push 1
// 0057a5f0  53                   push ebx
// 0057a5f1  ffd2                 call edx
// 0057a5f3  83c410               add esp, 0x10
// 0057a5f6  837b6400             cmp dword ptr [ebx + 0x64], 0
// 0057a5fa  89442430             mov dword ptr [esp + 0x30], eax
// 0057a5fe  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057a602  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057a60a  0f8eb7000000         jle 0x57a6c7
// 0057a610  8bf8                 mov edi, eax
// 0057a612  89742418             mov dword ptr [esp + 0x18], esi
// 0057a616  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057a61a  8b08                 mov ecx, dword ptr [eax]
// 0057a61c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057a620  99                   cdq 
// 0057a621  f7f9                 idiv ecx
// 0057a623  8bf0                 mov esi, eax
// 0057a625  85c9                 test ecx, ecx
// 0057a627  7e6a                 jle 0x57a693
// 0057a629  8d41ff               lea eax, [ecx - 1]
// 0057a62c  89442428             mov dword ptr [esp + 0x28], eax
// 0057a630  99                   cdq 
// 0057a631  2bc2                 sub eax, edx
// 0057a633  d1f8                 sar eax, 1
// 0057a635  33db                 xor ebx, ebx
// 0057a637  89442424             mov dword ptr [esp + 0x24], eax
// 0057a63b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057a63f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057a643  eb04                 jmp 0x57a649
// 0057a645  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a649  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057a64d  03c1                 add eax, ecx
// 0057a64f  99                   cdq 
// 0057a650  f77c2428             idiv dword ptr [esp + 0x28]
// 0057a654  3bdd                 cmp ebx, ebp
// 0057a656  8bd3                 mov edx, ebx
// 0057a658  7d24                 jge 0x57a67e
// 0057a65a  8d9b00000000         lea ebx, [ebx]
// 0057a660  33c9                 xor ecx, ecx
// 0057a662  85f6                 test esi, esi
// 0057a664  7e10                 jle 0x57a676
// 0057a666  8b2f                 mov ebp, dword ptr [edi]
// 0057a668  03e9                 add ebp, ecx
// 0057a66a  41                   inc ecx
// 0057a66b  3bce                 cmp ecx, esi
// 0057a66d  88042a               mov byte ptr [edx + ebp], al
// 0057a670  7cf4                 jl 0x57a666
// 0057a672  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0057a676  03542414             add edx, dword ptr [esp + 0x14]
// 0057a67a  3bd5                 cmp edx, ebp
// 0057a67c  7ce2                 jl 0x57a660
// 0057a67e  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 0057a686  03de                 add ebx, esi
// 0057a688  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057a68d  75b6                 jne 0x57a645
// 0057a68f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0057a693  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057a697  8344241804           add dword ptr [esp + 0x18], 4
// 0057a69c  40                   inc eax
// 0057a69d  83c704               add edi, 4
// 0057a6a0  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 0057a6a3  89742414             mov dword ptr [esp + 0x14], esi
// 0057a6a7  89442420             mov dword ptr [esp + 0x20], eax
// 0057a6ab  0f8c65ffffff         jl 0x57a616
// 0057a6b1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057a6b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057a6b9  5f                   pop edi
// 0057a6ba  5e                   pop esi
// 0057a6bb  896814               mov dword ptr [eax + 0x14], ebp
// 0057a6be  5d                   pop ebp
// 0057a6bf  895010               mov dword ptr [eax + 0x10], edx
// 0057a6c2  5b                   pop ebx
// 0057a6c3  83c428               add esp, 0x28
// 0057a6c6  c3                   ret 
// 0057a6c7  896f14               mov dword ptr [edi + 0x14], ebp
// 0057a6ca  894710               mov dword ptr [edi + 0x10], eax
// 0057a6cd  5f                   pop edi
// 0057a6ce  5e                   pop esi
// 0057a6cf  5d                   pop ebp
// 0057a6d0  5b                   pop ebx
// 0057a6d1  83c428               add esp, 0x28
// 0057a6d4  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
