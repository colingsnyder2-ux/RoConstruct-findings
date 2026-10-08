// roc 2007-03 005abdf0  unit: seg_005a0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abdf0
//
// 005abdf0  56                   push esi
// 005abdf1  8bf1                 mov esi, ecx
// 005abdf3  833e00               cmp dword ptr [esi], 0
// 005abdf6  57                   push edi
// 005abdf7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 005abdfd  7502                 jne 0x5abe01
// 005abdff  ffd7                 call edi
// 005abe01  8b4604               mov eax, dword ptr [esi + 4]
// 005abe04  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe08  7411                 je 0x5abe1b
// 005abe0a  8b4008               mov eax, dword ptr [eax + 8]
// 005abe0d  894604               mov dword ptr [esi + 4], eax
// 005abe10  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe14  745b                 je 0x5abe71
// 005abe16  ffd7                 call edi
// 005abe18  5f                   pop edi
// 005abe19  5e                   pop esi
// 005abe1a  c3                   ret 
// 005abe1b  8b08                 mov ecx, dword ptr [eax]
// 005abe1d  80791100             cmp byte ptr [ecx + 0x11], 0
// 005abe21  751e                 jne 0x5abe41
// 005abe23  8b4108               mov eax, dword ptr [ecx + 8]
// 005abe26  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe2a  750f                 jne 0x5abe3b
// 005abe2c  8d642400             lea esp, [esp]
// 005abe30  8bc8                 mov ecx, eax
// 005abe32  8b4108               mov eax, dword ptr [ecx + 8]
// 005abe35  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe39  74f5                 je 0x5abe30
// 005abe3b  5f                   pop edi
// 005abe3c  894e04               mov dword ptr [esi + 4], ecx
// 005abe3f  5e                   pop esi
// 005abe40  c3                   ret 
// 005abe41  8b4004               mov eax, dword ptr [eax + 4]
// 005abe44  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe48  751b                 jne 0x5abe65
// 005abe4a  8d9b00000000         lea ebx, [ebx]
// 005abe50  8b4e04               mov ecx, dword ptr [esi + 4]
// 005abe53  3b08                 cmp ecx, dword ptr [eax]
// 005abe55  750e                 jne 0x5abe65
// 005abe57  894604               mov dword ptr [esi + 4], eax
// 005abe5a  8bd0                 mov edx, eax
// 005abe5c  8b4204               mov eax, dword ptr [edx + 4]
// 005abe5f  80781100             cmp byte ptr [eax + 0x11], 0
// 005abe63  74eb                 je 0x5abe50
// 005abe65  8b4e04               mov ecx, dword ptr [esi + 4]
// 005abe68  80791100             cmp byte ptr [ecx + 0x11], 0
// 005abe6c  75a8                 jne 0x5abe16
// 005abe6e  894604               mov dword ptr [esi + 4], eax
// 005abe71  5f                   pop edi
// 005abe72  5e                   pop esi
// 005abe73  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
