// roc 2009-12 00622670  unit: seg_00620000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622670
//
// 00622670  83ec0c               sub esp, 0xc
// 00622673  53                   push ebx
// 00622674  55                   push ebp
// 00622675  56                   push esi
// 00622676  57                   push edi
// 00622677  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0062267b  8b7764               mov esi, dword ptr [edi + 0x64]
// 0062267e  8b5754               mov edx, dword ptr [edi + 0x54]
// 00622681  89742414             mov dword ptr [esp + 0x14], esi
// 00622685  89542418             mov dword ptr [esp + 0x18], edx
// 00622689  bd01000000           mov ebp, 1
// 0062268e  8bff                 mov edi, edi
// 00622690  45                   inc ebp
// 00622691  83fe01               cmp esi, 1
// 00622694  8bc5                 mov eax, ebp
// 00622696  7e10                 jle 0x6226a8
// 00622698  8d4eff               lea ecx, [esi - 1]
// 0062269b  eb03                 jmp 0x6226a0
// 0062269d  8d4900               lea ecx, [ecx]
// 006226a0  0fafc5               imul eax, ebp
// 006226a3  83e901               sub ecx, 1
// 006226a6  75f8                 jne 0x6226a0
// 006226a8  3bc2                 cmp eax, edx
// 006226aa  7ee4                 jle 0x622690
// 006226ac  4d                   dec ebp
// 006226ad  83fd02               cmp ebp, 2
// 006226b0  7d18                 jge 0x6226ca
// 006226b2  8b0f                 mov ecx, dword ptr [edi]
// 006226b4  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 006226bb  8b17                 mov edx, dword ptr [edi]
// 006226bd  894218               mov dword ptr [edx + 0x18], eax
// 006226c0  8b07                 mov eax, dword ptr [edi]
// 006226c2  8b08                 mov ecx, dword ptr [eax]
// 006226c4  57                   push edi
// 006226c5  ffd1                 call ecx
// 006226c7  83c404               add esp, 4
// 006226ca  bb01000000           mov ebx, 1
// 006226cf  85f6                 test esi, esi
// 006226d1  7e21                 jle 0x6226f4
// 006226d3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006226d7  8bce                 mov ecx, esi
// 006226d9  8bc5                 mov eax, ebp
// 006226db  8bd6                 mov edx, esi
// 006226dd  f3ab                 rep stosd dword ptr es:[edi], eax
// 006226df  90                   nop 
// 006226e0  0fafdd               imul ebx, ebp
// 006226e3  83ea01               sub edx, 1
// 006226e6  75f8                 jne 0x6226e0
// 006226e8  eb0a                 jmp 0x6226f4
// 006226ea  8d9b00000000         lea ebx, [ebx]
// 006226f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 006226f4  33ed                 xor ebp, ebp
// 006226f6  c644241300           mov byte ptr [esp + 0x13], 0
// 006226fb  85f6                 test esi, esi
// 006226fd  7e4c                 jle 0x62274b
// 006226ff  90                   nop 
// 00622700  8b542420             mov edx, dword ptr [esp + 0x20]
// 00622704  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00622708  7509                 jne 0x622713
// 0062270a  8b3cad90ab9c00       mov edi, dword ptr [ebp*4 + 0x9cab90]
// 00622711  eb02                 jmp 0x622715
// 00622713  8bfd                 mov edi, ebp
// 00622715  8b442424             mov eax, dword ptr [esp + 0x24]
// 00622719  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0062271c  8bc3                 mov eax, ebx
// 0062271e  99                   cdq 
// 0062271f  f7fe                 idiv esi
// 00622721  8d4e01               lea ecx, [esi + 1]
// 00622724  0fafc1               imul eax, ecx
// 00622727  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0062272b  7f17                 jg 0x622744
// 0062272d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00622731  45                   inc ebp
// 00622732  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00622736  890cba               mov dword ptr [edx + edi*4], ecx
// 00622739  8bd8                 mov ebx, eax
// 0062273b  c644241301           mov byte ptr [esp + 0x13], 1
// 00622740  7cbe                 jl 0x622700
// 00622742  ebac                 jmp 0x6226f0
// 00622744  807c241300           cmp byte ptr [esp + 0x13], 0
// 00622749  75a5                 jne 0x6226f0
// 0062274b  5f                   pop edi
// 0062274c  5e                   pop esi
// 0062274d  5d                   pop ebp
// 0062274e  8bc3                 mov eax, ebx
// 00622750  5b                   pop ebx
// 00622751  83c40c               add esp, 0xc
// 00622754  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
