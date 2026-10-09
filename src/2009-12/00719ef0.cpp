// roc 2009-12 00719ef0  unit: RBX::VPhysicsService::?$EventDesc  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719ef0
//
// 00719ef0  56                   push esi
// 00719ef1  8bf1                 mov esi, ecx
// 00719ef3  833e00               cmp dword ptr [esi], 0
// 00719ef6  57                   push edi
// 00719ef7  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 00719efd  7502                 jne 0x719f01
// 00719eff  ffd7                 call edi
// 00719f01  8b4604               mov eax, dword ptr [esi + 4]
// 00719f04  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f08  7411                 je 0x719f1b
// 00719f0a  8b4008               mov eax, dword ptr [eax + 8]
// 00719f0d  894604               mov dword ptr [esi + 4], eax
// 00719f10  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f14  745b                 je 0x719f71
// 00719f16  ffd7                 call edi
// 00719f18  5f                   pop edi
// 00719f19  5e                   pop esi
// 00719f1a  c3                   ret 
// 00719f1b  8b08                 mov ecx, dword ptr [eax]
// 00719f1d  80791100             cmp byte ptr [ecx + 0x11], 0
// 00719f21  751e                 jne 0x719f41
// 00719f23  8b4108               mov eax, dword ptr [ecx + 8]
// 00719f26  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f2a  750f                 jne 0x719f3b
// 00719f2c  8d642400             lea esp, [esp]
// 00719f30  8bc8                 mov ecx, eax
// 00719f32  8b4108               mov eax, dword ptr [ecx + 8]
// 00719f35  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f39  74f5                 je 0x719f30
// 00719f3b  5f                   pop edi
// 00719f3c  894e04               mov dword ptr [esi + 4], ecx
// 00719f3f  5e                   pop esi
// 00719f40  c3                   ret 
// 00719f41  8b4004               mov eax, dword ptr [eax + 4]
// 00719f44  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f48  751b                 jne 0x719f65
// 00719f4a  8d9b00000000         lea ebx, [ebx]
// 00719f50  8b4e04               mov ecx, dword ptr [esi + 4]
// 00719f53  3b08                 cmp ecx, dword ptr [eax]
// 00719f55  750e                 jne 0x719f65
// 00719f57  894604               mov dword ptr [esi + 4], eax
// 00719f5a  8bd0                 mov edx, eax
// 00719f5c  8b4204               mov eax, dword ptr [edx + 4]
// 00719f5f  80781100             cmp byte ptr [eax + 0x11], 0
// 00719f63  74eb                 je 0x719f50
// 00719f65  8b4e04               mov ecx, dword ptr [esi + 4]
// 00719f68  80791100             cmp byte ptr [ecx + 0x11], 0
// 00719f6c  75a8                 jne 0x719f16
// 00719f6e  894604               mov dword ptr [esi + 4], eax
// 00719f71  5f                   pop edi
// 00719f72  5e                   pop esi
// 00719f73  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
