// roc 2010-06 004020f0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004020f0
//
// 004020f0  56                   push esi
// 004020f1  8bf1                 mov esi, ecx
// 004020f3  833e00               cmp dword ptr [esi], 0
// 004020f6  57                   push edi
// 004020f7  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 004020fd  7502                 jne 0x402101
// 004020ff  ffd7                 call edi
// 00402101  8b4604               mov eax, dword ptr [esi + 4]
// 00402104  80781100             cmp byte ptr [eax + 0x11], 0
// 00402108  7411                 je 0x40211b
// 0040210a  8b4008               mov eax, dword ptr [eax + 8]
// 0040210d  894604               mov dword ptr [esi + 4], eax
// 00402110  80781100             cmp byte ptr [eax + 0x11], 0
// 00402114  745b                 je 0x402171
// 00402116  ffd7                 call edi
// 00402118  5f                   pop edi
// 00402119  5e                   pop esi
// 0040211a  c3                   ret 
// 0040211b  8b08                 mov ecx, dword ptr [eax]
// 0040211d  80791100             cmp byte ptr [ecx + 0x11], 0
// 00402121  751e                 jne 0x402141
// 00402123  8b4108               mov eax, dword ptr [ecx + 8]
// 00402126  80781100             cmp byte ptr [eax + 0x11], 0
// 0040212a  750f                 jne 0x40213b
// 0040212c  8d642400             lea esp, [esp]
// 00402130  8bc8                 mov ecx, eax
// 00402132  8b4108               mov eax, dword ptr [ecx + 8]
// 00402135  80781100             cmp byte ptr [eax + 0x11], 0
// 00402139  74f5                 je 0x402130
// 0040213b  5f                   pop edi
// 0040213c  894e04               mov dword ptr [esi + 4], ecx
// 0040213f  5e                   pop esi
// 00402140  c3                   ret 
// 00402141  8b4004               mov eax, dword ptr [eax + 4]
// 00402144  80781100             cmp byte ptr [eax + 0x11], 0
// 00402148  751b                 jne 0x402165
// 0040214a  8d9b00000000         lea ebx, [ebx]
// 00402150  8b4e04               mov ecx, dword ptr [esi + 4]
// 00402153  3b08                 cmp ecx, dword ptr [eax]
// 00402155  750e                 jne 0x402165
// 00402157  894604               mov dword ptr [esi + 4], eax
// 0040215a  8bd0                 mov edx, eax
// 0040215c  8b4204               mov eax, dword ptr [edx + 4]
// 0040215f  80781100             cmp byte ptr [eax + 0x11], 0
// 00402163  74eb                 je 0x402150
// 00402165  8b4e04               mov ecx, dword ptr [esi + 4]
// 00402168  80791100             cmp byte ptr [ecx + 0x11], 0
// 0040216c  75a8                 jne 0x402116
// 0040216e  894604               mov dword ptr [esi + 4], eax
// 00402171  5f                   pop edi
// 00402172  5e                   pop esi
// 00402173  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
