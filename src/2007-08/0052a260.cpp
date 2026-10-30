// from server: 100% by auto
// roc 2007-08 0052a260  unit: seg_00520000  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a260
//
// 0052a260  83ec0c               sub esp, 0xc
// 0052a263  53                   push ebx
// 0052a264  55                   push ebp
// 0052a265  56                   push esi
// 0052a266  57                   push edi
// 0052a267  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0052a26b  8b7764               mov esi, dword ptr [edi + 0x64]
// 0052a26e  8b5754               mov edx, dword ptr [edi + 0x54]
// 0052a271  89742414             mov dword ptr [esp + 0x14], esi
// 0052a275  89542418             mov dword ptr [esp + 0x18], edx
// 0052a279  bd01000000           mov ebp, 1
// 0052a27e  8bff                 mov edi, edi
// 0052a280  83c501               add ebp, 1
// 0052a283  83fe01               cmp esi, 1
// 0052a286  8bc5                 mov eax, ebp
// 0052a288  7e0e                 jle 0x52a298
// 0052a28a  8d4eff               lea ecx, [esi - 1]
// 0052a28d  8d4900               lea ecx, [ecx]
// 0052a290  0fafc5               imul eax, ebp
// 0052a293  83e901               sub ecx, 1
// 0052a296  75f8                 jne 0x52a290
// 0052a298  3bc2                 cmp eax, edx
// 0052a29a  7ee4                 jle 0x52a280
// 0052a29c  83ed01               sub ebp, 1
// 0052a29f  83fd02               cmp ebp, 2
// 0052a2a2  7d18                 jge 0x52a2bc
// 0052a2a4  8b0f                 mov ecx, dword ptr [edi]
// 0052a2a6  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0052a2ad  8b17                 mov edx, dword ptr [edi]
// 0052a2af  894218               mov dword ptr [edx + 0x18], eax
// 0052a2b2  8b07                 mov eax, dword ptr [edi]
// 0052a2b4  8b08                 mov ecx, dword ptr [eax]
// 0052a2b6  57                   push edi
// 0052a2b7  ffd1                 call ecx
// 0052a2b9  83c404               add esp, 4
// 0052a2bc  85f6                 test esi, esi
// 0052a2be  bb01000000           mov ebx, 1
// 0052a2c3  7e1f                 jle 0x52a2e4
// 0052a2c5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052a2c9  8bce                 mov ecx, esi
// 0052a2cb  8bc5                 mov eax, ebp
// 0052a2cd  8bd6                 mov edx, esi
// 0052a2cf  f3ab                 rep stosd dword ptr es:[edi], eax
// 0052a2d1  0fafdd               imul ebx, ebp
// 0052a2d4  83ea01               sub edx, 1
// 0052a2d7  75f8                 jne 0x52a2d1
// 0052a2d9  eb09                 jmp 0x52a2e4
// 0052a2db  eb03                 jmp 0x52a2e0
// 0052a2dd  8d4900               lea ecx, [ecx]
// 0052a2e0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052a2e4  33ed                 xor ebp, ebp
// 0052a2e6  85f6                 test esi, esi
// 0052a2e8  c644241300           mov byte ptr [esp + 0x13], 0
// 0052a2ed  7e4e                 jle 0x52a33d
// 0052a2ef  90                   nop 
// 0052a2f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052a2f4  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 0052a2f8  7509                 jne 0x52a303
// 0052a2fa  8b3cad68477a00       mov edi, dword ptr [ebp*4 + 0x7a4768]
// 0052a301  eb02                 jmp 0x52a305
// 0052a303  8bfd                 mov edi, ebp
// 0052a305  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052a309  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0052a30c  8bc3                 mov eax, ebx
// 0052a30e  99                   cdq 
// 0052a30f  f7fe                 idiv esi
// 0052a311  8d4e01               lea ecx, [esi + 1]
// 0052a314  0fafc1               imul eax, ecx
// 0052a317  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0052a31b  7f19                 jg 0x52a336
// 0052a31d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052a321  83c501               add ebp, 1
// 0052a324  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0052a328  890cba               mov dword ptr [edx + edi*4], ecx
// 0052a32b  8bd8                 mov ebx, eax
// 0052a32d  c644241301           mov byte ptr [esp + 0x13], 1
// 0052a332  7cbc                 jl 0x52a2f0
// 0052a334  ebaa                 jmp 0x52a2e0
// 0052a336  807c241300           cmp byte ptr [esp + 0x13], 0
// 0052a33b  75a3                 jne 0x52a2e0
// 0052a33d  5f                   pop edi
// 0052a33e  5e                   pop esi
// 0052a33f  5d                   pop ebp
// 0052a340  8bc3                 mov eax, ebx
// 0052a342  5b                   pop ebx
// 0052a343  83c40c               add esp, 0xc
// 0052a346  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
