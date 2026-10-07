// roc 2010-06 00580060  unit: seg_00580000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580060
//
// 00580060  53                   push ebx
// 00580061  55                   push ebp
// 00580062  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00580066  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00580069  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00580070  56                   push esi
// 00580071  8b7500               mov esi, dword ptr [ebp]
// 00580074  57                   push edi
// 00580075  8b7d04               mov edi, dword ptr [ebp + 4]
// 00580078  0f8597000000         jne 0x580115
// 0058007e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00580083  0f8dd7000000         jge 0x580160
// 00580089  8da42400000000       lea esp, [esp]
// 00580090  85ff                 test edi, edi
// 00580092  7518                 jne 0x5800ac
// 00580094  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00580097  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0058009a  53                   push ebx
// 0058009b  ffd1                 call ecx
// 0058009d  83c404               add esp, 4
// 005800a0  84c0                 test al, al
// 005800a2  7464                 je 0x580108
// 005800a4  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005800a7  8b30                 mov esi, dword ptr [eax]
// 005800a9  8b7804               mov edi, dword ptr [eax + 4]
// 005800ac  0fb606               movzx eax, byte ptr [esi]
// 005800af  4f                   dec edi
// 005800b0  46                   inc esi
// 005800b1  3dff000000           cmp eax, 0xff
// 005800b6  7531                 jne 0x5800e9
// 005800b8  85ff                 test edi, edi
// 005800ba  7518                 jne 0x5800d4
// 005800bc  8b5318               mov edx, dword ptr [ebx + 0x18]
// 005800bf  8b420c               mov eax, dword ptr [edx + 0xc]
// 005800c2  53                   push ebx
// 005800c3  ffd0                 call eax
// 005800c5  83c404               add esp, 4
// 005800c8  84c0                 test al, al
// 005800ca  743c                 je 0x580108
// 005800cc  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005800cf  8b30                 mov esi, dword ptr [eax]
// 005800d1  8b7804               mov edi, dword ptr [eax + 4]
// 005800d4  0fb606               movzx eax, byte ptr [esi]
// 005800d7  4f                   dec edi
// 005800d8  46                   inc esi
// 005800d9  3dff000000           cmp eax, 0xff
// 005800de  74d8                 je 0x5800b8
// 005800e0  85c0                 test eax, eax
// 005800e2  752b                 jne 0x58010f
// 005800e4  b8ff000000           mov eax, 0xff
// 005800e9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005800ed  c1e108               shl ecx, 8
// 005800f0  0bc8                 or ecx, eax
// 005800f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005800f6  83c008               add eax, 8
// 005800f9  83f819               cmp eax, 0x19
// 005800fc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00580100  8944241c             mov dword ptr [esp + 0x1c], eax
// 00580104  7c8a                 jl 0x580090
// 00580106  eb58                 jmp 0x580160
// 00580108  5f                   pop edi
// 00580109  5e                   pop esi
// 0058010a  5d                   pop ebp
// 0058010b  32c0                 xor al, al
// 0058010d  5b                   pop ebx
// 0058010e  c3                   ret 
// 0058010f  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 00580115  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00580119  39542420             cmp dword ptr [esp + 0x20], edx
// 0058011d  7e41                 jle 0x580160
// 0058011f  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 00580125  80780800             cmp byte ptr [eax + 8], 0
// 00580129  7520                 jne 0x58014b
// 0058012b  8b0b                 mov ecx, dword ptr [ebx]
// 0058012d  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 00580134  8b13                 mov edx, dword ptr [ebx]
// 00580136  8b4204               mov eax, dword ptr [edx + 4]
// 00580139  6aff                 push -1
// 0058013b  53                   push ebx
// 0058013c  ffd0                 call eax
// 0058013e  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 00580144  83c408               add esp, 8
// 00580147  c6410801             mov byte ptr [ecx + 8], 1
// 0058014b  b919000000           mov ecx, 0x19
// 00580150  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00580154  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 0058015c  d3642418             shl dword ptr [esp + 0x18], cl
// 00580160  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580164  8b542418             mov edx, dword ptr [esp + 0x18]
// 00580168  897d04               mov dword ptr [ebp + 4], edi
// 0058016b  5f                   pop edi
// 0058016c  897500               mov dword ptr [ebp], esi
// 0058016f  5e                   pop esi
// 00580170  89450c               mov dword ptr [ebp + 0xc], eax
// 00580173  895508               mov dword ptr [ebp + 8], edx
// 00580176  5d                   pop ebp
// 00580177  b001                 mov al, 1
// 00580179  5b                   pop ebx
// 0058017a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
