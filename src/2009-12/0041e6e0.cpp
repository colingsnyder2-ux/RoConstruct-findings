// roc 2009-12 0041e6e0  unit: CSelectionTreeCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041e6e0
//
// 0041e6e0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0041e6e3  8b4204               mov eax, dword ptr [edx + 4]
// 0041e6e6  80781100             cmp byte ptr [eax + 0x11], 0
// 0041e6ea  53                   push ebx
// 0041e6eb  55                   push ebp
// 0041e6ec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0041e6f0  56                   push esi
// 0041e6f1  8bda                 mov ebx, edx
// 0041e6f3  752e                 jne 0x41e723
// 0041e6f5  57                   push edi
// 0041e6f6  8b7d00               mov edi, dword ptr [ebp]
// 0041e6f9  8da42400000000       lea esp, [esp]
// 0041e700  8b700c               mov esi, dword ptr [eax + 0xc]
// 0041e703  3bf7                 cmp esi, edi
// 0041e705  7305                 jae 0x41e70c
// 0041e707  8b4008               mov eax, dword ptr [eax + 8]
// 0041e70a  eb10                 jmp 0x41e71c
// 0041e70c  807a1100             cmp byte ptr [edx + 0x11], 0
// 0041e710  7406                 je 0x41e718
// 0041e712  3bfe                 cmp edi, esi
// 0041e714  7302                 jae 0x41e718
// 0041e716  8bd0                 mov edx, eax
// 0041e718  8bd8                 mov ebx, eax
// 0041e71a  8b00                 mov eax, dword ptr [eax]
// 0041e71c  80781100             cmp byte ptr [eax + 0x11], 0
// 0041e720  74de                 je 0x41e700
// 0041e722  5f                   pop edi
// 0041e723  807a1100             cmp byte ptr [edx + 0x11], 0
// 0041e727  7408                 je 0x41e731
// 0041e729  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0041e72c  8b4004               mov eax, dword ptr [eax + 4]
// 0041e72f  eb02                 jmp 0x41e733
// 0041e731  8b02                 mov eax, dword ptr [edx]
// 0041e733  80781100             cmp byte ptr [eax + 0x11], 0
// 0041e737  751b                 jne 0x41e754
// 0041e739  8b7500               mov esi, dword ptr [ebp]
// 0041e73c  8d642400             lea esp, [esp]
// 0041e740  3b700c               cmp esi, dword ptr [eax + 0xc]
// 0041e743  7306                 jae 0x41e74b
// 0041e745  8bd0                 mov edx, eax
// 0041e747  8b00                 mov eax, dword ptr [eax]
// 0041e749  eb03                 jmp 0x41e74e
// 0041e74b  8b4008               mov eax, dword ptr [eax + 8]
// 0041e74e  80781100             cmp byte ptr [eax + 0x11], 0
// 0041e752  74ec                 je 0x41e740
// 0041e754  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041e758  8b09                 mov ecx, dword ptr [ecx]
// 0041e75a  5e                   pop esi
// 0041e75b  5d                   pop ebp
// 0041e75c  895804               mov dword ptr [eax + 4], ebx
// 0041e75f  8908                 mov dword ptr [eax], ecx
// 0041e761  894808               mov dword ptr [eax + 8], ecx
// 0041e764  89500c               mov dword ptr [eax + 0xc], edx
// 0041e767  5b                   pop ebx
// 0041e768  c20800               ret 8
// library rbxgs/v8world\Assembly.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@V123@@2@ABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
