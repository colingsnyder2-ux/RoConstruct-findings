// roc 2007-03 0049bec0  unit: seg_00490000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bec0
//
// 0049bec0  56                   push esi
// 0049bec1  8bf1                 mov esi, ecx
// 0049bec3  833e00               cmp dword ptr [esi], 0
// 0049bec6  57                   push edi
// 0049bec7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 0049becd  7502                 jne 0x49bed1
// 0049becf  ffd7                 call edi
// 0049bed1  8b4604               mov eax, dword ptr [esi + 4]
// 0049bed4  80781100             cmp byte ptr [eax + 0x11], 0
// 0049bed8  7405                 je 0x49bedf
// 0049beda  ffd7                 call edi
// 0049bedc  5f                   pop edi
// 0049bedd  5e                   pop esi
// 0049bede  c3                   ret 
// 0049bedf  8b4808               mov ecx, dword ptr [eax + 8]
// 0049bee2  80791100             cmp byte ptr [ecx + 0x11], 0
// 0049bee6  7518                 jne 0x49bf00
// 0049bee8  8b01                 mov eax, dword ptr [ecx]
// 0049beea  80781100             cmp byte ptr [eax + 0x11], 0
// 0049beee  750a                 jne 0x49befa
// 0049bef0  8bc8                 mov ecx, eax
// 0049bef2  8b01                 mov eax, dword ptr [ecx]
// 0049bef4  80781100             cmp byte ptr [eax + 0x11], 0
// 0049bef8  74f6                 je 0x49bef0
// 0049befa  5f                   pop edi
// 0049befb  894e04               mov dword ptr [esi + 4], ecx
// 0049befe  5e                   pop esi
// 0049beff  c3                   ret 
// 0049bf00  8b4004               mov eax, dword ptr [eax + 4]
// 0049bf03  80781100             cmp byte ptr [eax + 0x11], 0
// 0049bf07  751d                 jne 0x49bf26
// 0049bf09  8da42400000000       lea esp, [esp]
// 0049bf10  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049bf13  3b4808               cmp ecx, dword ptr [eax + 8]
// 0049bf16  750e                 jne 0x49bf26
// 0049bf18  894604               mov dword ptr [esi + 4], eax
// 0049bf1b  8bd0                 mov edx, eax
// 0049bf1d  8b4204               mov eax, dword ptr [edx + 4]
// 0049bf20  80781100             cmp byte ptr [eax + 0x11], 0
// 0049bf24  74ea                 je 0x49bf10
// 0049bf26  5f                   pop edi
// 0049bf27  894604               mov dword ptr [esi + 4], eax
// 0049bf2a  5e                   pop esi
// 0049bf2b  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
