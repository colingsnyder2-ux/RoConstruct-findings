// roc 2008-06 004ad8b0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad8b0
//
// 004ad8b0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004ad8b3  8b4204               mov eax, dword ptr [edx + 4]
// 004ad8b6  80781100             cmp byte ptr [eax + 0x11], 0
// 004ad8ba  53                   push ebx
// 004ad8bb  55                   push ebp
// 004ad8bc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004ad8c0  56                   push esi
// 004ad8c1  8bda                 mov ebx, edx
// 004ad8c3  752e                 jne 0x4ad8f3
// 004ad8c5  57                   push edi
// 004ad8c6  8b7d00               mov edi, dword ptr [ebp]
// 004ad8c9  8da42400000000       lea esp, [esp]
// 004ad8d0  8b700c               mov esi, dword ptr [eax + 0xc]
// 004ad8d3  3bf7                 cmp esi, edi
// 004ad8d5  7305                 jae 0x4ad8dc
// 004ad8d7  8b4008               mov eax, dword ptr [eax + 8]
// 004ad8da  eb10                 jmp 0x4ad8ec
// 004ad8dc  807a1100             cmp byte ptr [edx + 0x11], 0
// 004ad8e0  7406                 je 0x4ad8e8
// 004ad8e2  3bfe                 cmp edi, esi
// 004ad8e4  7302                 jae 0x4ad8e8
// 004ad8e6  8bd0                 mov edx, eax
// 004ad8e8  8bd8                 mov ebx, eax
// 004ad8ea  8b00                 mov eax, dword ptr [eax]
// 004ad8ec  80781100             cmp byte ptr [eax + 0x11], 0
// 004ad8f0  74de                 je 0x4ad8d0
// 004ad8f2  5f                   pop edi
// 004ad8f3  807a1100             cmp byte ptr [edx + 0x11], 0
// 004ad8f7  7408                 je 0x4ad901
// 004ad8f9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004ad8fc  8b4004               mov eax, dword ptr [eax + 4]
// 004ad8ff  eb02                 jmp 0x4ad903
// 004ad901  8b02                 mov eax, dword ptr [edx]
// 004ad903  80781100             cmp byte ptr [eax + 0x11], 0
// 004ad907  751b                 jne 0x4ad924
// 004ad909  8b7500               mov esi, dword ptr [ebp]
// 004ad90c  8d642400             lea esp, [esp]
// 004ad910  3b700c               cmp esi, dword ptr [eax + 0xc]
// 004ad913  7306                 jae 0x4ad91b
// 004ad915  8bd0                 mov edx, eax
// 004ad917  8b00                 mov eax, dword ptr [eax]
// 004ad919  eb03                 jmp 0x4ad91e
// 004ad91b  8b4008               mov eax, dword ptr [eax + 8]
// 004ad91e  80781100             cmp byte ptr [eax + 0x11], 0
// 004ad922  74ec                 je 0x4ad910
// 004ad924  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad928  8b09                 mov ecx, dword ptr [ecx]
// 004ad92a  5e                   pop esi
// 004ad92b  5d                   pop ebp
// 004ad92c  895804               mov dword ptr [eax + 4], ebx
// 004ad92f  8908                 mov dword ptr [eax], ecx
// 004ad931  894808               mov dword ptr [eax + 8], ecx
// 004ad934  89500c               mov dword ptr [eax + 0xc], edx
// 004ad937  5b                   pop ebx
// 004ad938  c20800               ret 8
// library rbxgs/v8world\Assembly.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@V123@@2@ABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
