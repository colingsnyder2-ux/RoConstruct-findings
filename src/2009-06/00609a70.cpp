// roc 2009-06 00609a70  unit: RBX::GlobalSettings  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609a70
//
// 00609a70  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00609a73  56                   push esi
// 00609a74  8b7004               mov esi, dword ptr [eax + 4]
// 00609a77  807e1900             cmp byte ptr [esi + 0x19], 0
// 00609a7b  57                   push edi
// 00609a7c  8bf8                 mov edi, eax
// 00609a7e  7524                 jne 0x609aa4
// 00609a80  53                   push ebx
// 00609a81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00609a85  53                   push ebx
// 00609a86  8d4e0c               lea ecx, [esi + 0xc]
// 00609a89  e8f22a0400           call 0x64c580
// 00609a8e  84c0                 test al, al
// 00609a90  7405                 je 0x609a97
// 00609a92  8b7608               mov esi, dword ptr [esi + 8]
// 00609a95  eb04                 jmp 0x609a9b
// 00609a97  8bfe                 mov edi, esi
// 00609a99  8b36                 mov esi, dword ptr [esi]
// 00609a9b  807e1900             cmp byte ptr [esi + 0x19], 0
// 00609a9f  74e4                 je 0x609a85
// 00609aa1  8bc7                 mov eax, edi
// 00609aa3  5b                   pop ebx
// 00609aa4  5f                   pop edi
// 00609aa5  5e                   pop esi
// 00609aa6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
