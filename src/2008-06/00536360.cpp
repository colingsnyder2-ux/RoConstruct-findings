// roc 2008-06 00536360  unit: seg_00530000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536360
//
// 00536360  83ec0c               sub esp, 0xc
// 00536363  53                   push ebx
// 00536364  55                   push ebp
// 00536365  56                   push esi
// 00536366  57                   push edi
// 00536367  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053636b  8b7764               mov esi, dword ptr [edi + 0x64]
// 0053636e  8b5754               mov edx, dword ptr [edi + 0x54]
// 00536371  89742414             mov dword ptr [esp + 0x14], esi
// 00536375  89542418             mov dword ptr [esp + 0x18], edx
// 00536379  bd01000000           mov ebp, 1
// 0053637e  8bff                 mov edi, edi
// 00536380  45                   inc ebp
// 00536381  83fe01               cmp esi, 1
// 00536384  8bc5                 mov eax, ebp
// 00536386  7e10                 jle 0x536398
// 00536388  8d4eff               lea ecx, [esi - 1]
// 0053638b  eb03                 jmp 0x536390
// 0053638d  8d4900               lea ecx, [ecx]
// 00536390  0fafc5               imul eax, ebp
// 00536393  83e901               sub ecx, 1
// 00536396  75f8                 jne 0x536390
// 00536398  3bc2                 cmp eax, edx
// 0053639a  7ee4                 jle 0x536380
// 0053639c  4d                   dec ebp
// 0053639d  83fd02               cmp ebp, 2
// 005363a0  7d18                 jge 0x5363ba
// 005363a2  8b0f                 mov ecx, dword ptr [edi]
// 005363a4  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 005363ab  8b17                 mov edx, dword ptr [edi]
// 005363ad  894218               mov dword ptr [edx + 0x18], eax
// 005363b0  8b07                 mov eax, dword ptr [edi]
// 005363b2  8b08                 mov ecx, dword ptr [eax]
// 005363b4  57                   push edi
// 005363b5  ffd1                 call ecx
// 005363b7  83c404               add esp, 4
// 005363ba  bb01000000           mov ebx, 1
// 005363bf  85f6                 test esi, esi
// 005363c1  7e21                 jle 0x5363e4
// 005363c3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005363c7  8bce                 mov ecx, esi
// 005363c9  8bc5                 mov eax, ebp
// 005363cb  8bd6                 mov edx, esi
// 005363cd  f3ab                 rep stosd dword ptr es:[edi], eax
// 005363cf  90                   nop 
// 005363d0  0fafdd               imul ebx, ebp
// 005363d3  83ea01               sub edx, 1
// 005363d6  75f8                 jne 0x5363d0
// 005363d8  eb0a                 jmp 0x5363e4
// 005363da  8d9b00000000         lea ebx, [ebx]
// 005363e0  8b742414             mov esi, dword ptr [esp + 0x14]
// 005363e4  33ed                 xor ebp, ebp
// 005363e6  c644241300           mov byte ptr [esp + 0x13], 0
// 005363eb  85f6                 test esi, esi
// 005363ed  7e4c                 jle 0x53643b
// 005363ef  90                   nop 
// 005363f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005363f4  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 005363f8  7509                 jne 0x536403
// 005363fa  8b3cad08cd8200       mov edi, dword ptr [ebp*4 + 0x82cd08]
// 00536401  eb02                 jmp 0x536405
// 00536403  8bfd                 mov edi, ebp
// 00536405  8b442424             mov eax, dword ptr [esp + 0x24]
// 00536409  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0053640c  8bc3                 mov eax, ebx
// 0053640e  99                   cdq 
// 0053640f  f7fe                 idiv esi
// 00536411  8d4e01               lea ecx, [esi + 1]
// 00536414  0fafc1               imul eax, ecx
// 00536417  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0053641b  7f17                 jg 0x536434
// 0053641d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00536421  45                   inc ebp
// 00536422  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00536426  890cba               mov dword ptr [edx + edi*4], ecx
// 00536429  8bd8                 mov ebx, eax
// 0053642b  c644241301           mov byte ptr [esp + 0x13], 1
// 00536430  7cbe                 jl 0x5363f0
// 00536432  ebac                 jmp 0x5363e0
// 00536434  807c241300           cmp byte ptr [esp + 0x13], 0
// 00536439  75a5                 jne 0x5363e0
// 0053643b  5f                   pop edi
// 0053643c  5e                   pop esi
// 0053643d  5d                   pop ebp
// 0053643e  8bc3                 mov eax, ebx
// 00536440  5b                   pop ebx
// 00536441  83c40c               add esp, 0xc
// 00536444  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
