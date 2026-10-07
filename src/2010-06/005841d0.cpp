// roc 2010-06 005841d0  unit: seg_00580000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005841d0
//
// 005841d0  83ec0c               sub esp, 0xc
// 005841d3  53                   push ebx
// 005841d4  55                   push ebp
// 005841d5  56                   push esi
// 005841d6  57                   push edi
// 005841d7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005841db  8b7764               mov esi, dword ptr [edi + 0x64]
// 005841de  8b5754               mov edx, dword ptr [edi + 0x54]
// 005841e1  89742414             mov dword ptr [esp + 0x14], esi
// 005841e5  89542418             mov dword ptr [esp + 0x18], edx
// 005841e9  bd01000000           mov ebp, 1
// 005841ee  8bff                 mov edi, edi
// 005841f0  45                   inc ebp
// 005841f1  83fe01               cmp esi, 1
// 005841f4  8bc5                 mov eax, ebp
// 005841f6  7e10                 jle 0x584208
// 005841f8  8d4eff               lea ecx, [esi - 1]
// 005841fb  eb03                 jmp 0x584200
// 005841fd  8d4900               lea ecx, [ecx]
// 00584200  0fafc5               imul eax, ebp
// 00584203  83e901               sub ecx, 1
// 00584206  75f8                 jne 0x584200
// 00584208  3bc2                 cmp eax, edx
// 0058420a  7ee4                 jle 0x5841f0
// 0058420c  4d                   dec ebp
// 0058420d  83fd02               cmp ebp, 2
// 00584210  7d18                 jge 0x58422a
// 00584212  8b0f                 mov ecx, dword ptr [edi]
// 00584214  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0058421b  8b17                 mov edx, dword ptr [edi]
// 0058421d  894218               mov dword ptr [edx + 0x18], eax
// 00584220  8b07                 mov eax, dword ptr [edi]
// 00584222  8b08                 mov ecx, dword ptr [eax]
// 00584224  57                   push edi
// 00584225  ffd1                 call ecx
// 00584227  83c404               add esp, 4
// 0058422a  bb01000000           mov ebx, 1
// 0058422f  85f6                 test esi, esi
// 00584231  7e21                 jle 0x584254
// 00584233  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00584237  8bce                 mov ecx, esi
// 00584239  8bc5                 mov eax, ebp
// 0058423b  8bd6                 mov edx, esi
// 0058423d  f3ab                 rep stosd dword ptr es:[edi], eax
// 0058423f  90                   nop 
// 00584240  0fafdd               imul ebx, ebp
// 00584243  83ea01               sub edx, 1
// 00584246  75f8                 jne 0x584240
// 00584248  eb0a                 jmp 0x584254
// 0058424a  8d9b00000000         lea ebx, [ebx]
// 00584250  8b742414             mov esi, dword ptr [esp + 0x14]
// 00584254  33ed                 xor ebp, ebp
// 00584256  c644241300           mov byte ptr [esp + 0x13], 0
// 0058425b  85f6                 test esi, esi
// 0058425d  7e4c                 jle 0x5842ab
// 0058425f  90                   nop 
// 00584260  8b542420             mov edx, dword ptr [esp + 0x20]
// 00584264  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00584268  7509                 jne 0x584273
// 0058426a  8b3cad1089a200       mov edi, dword ptr [ebp*4 + 0xa28910]
// 00584271  eb02                 jmp 0x584275
// 00584273  8bfd                 mov edi, ebp
// 00584275  8b442424             mov eax, dword ptr [esp + 0x24]
// 00584279  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0058427c  8bc3                 mov eax, ebx
// 0058427e  99                   cdq 
// 0058427f  f7fe                 idiv esi
// 00584281  8d4e01               lea ecx, [esi + 1]
// 00584284  0fafc1               imul eax, ecx
// 00584287  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0058428b  7f17                 jg 0x5842a4
// 0058428d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00584291  45                   inc ebp
// 00584292  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00584296  890cba               mov dword ptr [edx + edi*4], ecx
// 00584299  8bd8                 mov ebx, eax
// 0058429b  c644241301           mov byte ptr [esp + 0x13], 1
// 005842a0  7cbe                 jl 0x584260
// 005842a2  ebac                 jmp 0x584250
// 005842a4  807c241300           cmp byte ptr [esp + 0x13], 0
// 005842a9  75a5                 jne 0x584250
// 005842ab  5f                   pop edi
// 005842ac  5e                   pop esi
// 005842ad  5d                   pop ebp
// 005842ae  8bc3                 mov eax, ebx
// 005842b0  5b                   pop ebx
// 005842b1  83c40c               add esp, 0xc
// 005842b4  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
