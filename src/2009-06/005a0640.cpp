// from server: 100% by auto
// roc 2009-06 005a0640  unit: seg_005a0000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0640
//
// 005a0640  83ec0c               sub esp, 0xc
// 005a0643  53                   push ebx
// 005a0644  55                   push ebp
// 005a0645  56                   push esi
// 005a0646  57                   push edi
// 005a0647  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005a064b  8b7764               mov esi, dword ptr [edi + 0x64]
// 005a064e  8b5754               mov edx, dword ptr [edi + 0x54]
// 005a0651  89742414             mov dword ptr [esp + 0x14], esi
// 005a0655  89542418             mov dword ptr [esp + 0x18], edx
// 005a0659  bd01000000           mov ebp, 1
// 005a065e  8bff                 mov edi, edi
// 005a0660  45                   inc ebp
// 005a0661  83fe01               cmp esi, 1
// 005a0664  8bc5                 mov eax, ebp
// 005a0666  7e10                 jle 0x5a0678
// 005a0668  8d4eff               lea ecx, [esi - 1]
// 005a066b  eb03                 jmp 0x5a0670
// 005a066d  8d4900               lea ecx, [ecx]
// 005a0670  0fafc5               imul eax, ebp
// 005a0673  83e901               sub ecx, 1
// 005a0676  75f8                 jne 0x5a0670
// 005a0678  3bc2                 cmp eax, edx
// 005a067a  7ee4                 jle 0x5a0660
// 005a067c  4d                   dec ebp
// 005a067d  83fd02               cmp ebp, 2
// 005a0680  7d18                 jge 0x5a069a
// 005a0682  8b0f                 mov ecx, dword ptr [edi]
// 005a0684  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 005a068b  8b17                 mov edx, dword ptr [edi]
// 005a068d  894218               mov dword ptr [edx + 0x18], eax
// 005a0690  8b07                 mov eax, dword ptr [edi]
// 005a0692  8b08                 mov ecx, dword ptr [eax]
// 005a0694  57                   push edi
// 005a0695  ffd1                 call ecx
// 005a0697  83c404               add esp, 4
// 005a069a  bb01000000           mov ebx, 1
// 005a069f  85f6                 test esi, esi
// 005a06a1  7e21                 jle 0x5a06c4
// 005a06a3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a06a7  8bce                 mov ecx, esi
// 005a06a9  8bc5                 mov eax, ebp
// 005a06ab  8bd6                 mov edx, esi
// 005a06ad  f3ab                 rep stosd dword ptr es:[edi], eax
// 005a06af  90                   nop 
// 005a06b0  0fafdd               imul ebx, ebp
// 005a06b3  83ea01               sub edx, 1
// 005a06b6  75f8                 jne 0x5a06b0
// 005a06b8  eb0a                 jmp 0x5a06c4
// 005a06ba  8d9b00000000         lea ebx, [ebx]
// 005a06c0  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a06c4  33ed                 xor ebp, ebp
// 005a06c6  c644241300           mov byte ptr [esp + 0x13], 0
// 005a06cb  85f6                 test esi, esi
// 005a06cd  7e4c                 jle 0x5a071b
// 005a06cf  90                   nop 
// 005a06d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a06d4  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 005a06d8  7509                 jne 0x5a06e3
// 005a06da  8b3cad003d8d00       mov edi, dword ptr [ebp*4 + 0x8d3d00]
// 005a06e1  eb02                 jmp 0x5a06e5
// 005a06e3  8bfd                 mov edi, ebp
// 005a06e5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a06e9  8b34b8               mov esi, dword ptr [eax + edi*4]
// 005a06ec  8bc3                 mov eax, ebx
// 005a06ee  99                   cdq 
// 005a06ef  f7fe                 idiv esi
// 005a06f1  8d4e01               lea ecx, [esi + 1]
// 005a06f4  0fafc1               imul eax, ecx
// 005a06f7  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005a06fb  7f17                 jg 0x5a0714
// 005a06fd  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a0701  45                   inc ebp
// 005a0702  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005a0706  890cba               mov dword ptr [edx + edi*4], ecx
// 005a0709  8bd8                 mov ebx, eax
// 005a070b  c644241301           mov byte ptr [esp + 0x13], 1
// 005a0710  7cbe                 jl 0x5a06d0
// 005a0712  ebac                 jmp 0x5a06c0
// 005a0714  807c241300           cmp byte ptr [esp + 0x13], 0
// 005a0719  75a5                 jne 0x5a06c0
// 005a071b  5f                   pop edi
// 005a071c  5e                   pop esi
// 005a071d  5d                   pop ebp
// 005a071e  8bc3                 mov eax, ebx
// 005a0720  5b                   pop ebx
// 005a0721  83c40c               add esp, 0xc
// 005a0724  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
