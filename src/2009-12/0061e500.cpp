// roc 2009-12 0061e500  unit: seg_00610000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e500
//
// 0061e500  53                   push ebx
// 0061e501  55                   push ebp
// 0061e502  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0061e506  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0061e509  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 0061e510  56                   push esi
// 0061e511  8b7500               mov esi, dword ptr [ebp]
// 0061e514  57                   push edi
// 0061e515  8b7d04               mov edi, dword ptr [ebp + 4]
// 0061e518  0f8597000000         jne 0x61e5b5
// 0061e51e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 0061e523  0f8dd7000000         jge 0x61e600
// 0061e529  8da42400000000       lea esp, [esp]
// 0061e530  85ff                 test edi, edi
// 0061e532  7518                 jne 0x61e54c
// 0061e534  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0061e537  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061e53a  53                   push ebx
// 0061e53b  ffd1                 call ecx
// 0061e53d  83c404               add esp, 4
// 0061e540  84c0                 test al, al
// 0061e542  7464                 je 0x61e5a8
// 0061e544  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0061e547  8b30                 mov esi, dword ptr [eax]
// 0061e549  8b7804               mov edi, dword ptr [eax + 4]
// 0061e54c  0fb606               movzx eax, byte ptr [esi]
// 0061e54f  4f                   dec edi
// 0061e550  46                   inc esi
// 0061e551  3dff000000           cmp eax, 0xff
// 0061e556  7531                 jne 0x61e589
// 0061e558  85ff                 test edi, edi
// 0061e55a  7518                 jne 0x61e574
// 0061e55c  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0061e55f  8b420c               mov eax, dword ptr [edx + 0xc]
// 0061e562  53                   push ebx
// 0061e563  ffd0                 call eax
// 0061e565  83c404               add esp, 4
// 0061e568  84c0                 test al, al
// 0061e56a  743c                 je 0x61e5a8
// 0061e56c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0061e56f  8b30                 mov esi, dword ptr [eax]
// 0061e571  8b7804               mov edi, dword ptr [eax + 4]
// 0061e574  0fb606               movzx eax, byte ptr [esi]
// 0061e577  4f                   dec edi
// 0061e578  46                   inc esi
// 0061e579  3dff000000           cmp eax, 0xff
// 0061e57e  74d8                 je 0x61e558
// 0061e580  85c0                 test eax, eax
// 0061e582  752b                 jne 0x61e5af
// 0061e584  b8ff000000           mov eax, 0xff
// 0061e589  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061e58d  c1e108               shl ecx, 8
// 0061e590  0bc8                 or ecx, eax
// 0061e592  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061e596  83c008               add eax, 8
// 0061e599  83f819               cmp eax, 0x19
// 0061e59c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061e5a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0061e5a4  7c8a                 jl 0x61e530
// 0061e5a6  eb58                 jmp 0x61e600
// 0061e5a8  5f                   pop edi
// 0061e5a9  5e                   pop esi
// 0061e5aa  5d                   pop ebp
// 0061e5ab  32c0                 xor al, al
// 0061e5ad  5b                   pop ebx
// 0061e5ae  c3                   ret 
// 0061e5af  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 0061e5b5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061e5b9  39542420             cmp dword ptr [esp + 0x20], edx
// 0061e5bd  7e41                 jle 0x61e600
// 0061e5bf  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 0061e5c5  80780800             cmp byte ptr [eax + 8], 0
// 0061e5c9  7520                 jne 0x61e5eb
// 0061e5cb  8b0b                 mov ecx, dword ptr [ebx]
// 0061e5cd  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 0061e5d4  8b13                 mov edx, dword ptr [ebx]
// 0061e5d6  8b4204               mov eax, dword ptr [edx + 4]
// 0061e5d9  6aff                 push -1
// 0061e5db  53                   push ebx
// 0061e5dc  ffd0                 call eax
// 0061e5de  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 0061e5e4  83c408               add esp, 8
// 0061e5e7  c6410801             mov byte ptr [ecx + 8], 1
// 0061e5eb  b919000000           mov ecx, 0x19
// 0061e5f0  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0061e5f4  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 0061e5fc  d3642418             shl dword ptr [esp + 0x18], cl
// 0061e600  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061e604  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061e608  897d04               mov dword ptr [ebp + 4], edi
// 0061e60b  5f                   pop edi
// 0061e60c  897500               mov dword ptr [ebp], esi
// 0061e60f  5e                   pop esi
// 0061e610  89450c               mov dword ptr [ebp + 0xc], eax
// 0061e613  895508               mov dword ptr [ebp + 8], edx
// 0061e616  5d                   pop ebp
// 0061e617  b001                 mov al, 1
// 0061e619  5b                   pop ebx
// 0061e61a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
