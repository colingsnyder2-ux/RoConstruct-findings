// roc 2007-03 00522c50  unit: seg_00520000  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522c50
//
// 00522c50  83ec10               sub esp, 0x10
// 00522c53  8b442420             mov eax, dword ptr [esp + 0x20]
// 00522c57  8b08                 mov ecx, dword ptr [eax]
// 00522c59  8b542414             mov edx, dword ptr [esp + 0x14]
// 00522c5d  33c0                 xor eax, eax
// 00522c5f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00522c65  894c240c             mov dword ptr [esp + 0xc], ecx
// 00522c69  0f8e1c010000         jle 0x522d8b
// 00522c6f  53                   push ebx
// 00522c70  55                   push ebp
// 00522c71  56                   push esi
// 00522c72  8b742428             mov esi, dword ptr [esp + 0x28]
// 00522c76  57                   push edi
// 00522c77  89742430             mov dword ptr [esp + 0x30], esi
// 00522c7b  eb03                 jmp 0x522c80
// 00522c7d  8d4900               lea ecx, [ecx]
// 00522c80  33c9                 xor ecx, ecx
// 00522c82  894c2414             mov dword ptr [esp + 0x14], ecx
// 00522c86  85c9                 test ecx, ecx
// 00522c88  8b2e                 mov ebp, dword ptr [esi]
// 00522c8a  7505                 jne 0x522c91
// 00522c8c  8b7efc               mov edi, dword ptr [esi - 4]
// 00522c8f  eb03                 jmp 0x522c94
// 00522c91  8b7e04               mov edi, dword ptr [esi + 4]
// 00522c94  0fb67500             movzx esi, byte ptr [ebp]
// 00522c98  0fb617               movzx edx, byte ptr [edi]
// 00522c9b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00522c9f  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00522ca2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00522ca6  83c001               add eax, 1
// 00522ca9  83c501               add ebp, 1
// 00522cac  89442418             mov dword ptr [esp + 0x18], eax
// 00522cb0  0fb64500             movzx eax, byte ptr [ebp]
// 00522cb4  8d3476               lea esi, [esi + esi*2]
// 00522cb7  03f2                 add esi, edx
// 00522cb9  0fb65701             movzx edx, byte ptr [edi + 1]
// 00522cbd  83c701               add edi, 1
// 00522cc0  8d0440               lea eax, [eax + eax*2]
// 00522cc3  03c2                 add eax, edx
// 00522cc5  8d14b508000000       lea edx, [esi*4 + 8]
// 00522ccc  c1fa04               sar edx, 4
// 00522ccf  8811                 mov byte ptr [ecx], dl
// 00522cd1  8d1470               lea edx, [eax + esi*2]
// 00522cd4  8d541607             lea edx, [esi + edx + 7]
// 00522cd8  83c101               add ecx, 1
// 00522cdb  c1fa04               sar edx, 4
// 00522cde  8811                 mov byte ptr [ecx], dl
// 00522ce0  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 00522ce3  83c701               add edi, 1
// 00522ce6  83c501               add ebp, 1
// 00522ce9  83c101               add ecx, 1
// 00522cec  83eb02               sub ebx, 2
// 00522cef  8bd6                 mov edx, esi
// 00522cf1  8bf0                 mov esi, eax
// 00522cf3  895c2410             mov dword ptr [esp + 0x10], ebx
// 00522cf7  7442                 je 0x522d3b
// 00522cf9  8da42400000000       lea esp, [esp]
// 00522d00  0fb64500             movzx eax, byte ptr [ebp]
// 00522d04  0fb61f               movzx ebx, byte ptr [edi]
// 00522d07  8d0440               lea eax, [eax + eax*2]
// 00522d0a  03c3                 add eax, ebx
// 00522d0c  8d1c76               lea ebx, [esi + esi*2]
// 00522d0f  8d541308             lea edx, [ebx + edx + 8]
// 00522d13  c1fa04               sar edx, 4
// 00522d16  8811                 mov byte ptr [ecx], dl
// 00522d18  8d1476               lea edx, [esi + esi*2]
// 00522d1b  8d540207             lea edx, [edx + eax + 7]
// 00522d1f  83c101               add ecx, 1
// 00522d22  c1fa04               sar edx, 4
// 00522d25  8811                 mov byte ptr [ecx], dl
// 00522d27  83c701               add edi, 1
// 00522d2a  83c501               add ebp, 1
// 00522d2d  83c101               add ecx, 1
// 00522d30  836c241001           sub dword ptr [esp + 0x10], 1
// 00522d35  8bd6                 mov edx, esi
// 00522d37  8bf0                 mov esi, eax
// 00522d39  75c5                 jne 0x522d00
// 00522d3b  8b742430             mov esi, dword ptr [esp + 0x30]
// 00522d3f  8d1442               lea edx, [edx + eax*2]
// 00522d42  8d541008             lea edx, [eax + edx + 8]
// 00522d46  8d048507000000       lea eax, [eax*4 + 7]
// 00522d4d  c1fa04               sar edx, 4
// 00522d50  c1f804               sar eax, 4
// 00522d53  8811                 mov byte ptr [ecx], dl
// 00522d55  884101               mov byte ptr [ecx + 1], al
// 00522d58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00522d5c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00522d60  83c101               add ecx, 1
// 00522d63  83f902               cmp ecx, 2
// 00522d66  894c2414             mov dword ptr [esp + 0x14], ecx
// 00522d6a  0f8c16ffffff         jl 0x522c86
// 00522d70  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00522d74  83c604               add esi, 4
// 00522d77  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 00522d7d  89742430             mov dword ptr [esp + 0x30], esi
// 00522d81  0f8cf9feffff         jl 0x522c80
// 00522d87  5f                   pop edi
// 00522d88  5e                   pop esi
// 00522d89  5d                   pop ebp
// 00522d8a  5b                   pop ebx
// 00522d8b  83c410               add esp, 0x10
// 00522d8e  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
