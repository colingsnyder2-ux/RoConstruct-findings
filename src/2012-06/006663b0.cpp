// roc 2012-06 006663b0  unit: seg_00660000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006663b0
//
// 006663b0  83ec38               sub esp, 0x38
// 006663b3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006663b7  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 006663ba  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 006663c0  55                   push ebp
// 006663c1  8b6864               mov ebp, dword ptr [eax + 0x64]
// 006663c4  56                   push esi
// 006663c5  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 006663cb  8b442450             mov eax, dword ptr [esp + 0x50]
// 006663cf  8974240c             mov dword ptr [esp + 0xc], esi
// 006663d3  896c2420             mov dword ptr [esp + 0x20], ebp
// 006663d7  894c2444             mov dword ptr [esp + 0x44], ecx
// 006663db  89542430             mov dword ptr [esp + 0x30], edx
// 006663df  85c0                 test eax, eax
// 006663e1  0f8e63010000         jle 0x66654a
// 006663e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006663eb  53                   push ebx
// 006663ec  57                   push edi
// 006663ed  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006663f1  2bcf                 sub ecx, edi
// 006663f3  897c2418             mov dword ptr [esp + 0x18], edi
// 006663f7  894c2434             mov dword ptr [esp + 0x34], ecx
// 006663fb  89442430             mov dword ptr [esp + 0x30], eax
// 006663ff  90                   nop 
// 00666400  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00666404  8b0f                 mov ecx, dword ptr [edi]
// 00666406  50                   push eax
// 00666407  51                   push ecx
// 00666408  e843d1feff           call 0x653550
// 0066640d  33d2                 xor edx, edx
// 0066640f  83c408               add esp, 8
// 00666412  8954242c             mov dword ptr [esp + 0x2c], edx
// 00666416  85ed                 test ebp, ebp
// 00666418  0f8e0e010000         jle 0x66652c
// 0066641e  8d4e44               lea ecx, [esi + 0x44]
// 00666421  894c2410             mov dword ptr [esp + 0x10], ecx
// 00666425  eb0d                 jmp 0x666434
// 00666427  eb07                 jmp 0x666430
// 00666429  8da42400000000       lea esp, [esp]
// 00666430  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00666434  8b442434             mov eax, dword ptr [esp + 0x34]
// 00666438  8b1c38               mov ebx, dword ptr [eax + edi]
// 0066643b  8b3f                 mov edi, dword ptr [edi]
// 0066643d  8b09                 mov ecx, dword ptr [ecx]
// 0066643f  03da                 add ebx, edx
// 00666441  807e5400             cmp byte ptr [esi + 0x54], 0
// 00666445  741d                 je 0x666464
// 00666447  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0066644b  48                   dec eax
// 0066644c  8bf0                 mov esi, eax
// 0066644e  0faff5               imul esi, ebp
// 00666451  03f8                 add edi, eax
// 00666453  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00666457  03de                 add ebx, esi
// 00666459  83ceff               or esi, 0xffffffff
// 0066645c  f7dd                 neg ebp
// 0066645e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00666462  eb05                 jmp 0x666469
// 00666464  be01000000           mov esi, 1
// 00666469  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066646d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00666471  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00666474  8b4010               mov eax, dword ptr [eax + 0x10]
// 00666477  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0066647b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0066647e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00666482  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00666486  89442440             mov dword ptr [esp + 0x40], eax
// 0066648a  33c0                 xor eax, eax
// 0066648c  89442458             mov dword ptr [esp + 0x58], eax
// 00666490  8944241c             mov dword ptr [esp + 0x1c], eax
// 00666494  896c2424             mov dword ptr [esp + 0x24], ebp
// 00666498  85ed                 test ebp, ebp
// 0066649a  766a                 jbe 0x666506
// 0066649c  8d642400             lea esp, [esp]
// 006664a0  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 006664a4  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 006664a8  8d440208             lea eax, [edx + eax + 8]
// 006664ac  0fb613               movzx edx, byte ptr [ebx]
// 006664af  c1f804               sar eax, 4
// 006664b2  03442438             add eax, dword ptr [esp + 0x38]
// 006664b6  035c2420             add ebx, dword ptr [esp + 0x20]
// 006664ba  0fb60402             movzx eax, byte ptr [edx + eax]
// 006664be  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006664c2  0fb61410             movzx edx, byte ptr [eax + edx]
// 006664c6  0017                 add byte ptr [edi], dl
// 006664c8  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 006664cc  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 006664d0  2bc2                 sub eax, edx
// 006664d2  89442444             mov dword ptr [esp + 0x44], eax
// 006664d6  8d1400               lea edx, [eax + eax]
// 006664d9  03c2                 add eax, edx
// 006664db  03e8                 add ebp, eax
// 006664dd  668929               mov word ptr [ecx], bp
// 006664e0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006664e4  03c2                 add eax, edx
// 006664e6  03e8                 add ebp, eax
// 006664e8  896c2458             mov dword ptr [esp + 0x58], ebp
// 006664ec  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 006664f0  03c2                 add eax, edx
// 006664f2  03fe                 add edi, esi
// 006664f4  836c242401           sub dword ptr [esp + 0x24], 1
// 006664f9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006664fd  8d0c71               lea ecx, [ecx + esi*2]
// 00666500  759e                 jne 0x6664a0
// 00666502  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00666506  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066650a  668b442458           mov ax, word ptr [esp + 0x58]
// 0066650f  8344241004           add dword ptr [esp + 0x10], 4
// 00666514  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00666518  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066651c  42                   inc edx
// 0066651d  3bd5                 cmp edx, ebp
// 0066651f  668901               mov word ptr [ecx], ax
// 00666522  8954242c             mov dword ptr [esp + 0x2c], edx
// 00666526  0f8c04ffffff         jl 0x666430
// 0066652c  807e5400             cmp byte ptr [esi + 0x54], 0
// 00666530  0f94c1               sete cl
// 00666533  83c704               add edi, 4
// 00666536  836c243001           sub dword ptr [esp + 0x30], 1
// 0066653b  884e54               mov byte ptr [esi + 0x54], cl
// 0066653e  897c2418             mov dword ptr [esp + 0x18], edi
// 00666542  0f85b8feffff         jne 0x666400
// 00666548  5f                   pop edi
// 00666549  5b                   pop ebx
// 0066654a  5e                   pop esi
// 0066654b  5d                   pop ebp
// 0066654c  83c438               add esp, 0x38
// 0066654f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
