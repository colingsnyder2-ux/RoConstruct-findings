// roc 2010-06 005dfcd0  unit: RBX::GlobalSettings  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfcd0
//
// 005dfcd0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005dfcd3  56                   push esi
// 005dfcd4  8b7004               mov esi, dword ptr [eax + 4]
// 005dfcd7  807e1900             cmp byte ptr [esi + 0x19], 0
// 005dfcdb  57                   push edi
// 005dfcdc  8bf8                 mov edi, eax
// 005dfcde  7524                 jne 0x5dfd04
// 005dfce0  53                   push ebx
// 005dfce1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005dfce5  53                   push ebx
// 005dfce6  8d4e0c               lea ecx, [esi + 0xc]
// 005dfce9  e8b21c0500           call 0x6319a0
// 005dfcee  84c0                 test al, al
// 005dfcf0  7405                 je 0x5dfcf7
// 005dfcf2  8b7608               mov esi, dword ptr [esi + 8]
// 005dfcf5  eb04                 jmp 0x5dfcfb
// 005dfcf7  8bfe                 mov edi, esi
// 005dfcf9  8b36                 mov esi, dword ptr [esi]
// 005dfcfb  807e1900             cmp byte ptr [esi + 0x19], 0
// 005dfcff  74e4                 je 0x5dfce5
// 005dfd01  8bc7                 mov eax, edi
// 005dfd03  5b                   pop ebx
// 005dfd04  5f                   pop edi
// 005dfd05  5e                   pop esi
// 005dfd06  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
