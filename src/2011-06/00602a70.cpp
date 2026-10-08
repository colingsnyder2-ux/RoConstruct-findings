// roc 2011-06 00602a70  unit: RBX::UnifiedWidget  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602a70
//
// 00602a70  8b4104               mov eax, dword ptr [ecx + 4]
// 00602a73  56                   push esi
// 00602a74  8b7004               mov esi, dword ptr [eax + 4]
// 00602a77  807e1900             cmp byte ptr [esi + 0x19], 0
// 00602a7b  57                   push edi
// 00602a7c  8bf8                 mov edi, eax
// 00602a7e  7524                 jne 0x602aa4
// 00602a80  53                   push ebx
// 00602a81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00602a85  53                   push ebx
// 00602a86  8d4e0c               lea ecx, [esi + 0xc]
// 00602a89  e802900500           call 0x65ba90
// 00602a8e  84c0                 test al, al
// 00602a90  7405                 je 0x602a97
// 00602a92  8b7608               mov esi, dword ptr [esi + 8]
// 00602a95  eb04                 jmp 0x602a9b
// 00602a97  8bfe                 mov edi, esi
// 00602a99  8b36                 mov esi, dword ptr [esi]
// 00602a9b  807e1900             cmp byte ptr [esi + 0x19], 0
// 00602a9f  74e4                 je 0x602a85
// 00602aa1  8bc7                 mov eax, edi
// 00602aa3  5b                   pop ebx
// 00602aa4  5f                   pop edi
// 00602aa5  5e                   pop esi
// 00602aa6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
