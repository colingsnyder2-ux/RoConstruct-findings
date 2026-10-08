// from server: 100% by auto
// roc 2009-06 0059e420  unit: seg_00590000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e420
//
// 0059e420  83ec10               sub esp, 0x10
// 0059e423  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e427  8b08                 mov ecx, dword ptr [eax]
// 0059e429  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e42d  33c0                 xor eax, eax
// 0059e42f  398214010000         cmp dword ptr [edx + 0x114], eax
// 0059e435  894c240c             mov dword ptr [esp + 0xc], ecx
// 0059e439  0f8e02010000         jle 0x59e541
// 0059e43f  53                   push ebx
// 0059e440  55                   push ebp
// 0059e441  56                   push esi
// 0059e442  8b742428             mov esi, dword ptr [esp + 0x28]
// 0059e446  57                   push edi
// 0059e447  89742430             mov dword ptr [esp + 0x30], esi
// 0059e44b  eb03                 jmp 0x59e450
// 0059e44d  8d4900               lea ecx, [ecx]
// 0059e450  33c9                 xor ecx, ecx
// 0059e452  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059e456  8b2e                 mov ebp, dword ptr [esi]
// 0059e458  85c9                 test ecx, ecx
// 0059e45a  7505                 jne 0x59e461
// 0059e45c  8b7efc               mov edi, dword ptr [esi - 4]
// 0059e45f  eb03                 jmp 0x59e464
// 0059e461  8b7e04               mov edi, dword ptr [esi + 4]
// 0059e464  0fb67500             movzx esi, byte ptr [ebp]
// 0059e468  0fb617               movzx edx, byte ptr [edi]
// 0059e46b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059e46f  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0059e472  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0059e476  40                   inc eax
// 0059e477  45                   inc ebp
// 0059e478  89442418             mov dword ptr [esp + 0x18], eax
// 0059e47c  0fb64500             movzx eax, byte ptr [ebp]
// 0059e480  8d3476               lea esi, [esi + esi*2]
// 0059e483  03f2                 add esi, edx
// 0059e485  0fb65701             movzx edx, byte ptr [edi + 1]
// 0059e489  47                   inc edi
// 0059e48a  8d0440               lea eax, [eax + eax*2]
// 0059e48d  03c2                 add eax, edx
// 0059e48f  8d14b508000000       lea edx, [esi*4 + 8]
// 0059e496  c1fa04               sar edx, 4
// 0059e499  8811                 mov byte ptr [ecx], dl
// 0059e49b  8d1470               lea edx, [eax + esi*2]
// 0059e49e  8d541607             lea edx, [esi + edx + 7]
// 0059e4a2  41                   inc ecx
// 0059e4a3  c1fa04               sar edx, 4
// 0059e4a6  8811                 mov byte ptr [ecx], dl
// 0059e4a8  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 0059e4ab  47                   inc edi
// 0059e4ac  45                   inc ebp
// 0059e4ad  41                   inc ecx
// 0059e4ae  83eb02               sub ebx, 2
// 0059e4b1  8bd6                 mov edx, esi
// 0059e4b3  8bf0                 mov esi, eax
// 0059e4b5  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059e4b9  7438                 je 0x59e4f3
// 0059e4bb  eb03                 jmp 0x59e4c0
// 0059e4bd  8d4900               lea ecx, [ecx]
// 0059e4c0  0fb64500             movzx eax, byte ptr [ebp]
// 0059e4c4  0fb61f               movzx ebx, byte ptr [edi]
// 0059e4c7  8d0440               lea eax, [eax + eax*2]
// 0059e4ca  03c3                 add eax, ebx
// 0059e4cc  8d1c76               lea ebx, [esi + esi*2]
// 0059e4cf  8d541308             lea edx, [ebx + edx + 8]
// 0059e4d3  c1fa04               sar edx, 4
// 0059e4d6  8811                 mov byte ptr [ecx], dl
// 0059e4d8  8d1476               lea edx, [esi + esi*2]
// 0059e4db  8d540207             lea edx, [edx + eax + 7]
// 0059e4df  41                   inc ecx
// 0059e4e0  c1fa04               sar edx, 4
// 0059e4e3  8811                 mov byte ptr [ecx], dl
// 0059e4e5  47                   inc edi
// 0059e4e6  45                   inc ebp
// 0059e4e7  41                   inc ecx
// 0059e4e8  836c241001           sub dword ptr [esp + 0x10], 1
// 0059e4ed  8bd6                 mov edx, esi
// 0059e4ef  8bf0                 mov esi, eax
// 0059e4f1  75cd                 jne 0x59e4c0
// 0059e4f3  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059e4f7  8d1442               lea edx, [edx + eax*2]
// 0059e4fa  8d541008             lea edx, [eax + edx + 8]
// 0059e4fe  8d048507000000       lea eax, [eax*4 + 7]
// 0059e505  c1fa04               sar edx, 4
// 0059e508  c1f804               sar eax, 4
// 0059e50b  8811                 mov byte ptr [ecx], dl
// 0059e50d  884101               mov byte ptr [ecx + 1], al
// 0059e510  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059e514  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059e518  41                   inc ecx
// 0059e519  83f902               cmp ecx, 2
// 0059e51c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059e520  0f8c30ffffff         jl 0x59e456
// 0059e526  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059e52a  83c604               add esi, 4
// 0059e52d  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 0059e533  89742430             mov dword ptr [esp + 0x30], esi
// 0059e537  0f8c13ffffff         jl 0x59e450
// 0059e53d  5f                   pop edi
// 0059e53e  5e                   pop esi
// 0059e53f  5d                   pop ebp
// 0059e540  5b                   pop ebx
// 0059e541  83c410               add esp, 0x10
// 0059e544  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
