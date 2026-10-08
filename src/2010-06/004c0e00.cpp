// roc 2010-06 004c0e00  unit: RBX::Network::Players  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0e00
//
// 004c0e00  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004c0e03  56                   push esi
// 004c0e04  8b7004               mov esi, dword ptr [eax + 4]
// 004c0e07  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c0e0b  57                   push edi
// 004c0e0c  8bf8                 mov edi, eax
// 004c0e0e  7524                 jne 0x4c0e34
// 004c0e10  53                   push ebx
// 004c0e11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004c0e15  53                   push ebx
// 004c0e16  8d4e0c               lea ecx, [esi + 0xc]
// 004c0e19  e8b2951400           call 0x60a3d0
// 004c0e1e  84c0                 test al, al
// 004c0e20  7405                 je 0x4c0e27
// 004c0e22  8b7608               mov esi, dword ptr [esi + 8]
// 004c0e25  eb04                 jmp 0x4c0e2b
// 004c0e27  8bfe                 mov edi, esi
// 004c0e29  8b36                 mov esi, dword ptr [esi]
// 004c0e2b  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c0e2f  74e4                 je 0x4c0e15
// 004c0e31  8bc7                 mov eax, edi
// 004c0e33  5b                   pop ebx
// 004c0e34  5f                   pop edi
// 004c0e35  5e                   pop esi
// 004c0e36  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
