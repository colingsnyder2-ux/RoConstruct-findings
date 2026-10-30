// roc 2009-12 00620450  unit: seg_00620000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620450
//
// 00620450  83ec10               sub esp, 0x10
// 00620453  8b442420             mov eax, dword ptr [esp + 0x20]
// 00620457  8b08                 mov ecx, dword ptr [eax]
// 00620459  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062045d  33c0                 xor eax, eax
// 0062045f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00620465  894c240c             mov dword ptr [esp + 0xc], ecx
// 00620469  0f8e02010000         jle 0x620571
// 0062046f  53                   push ebx
// 00620470  55                   push ebp
// 00620471  56                   push esi
// 00620472  8b742428             mov esi, dword ptr [esp + 0x28]
// 00620476  57                   push edi
// 00620477  89742430             mov dword ptr [esp + 0x30], esi
// 0062047b  eb03                 jmp 0x620480
// 0062047d  8d4900               lea ecx, [ecx]
// 00620480  33c9                 xor ecx, ecx
// 00620482  894c2414             mov dword ptr [esp + 0x14], ecx
// 00620486  8b2e                 mov ebp, dword ptr [esi]
// 00620488  85c9                 test ecx, ecx
// 0062048a  7505                 jne 0x620491
// 0062048c  8b7efc               mov edi, dword ptr [esi - 4]
// 0062048f  eb03                 jmp 0x620494
// 00620491  8b7e04               mov edi, dword ptr [esi + 4]
// 00620494  0fb67500             movzx esi, byte ptr [ebp]
// 00620498  0fb617               movzx edx, byte ptr [edi]
// 0062049b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062049f  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006204a2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006204a6  40                   inc eax
// 006204a7  45                   inc ebp
// 006204a8  89442418             mov dword ptr [esp + 0x18], eax
// 006204ac  0fb64500             movzx eax, byte ptr [ebp]
// 006204b0  8d3476               lea esi, [esi + esi*2]
// 006204b3  03f2                 add esi, edx
// 006204b5  0fb65701             movzx edx, byte ptr [edi + 1]
// 006204b9  47                   inc edi
// 006204ba  8d0440               lea eax, [eax + eax*2]
// 006204bd  03c2                 add eax, edx
// 006204bf  8d14b508000000       lea edx, [esi*4 + 8]
// 006204c6  c1fa04               sar edx, 4
// 006204c9  8811                 mov byte ptr [ecx], dl
// 006204cb  8d1470               lea edx, [eax + esi*2]
// 006204ce  8d541607             lea edx, [esi + edx + 7]
// 006204d2  41                   inc ecx
// 006204d3  c1fa04               sar edx, 4
// 006204d6  8811                 mov byte ptr [ecx], dl
// 006204d8  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 006204db  47                   inc edi
// 006204dc  45                   inc ebp
// 006204dd  41                   inc ecx
// 006204de  83eb02               sub ebx, 2
// 006204e1  8bd6                 mov edx, esi
// 006204e3  8bf0                 mov esi, eax
// 006204e5  895c2410             mov dword ptr [esp + 0x10], ebx
// 006204e9  7438                 je 0x620523
// 006204eb  eb03                 jmp 0x6204f0
// 006204ed  8d4900               lea ecx, [ecx]
// 006204f0  0fb64500             movzx eax, byte ptr [ebp]
// 006204f4  0fb61f               movzx ebx, byte ptr [edi]
// 006204f7  8d0440               lea eax, [eax + eax*2]
// 006204fa  03c3                 add eax, ebx
// 006204fc  8d1c76               lea ebx, [esi + esi*2]
// 006204ff  8d541308             lea edx, [ebx + edx + 8]
// 00620503  c1fa04               sar edx, 4
// 00620506  8811                 mov byte ptr [ecx], dl
// 00620508  8d1476               lea edx, [esi + esi*2]
// 0062050b  8d540207             lea edx, [edx + eax + 7]
// 0062050f  41                   inc ecx
// 00620510  c1fa04               sar edx, 4
// 00620513  8811                 mov byte ptr [ecx], dl
// 00620515  47                   inc edi
// 00620516  45                   inc ebp
// 00620517  41                   inc ecx
// 00620518  836c241001           sub dword ptr [esp + 0x10], 1
// 0062051d  8bd6                 mov edx, esi
// 0062051f  8bf0                 mov esi, eax
// 00620521  75cd                 jne 0x6204f0
// 00620523  8b742430             mov esi, dword ptr [esp + 0x30]
// 00620527  8d1442               lea edx, [edx + eax*2]
// 0062052a  8d541008             lea edx, [eax + edx + 8]
// 0062052e  8d048507000000       lea eax, [eax*4 + 7]
// 00620535  c1fa04               sar edx, 4
// 00620538  c1f804               sar eax, 4
// 0062053b  8811                 mov byte ptr [ecx], dl
// 0062053d  884101               mov byte ptr [ecx + 1], al
// 00620540  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00620544  8b442418             mov eax, dword ptr [esp + 0x18]
// 00620548  41                   inc ecx
// 00620549  83f902               cmp ecx, 2
// 0062054c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00620550  0f8c30ffffff         jl 0x620486
// 00620556  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062055a  83c604               add esi, 4
// 0062055d  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 00620563  89742430             mov dword ptr [esp + 0x30], esi
// 00620567  0f8c13ffffff         jl 0x620480
// 0062056d  5f                   pop edi
// 0062056e  5e                   pop esi
// 0062056f  5d                   pop ebp
// 00620570  5b                   pop ebx
// 00620571  83c410               add esp, 0x10
// 00620574  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
