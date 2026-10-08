// roc 2010-06 004021d0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004021d0
//
// 004021d0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004021d3  8b4204               mov eax, dword ptr [edx + 4]
// 004021d6  80781100             cmp byte ptr [eax + 0x11], 0
// 004021da  53                   push ebx
// 004021db  55                   push ebp
// 004021dc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004021e0  56                   push esi
// 004021e1  8bda                 mov ebx, edx
// 004021e3  752e                 jne 0x402213
// 004021e5  57                   push edi
// 004021e6  8b7d00               mov edi, dword ptr [ebp]
// 004021e9  8da42400000000       lea esp, [esp]
// 004021f0  8b700c               mov esi, dword ptr [eax + 0xc]
// 004021f3  3bf7                 cmp esi, edi
// 004021f5  7305                 jae 0x4021fc
// 004021f7  8b4008               mov eax, dword ptr [eax + 8]
// 004021fa  eb10                 jmp 0x40220c
// 004021fc  807a1100             cmp byte ptr [edx + 0x11], 0
// 00402200  7406                 je 0x402208
// 00402202  3bfe                 cmp edi, esi
// 00402204  7302                 jae 0x402208
// 00402206  8bd0                 mov edx, eax
// 00402208  8bd8                 mov ebx, eax
// 0040220a  8b00                 mov eax, dword ptr [eax]
// 0040220c  80781100             cmp byte ptr [eax + 0x11], 0
// 00402210  74de                 je 0x4021f0
// 00402212  5f                   pop edi
// 00402213  807a1100             cmp byte ptr [edx + 0x11], 0
// 00402217  7408                 je 0x402221
// 00402219  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0040221c  8b4004               mov eax, dword ptr [eax + 4]
// 0040221f  eb02                 jmp 0x402223
// 00402221  8b02                 mov eax, dword ptr [edx]
// 00402223  80781100             cmp byte ptr [eax + 0x11], 0
// 00402227  751b                 jne 0x402244
// 00402229  8b7500               mov esi, dword ptr [ebp]
// 0040222c  8d642400             lea esp, [esp]
// 00402230  3b700c               cmp esi, dword ptr [eax + 0xc]
// 00402233  7306                 jae 0x40223b
// 00402235  8bd0                 mov edx, eax
// 00402237  8b00                 mov eax, dword ptr [eax]
// 00402239  eb03                 jmp 0x40223e
// 0040223b  8b4008               mov eax, dword ptr [eax + 8]
// 0040223e  80781100             cmp byte ptr [eax + 0x11], 0
// 00402242  74ec                 je 0x402230
// 00402244  8b442410             mov eax, dword ptr [esp + 0x10]
// 00402248  8b09                 mov ecx, dword ptr [ecx]
// 0040224a  5e                   pop esi
// 0040224b  5d                   pop ebp
// 0040224c  895804               mov dword ptr [eax + 4], ebx
// 0040224f  8908                 mov dword ptr [eax], ecx
// 00402251  894808               mov dword ptr [eax + 8], ecx
// 00402254  89500c               mov dword ptr [eax + 0xc], edx
// 00402257  5b                   pop ebx
// 00402258  c20800               ret 8
// library rbxgs/v8world\Assembly.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@V123@@2@ABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
