// from server: 100% by auto
// roc 2011-06 0057a480  unit: seg_00570000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a480
//
// 0057a480  83ec0c               sub esp, 0xc
// 0057a483  53                   push ebx
// 0057a484  55                   push ebp
// 0057a485  56                   push esi
// 0057a486  57                   push edi
// 0057a487  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057a48b  8b7764               mov esi, dword ptr [edi + 0x64]
// 0057a48e  8b5754               mov edx, dword ptr [edi + 0x54]
// 0057a491  89742414             mov dword ptr [esp + 0x14], esi
// 0057a495  89542418             mov dword ptr [esp + 0x18], edx
// 0057a499  bd01000000           mov ebp, 1
// 0057a49e  8bff                 mov edi, edi
// 0057a4a0  45                   inc ebp
// 0057a4a1  83fe01               cmp esi, 1
// 0057a4a4  8bc5                 mov eax, ebp
// 0057a4a6  7e10                 jle 0x57a4b8
// 0057a4a8  8d4eff               lea ecx, [esi - 1]
// 0057a4ab  eb03                 jmp 0x57a4b0
// 0057a4ad  8d4900               lea ecx, [ecx]
// 0057a4b0  0fafc5               imul eax, ebp
// 0057a4b3  83e901               sub ecx, 1
// 0057a4b6  75f8                 jne 0x57a4b0
// 0057a4b8  3bc2                 cmp eax, edx
// 0057a4ba  7ee4                 jle 0x57a4a0
// 0057a4bc  4d                   dec ebp
// 0057a4bd  83fd02               cmp ebp, 2
// 0057a4c0  7d18                 jge 0x57a4da
// 0057a4c2  8b0f                 mov ecx, dword ptr [edi]
// 0057a4c4  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0057a4cb  8b17                 mov edx, dword ptr [edi]
// 0057a4cd  894218               mov dword ptr [edx + 0x18], eax
// 0057a4d0  8b07                 mov eax, dword ptr [edi]
// 0057a4d2  8b08                 mov ecx, dword ptr [eax]
// 0057a4d4  57                   push edi
// 0057a4d5  ffd1                 call ecx
// 0057a4d7  83c404               add esp, 4
// 0057a4da  bb01000000           mov ebx, 1
// 0057a4df  85f6                 test esi, esi
// 0057a4e1  7e21                 jle 0x57a504
// 0057a4e3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057a4e7  8bce                 mov ecx, esi
// 0057a4e9  8bc5                 mov eax, ebp
// 0057a4eb  8bd6                 mov edx, esi
// 0057a4ed  f3ab                 rep stosd dword ptr es:[edi], eax
// 0057a4ef  90                   nop 
// 0057a4f0  0fafdd               imul ebx, ebp
// 0057a4f3  83ea01               sub edx, 1
// 0057a4f6  75f8                 jne 0x57a4f0
// 0057a4f8  eb0a                 jmp 0x57a504
// 0057a4fa  8d9b00000000         lea ebx, [ebx]
// 0057a500  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057a504  33ed                 xor ebp, ebp
// 0057a506  c644241300           mov byte ptr [esp + 0x13], 0
// 0057a50b  85f6                 test esi, esi
// 0057a50d  7e4c                 jle 0x57a55b
// 0057a50f  90                   nop 
// 0057a510  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a514  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 0057a518  7509                 jne 0x57a523
// 0057a51a  8b3cad4882a800       mov edi, dword ptr [ebp*4 + 0xa88248]
// 0057a521  eb02                 jmp 0x57a525
// 0057a523  8bfd                 mov edi, ebp
// 0057a525  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a529  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0057a52c  8bc3                 mov eax, ebx
// 0057a52e  99                   cdq 
// 0057a52f  f7fe                 idiv esi
// 0057a531  8d4e01               lea ecx, [esi + 1]
// 0057a534  0fafc1               imul eax, ecx
// 0057a537  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0057a53b  7f17                 jg 0x57a554
// 0057a53d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057a541  45                   inc ebp
// 0057a542  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0057a546  890cba               mov dword ptr [edx + edi*4], ecx
// 0057a549  8bd8                 mov ebx, eax
// 0057a54b  c644241301           mov byte ptr [esp + 0x13], 1
// 0057a550  7cbe                 jl 0x57a510
// 0057a552  ebac                 jmp 0x57a500
// 0057a554  807c241300           cmp byte ptr [esp + 0x13], 0
// 0057a559  75a5                 jne 0x57a500
// 0057a55b  5f                   pop edi
// 0057a55c  5e                   pop esi
// 0057a55d  5d                   pop ebp
// 0057a55e  8bc3                 mov eax, ebx
// 0057a560  5b                   pop ebx
// 0057a561  83c40c               add esp, 0xc
// 0057a564  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
