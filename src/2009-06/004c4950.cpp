// roc 2009-06 004c4950  unit: RBX::Network::Players::Plugin  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4950
//
// 004c4950  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004c4953  56                   push esi
// 004c4954  8b7004               mov esi, dword ptr [eax + 4]
// 004c4957  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c495b  57                   push edi
// 004c495c  8bf8                 mov edi, eax
// 004c495e  7524                 jne 0x4c4984
// 004c4960  53                   push ebx
// 004c4961  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004c4965  53                   push ebx
// 004c4966  8d4e0c               lea ecx, [esi + 0xc]
// 004c4969  e8c2e21600           call 0x632c30
// 004c496e  84c0                 test al, al
// 004c4970  7405                 je 0x4c4977
// 004c4972  8b7608               mov esi, dword ptr [esi + 8]
// 004c4975  eb04                 jmp 0x4c497b
// 004c4977  8bfe                 mov edi, esi
// 004c4979  8b36                 mov esi, dword ptr [esi]
// 004c497b  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c497f  74e4                 je 0x4c4965
// 004c4981  8bc7                 mov eax, edi
// 004c4983  5b                   pop ebx
// 004c4984  5f                   pop edi
// 004c4985  5e                   pop esi
// 004c4986  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
