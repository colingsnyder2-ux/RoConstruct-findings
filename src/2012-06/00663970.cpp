// from server: 100% by auto
// roc 2012-06 00663970  unit: seg_00660000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663970
//
// 00663970  83ec10               sub esp, 0x10
// 00663973  8b442420             mov eax, dword ptr [esp + 0x20]
// 00663977  8b08                 mov ecx, dword ptr [eax]
// 00663979  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066397d  33c0                 xor eax, eax
// 0066397f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00663985  894c240c             mov dword ptr [esp + 0xc], ecx
// 00663989  0f8e02010000         jle 0x663a91
// 0066398f  53                   push ebx
// 00663990  55                   push ebp
// 00663991  56                   push esi
// 00663992  8b742428             mov esi, dword ptr [esp + 0x28]
// 00663996  57                   push edi
// 00663997  89742430             mov dword ptr [esp + 0x30], esi
// 0066399b  eb03                 jmp 0x6639a0
// 0066399d  8d4900               lea ecx, [ecx]
// 006639a0  33c9                 xor ecx, ecx
// 006639a2  894c2414             mov dword ptr [esp + 0x14], ecx
// 006639a6  8b2e                 mov ebp, dword ptr [esi]
// 006639a8  85c9                 test ecx, ecx
// 006639aa  7505                 jne 0x6639b1
// 006639ac  8b7efc               mov edi, dword ptr [esi - 4]
// 006639af  eb03                 jmp 0x6639b4
// 006639b1  8b7e04               mov edi, dword ptr [esi + 4]
// 006639b4  0fb67500             movzx esi, byte ptr [ebp]
// 006639b8  0fb617               movzx edx, byte ptr [edi]
// 006639bb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006639bf  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006639c2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006639c6  40                   inc eax
// 006639c7  45                   inc ebp
// 006639c8  89442418             mov dword ptr [esp + 0x18], eax
// 006639cc  0fb64500             movzx eax, byte ptr [ebp]
// 006639d0  8d3476               lea esi, [esi + esi*2]
// 006639d3  03f2                 add esi, edx
// 006639d5  0fb65701             movzx edx, byte ptr [edi + 1]
// 006639d9  47                   inc edi
// 006639da  8d0440               lea eax, [eax + eax*2]
// 006639dd  03c2                 add eax, edx
// 006639df  8d14b508000000       lea edx, [esi*4 + 8]
// 006639e6  c1fa04               sar edx, 4
// 006639e9  8811                 mov byte ptr [ecx], dl
// 006639eb  8d1470               lea edx, [eax + esi*2]
// 006639ee  8d541607             lea edx, [esi + edx + 7]
// 006639f2  41                   inc ecx
// 006639f3  c1fa04               sar edx, 4
// 006639f6  8811                 mov byte ptr [ecx], dl
// 006639f8  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 006639fb  47                   inc edi
// 006639fc  45                   inc ebp
// 006639fd  41                   inc ecx
// 006639fe  83eb02               sub ebx, 2
// 00663a01  8bd6                 mov edx, esi
// 00663a03  8bf0                 mov esi, eax
// 00663a05  895c2410             mov dword ptr [esp + 0x10], ebx
// 00663a09  7438                 je 0x663a43
// 00663a0b  eb03                 jmp 0x663a10
// 00663a0d  8d4900               lea ecx, [ecx]
// 00663a10  0fb64500             movzx eax, byte ptr [ebp]
// 00663a14  0fb61f               movzx ebx, byte ptr [edi]
// 00663a17  8d0440               lea eax, [eax + eax*2]
// 00663a1a  03c3                 add eax, ebx
// 00663a1c  8d1c76               lea ebx, [esi + esi*2]
// 00663a1f  8d541308             lea edx, [ebx + edx + 8]
// 00663a23  c1fa04               sar edx, 4
// 00663a26  8811                 mov byte ptr [ecx], dl
// 00663a28  8d1476               lea edx, [esi + esi*2]
// 00663a2b  8d540207             lea edx, [edx + eax + 7]
// 00663a2f  41                   inc ecx
// 00663a30  c1fa04               sar edx, 4
// 00663a33  8811                 mov byte ptr [ecx], dl
// 00663a35  47                   inc edi
// 00663a36  45                   inc ebp
// 00663a37  41                   inc ecx
// 00663a38  836c241001           sub dword ptr [esp + 0x10], 1
// 00663a3d  8bd6                 mov edx, esi
// 00663a3f  8bf0                 mov esi, eax
// 00663a41  75cd                 jne 0x663a10
// 00663a43  8b742430             mov esi, dword ptr [esp + 0x30]
// 00663a47  8d1442               lea edx, [edx + eax*2]
// 00663a4a  8d541008             lea edx, [eax + edx + 8]
// 00663a4e  8d048507000000       lea eax, [eax*4 + 7]
// 00663a55  c1fa04               sar edx, 4
// 00663a58  c1f804               sar eax, 4
// 00663a5b  8811                 mov byte ptr [ecx], dl
// 00663a5d  884101               mov byte ptr [ecx + 1], al
// 00663a60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00663a64  8b442418             mov eax, dword ptr [esp + 0x18]
// 00663a68  41                   inc ecx
// 00663a69  83f902               cmp ecx, 2
// 00663a6c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00663a70  0f8c30ffffff         jl 0x6639a6
// 00663a76  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663a7a  83c604               add esi, 4
// 00663a7d  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 00663a83  89742430             mov dword ptr [esp + 0x30], esi
// 00663a87  0f8c13ffffff         jl 0x6639a0
// 00663a8d  5f                   pop edi
// 00663a8e  5e                   pop esi
// 00663a8f  5d                   pop ebp
// 00663a90  5b                   pop ebx
// 00663a91  83c410               add esp, 0x10
// 00663a94  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
