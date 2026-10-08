// roc 2007-08 005b30c0  unit: RBX::Assembly  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b30c0
//
// 005b30c0  56                   push esi
// 005b30c1  8bf1                 mov esi, ecx
// 005b30c3  833e00               cmp dword ptr [esi], 0
// 005b30c6  57                   push edi
// 005b30c7  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 005b30cd  7502                 jne 0x5b30d1
// 005b30cf  ffd7                 call edi
// 005b30d1  8b4604               mov eax, dword ptr [esi + 4]
// 005b30d4  80781100             cmp byte ptr [eax + 0x11], 0
// 005b30d8  7411                 je 0x5b30eb
// 005b30da  8b4008               mov eax, dword ptr [eax + 8]
// 005b30dd  894604               mov dword ptr [esi + 4], eax
// 005b30e0  80781100             cmp byte ptr [eax + 0x11], 0
// 005b30e4  745b                 je 0x5b3141
// 005b30e6  ffd7                 call edi
// 005b30e8  5f                   pop edi
// 005b30e9  5e                   pop esi
// 005b30ea  c3                   ret 
// 005b30eb  8b08                 mov ecx, dword ptr [eax]
// 005b30ed  80791100             cmp byte ptr [ecx + 0x11], 0
// 005b30f1  751e                 jne 0x5b3111
// 005b30f3  8b4108               mov eax, dword ptr [ecx + 8]
// 005b30f6  80781100             cmp byte ptr [eax + 0x11], 0
// 005b30fa  750f                 jne 0x5b310b
// 005b30fc  8d642400             lea esp, [esp]
// 005b3100  8bc8                 mov ecx, eax
// 005b3102  8b4108               mov eax, dword ptr [ecx + 8]
// 005b3105  80781100             cmp byte ptr [eax + 0x11], 0
// 005b3109  74f5                 je 0x5b3100
// 005b310b  5f                   pop edi
// 005b310c  894e04               mov dword ptr [esi + 4], ecx
// 005b310f  5e                   pop esi
// 005b3110  c3                   ret 
// 005b3111  8b4004               mov eax, dword ptr [eax + 4]
// 005b3114  80781100             cmp byte ptr [eax + 0x11], 0
// 005b3118  751b                 jne 0x5b3135
// 005b311a  8d9b00000000         lea ebx, [ebx]
// 005b3120  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b3123  3b08                 cmp ecx, dword ptr [eax]
// 005b3125  750e                 jne 0x5b3135
// 005b3127  894604               mov dword ptr [esi + 4], eax
// 005b312a  8bd0                 mov edx, eax
// 005b312c  8b4204               mov eax, dword ptr [edx + 4]
// 005b312f  80781100             cmp byte ptr [eax + 0x11], 0
// 005b3133  74eb                 je 0x5b3120
// 005b3135  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b3138  80791100             cmp byte ptr [ecx + 0x11], 0
// 005b313c  75a8                 jne 0x5b30e6
// 005b313e  894604               mov dword ptr [esi + 4], eax
// 005b3141  5f                   pop edi
// 005b3142  5e                   pop esi
// 005b3143  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
