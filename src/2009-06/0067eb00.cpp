// roc 2009-06 0067eb00  unit: RBX::Mechanism  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067eb00
//
// 0067eb00  56                   push esi
// 0067eb01  8bf1                 mov esi, ecx
// 0067eb03  833e00               cmp dword ptr [esi], 0
// 0067eb06  57                   push edi
// 0067eb07  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 0067eb0d  7502                 jne 0x67eb11
// 0067eb0f  ffd7                 call edi
// 0067eb11  8b4604               mov eax, dword ptr [esi + 4]
// 0067eb14  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb18  7411                 je 0x67eb2b
// 0067eb1a  8b4008               mov eax, dword ptr [eax + 8]
// 0067eb1d  894604               mov dword ptr [esi + 4], eax
// 0067eb20  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb24  745b                 je 0x67eb81
// 0067eb26  ffd7                 call edi
// 0067eb28  5f                   pop edi
// 0067eb29  5e                   pop esi
// 0067eb2a  c3                   ret 
// 0067eb2b  8b08                 mov ecx, dword ptr [eax]
// 0067eb2d  80791100             cmp byte ptr [ecx + 0x11], 0
// 0067eb31  751e                 jne 0x67eb51
// 0067eb33  8b4108               mov eax, dword ptr [ecx + 8]
// 0067eb36  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb3a  750f                 jne 0x67eb4b
// 0067eb3c  8d642400             lea esp, [esp]
// 0067eb40  8bc8                 mov ecx, eax
// 0067eb42  8b4108               mov eax, dword ptr [ecx + 8]
// 0067eb45  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb49  74f5                 je 0x67eb40
// 0067eb4b  5f                   pop edi
// 0067eb4c  894e04               mov dword ptr [esi + 4], ecx
// 0067eb4f  5e                   pop esi
// 0067eb50  c3                   ret 
// 0067eb51  8b4004               mov eax, dword ptr [eax + 4]
// 0067eb54  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb58  751b                 jne 0x67eb75
// 0067eb5a  8d9b00000000         lea ebx, [ebx]
// 0067eb60  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067eb63  3b08                 cmp ecx, dword ptr [eax]
// 0067eb65  750e                 jne 0x67eb75
// 0067eb67  894604               mov dword ptr [esi + 4], eax
// 0067eb6a  8bd0                 mov edx, eax
// 0067eb6c  8b4204               mov eax, dword ptr [edx + 4]
// 0067eb6f  80781100             cmp byte ptr [eax + 0x11], 0
// 0067eb73  74eb                 je 0x67eb60
// 0067eb75  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067eb78  80791100             cmp byte ptr [ecx + 0x11], 0
// 0067eb7c  75a8                 jne 0x67eb26
// 0067eb7e  894604               mov dword ptr [esi + 4], eax
// 0067eb81  5f                   pop edi
// 0067eb82  5e                   pop esi
// 0067eb83  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
