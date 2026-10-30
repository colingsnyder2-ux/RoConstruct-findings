// from server: 100% by auto
// roc 2012-06 00665b90  unit: seg_00660000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665b90
//
// 00665b90  83ec0c               sub esp, 0xc
// 00665b93  53                   push ebx
// 00665b94  55                   push ebp
// 00665b95  56                   push esi
// 00665b96  57                   push edi
// 00665b97  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00665b9b  8b7764               mov esi, dword ptr [edi + 0x64]
// 00665b9e  8b5754               mov edx, dword ptr [edi + 0x54]
// 00665ba1  89742414             mov dword ptr [esp + 0x14], esi
// 00665ba5  89542418             mov dword ptr [esp + 0x18], edx
// 00665ba9  bd01000000           mov ebp, 1
// 00665bae  8bff                 mov edi, edi
// 00665bb0  45                   inc ebp
// 00665bb1  83fe01               cmp esi, 1
// 00665bb4  8bc5                 mov eax, ebp
// 00665bb6  7e10                 jle 0x665bc8
// 00665bb8  8d4eff               lea ecx, [esi - 1]
// 00665bbb  eb03                 jmp 0x665bc0
// 00665bbd  8d4900               lea ecx, [ecx]
// 00665bc0  0fafc5               imul eax, ebp
// 00665bc3  83e901               sub ecx, 1
// 00665bc6  75f8                 jne 0x665bc0
// 00665bc8  3bc2                 cmp eax, edx
// 00665bca  7ee4                 jle 0x665bb0
// 00665bcc  4d                   dec ebp
// 00665bcd  83fd02               cmp ebp, 2
// 00665bd0  7d18                 jge 0x665bea
// 00665bd2  8b0f                 mov ecx, dword ptr [edi]
// 00665bd4  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 00665bdb  8b17                 mov edx, dword ptr [edi]
// 00665bdd  894218               mov dword ptr [edx + 0x18], eax
// 00665be0  8b07                 mov eax, dword ptr [edi]
// 00665be2  8b08                 mov ecx, dword ptr [eax]
// 00665be4  57                   push edi
// 00665be5  ffd1                 call ecx
// 00665be7  83c404               add esp, 4
// 00665bea  bb01000000           mov ebx, 1
// 00665bef  85f6                 test esi, esi
// 00665bf1  7e21                 jle 0x665c14
// 00665bf3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00665bf7  8bce                 mov ecx, esi
// 00665bf9  8bc5                 mov eax, ebp
// 00665bfb  8bd6                 mov edx, esi
// 00665bfd  f3ab                 rep stosd dword ptr es:[edi], eax
// 00665bff  90                   nop 
// 00665c00  0fafdd               imul ebx, ebp
// 00665c03  83ea01               sub edx, 1
// 00665c06  75f8                 jne 0x665c00
// 00665c08  eb0a                 jmp 0x665c14
// 00665c0a  8d9b00000000         lea ebx, [ebx]
// 00665c10  8b742414             mov esi, dword ptr [esp + 0x14]
// 00665c14  33ed                 xor ebp, ebp
// 00665c16  c644241300           mov byte ptr [esp + 0x13], 0
// 00665c1b  85f6                 test esi, esi
// 00665c1d  7e4c                 jle 0x665c6b
// 00665c1f  90                   nop 
// 00665c20  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665c24  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00665c28  7509                 jne 0x665c33
// 00665c2a  8b3cad98c0b800       mov edi, dword ptr [ebp*4 + 0xb8c098]
// 00665c31  eb02                 jmp 0x665c35
// 00665c33  8bfd                 mov edi, ebp
// 00665c35  8b442424             mov eax, dword ptr [esp + 0x24]
// 00665c39  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00665c3c  8bc3                 mov eax, ebx
// 00665c3e  99                   cdq 
// 00665c3f  f7fe                 idiv esi
// 00665c41  8d4e01               lea ecx, [esi + 1]
// 00665c44  0fafc1               imul eax, ecx
// 00665c47  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00665c4b  7f17                 jg 0x665c64
// 00665c4d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00665c51  45                   inc ebp
// 00665c52  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00665c56  890cba               mov dword ptr [edx + edi*4], ecx
// 00665c59  8bd8                 mov ebx, eax
// 00665c5b  c644241301           mov byte ptr [esp + 0x13], 1
// 00665c60  7cbe                 jl 0x665c20
// 00665c62  ebac                 jmp 0x665c10
// 00665c64  807c241300           cmp byte ptr [esp + 0x13], 0
// 00665c69  75a5                 jne 0x665c10
// 00665c6b  5f                   pop edi
// 00665c6c  5e                   pop esi
// 00665c6d  5d                   pop ebp
// 00665c6e  8bc3                 mov eax, ebx
// 00665c70  5b                   pop ebx
// 00665c71  83c40c               add esp, 0xc
// 00665c74  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
