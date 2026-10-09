// roc 2009-12 00676e70  unit: RBX::GlobalSettings  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676e70
//
// 00676e70  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00676e73  56                   push esi
// 00676e74  8b7004               mov esi, dword ptr [eax + 4]
// 00676e77  807e1900             cmp byte ptr [esi + 0x19], 0
// 00676e7b  57                   push edi
// 00676e7c  8bf8                 mov edi, eax
// 00676e7e  7524                 jne 0x676ea4
// 00676e80  53                   push ebx
// 00676e81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00676e85  53                   push ebx
// 00676e86  8d4e0c               lea ecx, [esi + 0xc]
// 00676e89  e872ed0400           call 0x6c5c00
// 00676e8e  84c0                 test al, al
// 00676e90  7405                 je 0x676e97
// 00676e92  8b7608               mov esi, dword ptr [esi + 8]
// 00676e95  eb04                 jmp 0x676e9b
// 00676e97  8bfe                 mov edi, esi
// 00676e99  8b36                 mov esi, dword ptr [esi]
// 00676e9b  807e1900             cmp byte ptr [esi + 0x19], 0
// 00676e9f  74e4                 je 0x676e85
// 00676ea1  8bc7                 mov eax, edi
// 00676ea3  5b                   pop ebx
// 00676ea4  5f                   pop edi
// 00676ea5  5e                   pop esi
// 00676ea6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
