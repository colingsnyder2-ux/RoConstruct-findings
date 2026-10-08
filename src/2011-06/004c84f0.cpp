// roc 2011-06 004c84f0  unit: RBX::Network::Players  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c84f0
//
// 004c84f0  8b4104               mov eax, dword ptr [ecx + 4]
// 004c84f3  56                   push esi
// 004c84f4  8b7004               mov esi, dword ptr [eax + 4]
// 004c84f7  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c84fb  57                   push edi
// 004c84fc  8bf8                 mov edi, eax
// 004c84fe  7524                 jne 0x4c8524
// 004c8500  53                   push ebx
// 004c8501  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004c8505  53                   push ebx
// 004c8506  8d4e0c               lea ecx, [esi + 0xc]
// 004c8509  e892d41700           call 0x6459a0
// 004c850e  84c0                 test al, al
// 004c8510  7405                 je 0x4c8517
// 004c8512  8b7608               mov esi, dword ptr [esi + 8]
// 004c8515  eb04                 jmp 0x4c851b
// 004c8517  8bfe                 mov edi, esi
// 004c8519  8b36                 mov esi, dword ptr [esi]
// 004c851b  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c851f  74e4                 je 0x4c8505
// 004c8521  8bc7                 mov eax, edi
// 004c8523  5b                   pop ebx
// 004c8524  5f                   pop edi
// 004c8525  5e                   pop esi
// 004c8526  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
