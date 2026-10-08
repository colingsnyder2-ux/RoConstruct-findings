// roc 2008-06 005e92b0  unit: RBX::PhysicsService  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e92b0
//
// 005e92b0  56                   push esi
// 005e92b1  8bf1                 mov esi, ecx
// 005e92b3  833e00               cmp dword ptr [esi], 0
// 005e92b6  57                   push edi
// 005e92b7  8b3d90288000         mov edi, dword ptr [0x802890]
// 005e92bd  7502                 jne 0x5e92c1
// 005e92bf  ffd7                 call edi
// 005e92c1  8b4604               mov eax, dword ptr [esi + 4]
// 005e92c4  80781100             cmp byte ptr [eax + 0x11], 0
// 005e92c8  7411                 je 0x5e92db
// 005e92ca  8b4008               mov eax, dword ptr [eax + 8]
// 005e92cd  894604               mov dword ptr [esi + 4], eax
// 005e92d0  80781100             cmp byte ptr [eax + 0x11], 0
// 005e92d4  745b                 je 0x5e9331
// 005e92d6  ffd7                 call edi
// 005e92d8  5f                   pop edi
// 005e92d9  5e                   pop esi
// 005e92da  c3                   ret 
// 005e92db  8b08                 mov ecx, dword ptr [eax]
// 005e92dd  80791100             cmp byte ptr [ecx + 0x11], 0
// 005e92e1  751e                 jne 0x5e9301
// 005e92e3  8b4108               mov eax, dword ptr [ecx + 8]
// 005e92e6  80781100             cmp byte ptr [eax + 0x11], 0
// 005e92ea  750f                 jne 0x5e92fb
// 005e92ec  8d642400             lea esp, [esp]
// 005e92f0  8bc8                 mov ecx, eax
// 005e92f2  8b4108               mov eax, dword ptr [ecx + 8]
// 005e92f5  80781100             cmp byte ptr [eax + 0x11], 0
// 005e92f9  74f5                 je 0x5e92f0
// 005e92fb  5f                   pop edi
// 005e92fc  894e04               mov dword ptr [esi + 4], ecx
// 005e92ff  5e                   pop esi
// 005e9300  c3                   ret 
// 005e9301  8b4004               mov eax, dword ptr [eax + 4]
// 005e9304  80781100             cmp byte ptr [eax + 0x11], 0
// 005e9308  751b                 jne 0x5e9325
// 005e930a  8d9b00000000         lea ebx, [ebx]
// 005e9310  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e9313  3b08                 cmp ecx, dword ptr [eax]
// 005e9315  750e                 jne 0x5e9325
// 005e9317  894604               mov dword ptr [esi + 4], eax
// 005e931a  8bd0                 mov edx, eax
// 005e931c  8b4204               mov eax, dword ptr [edx + 4]
// 005e931f  80781100             cmp byte ptr [eax + 0x11], 0
// 005e9323  74eb                 je 0x5e9310
// 005e9325  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e9328  80791100             cmp byte ptr [ecx + 0x11], 0
// 005e932c  75a8                 jne 0x5e92d6
// 005e932e  894604               mov dword ptr [esi + 4], eax
// 005e9331  5f                   pop edi
// 005e9332  5e                   pop esi
// 005e9333  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
