// roc 2012-06 006f1920  unit: RBX::DataModel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1920
//
// 006f1920  8b4104               mov eax, dword ptr [ecx + 4]
// 006f1923  56                   push esi
// 006f1924  8b7004               mov esi, dword ptr [eax + 4]
// 006f1927  807e1900             cmp byte ptr [esi + 0x19], 0
// 006f192b  57                   push edi
// 006f192c  8bf8                 mov edi, eax
// 006f192e  7524                 jne 0x6f1954
// 006f1930  53                   push ebx
// 006f1931  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006f1935  53                   push ebx
// 006f1936  8d4e0c               lea ecx, [esi + 0xc]
// 006f1939  e892eb0500           call 0x7504d0
// 006f193e  84c0                 test al, al
// 006f1940  7405                 je 0x6f1947
// 006f1942  8b7608               mov esi, dword ptr [esi + 8]
// 006f1945  eb04                 jmp 0x6f194b
// 006f1947  8bfe                 mov edi, esi
// 006f1949  8b36                 mov esi, dword ptr [esi]
// 006f194b  807e1900             cmp byte ptr [esi + 0x19], 0
// 006f194f  74e4                 je 0x6f1935
// 006f1951  8bc7                 mov eax, edi
// 006f1953  5b                   pop ebx
// 006f1954  5f                   pop edi
// 006f1955  5e                   pop esi
// 006f1956  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
