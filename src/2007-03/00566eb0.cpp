// roc 2007-03 00566eb0  unit: seg_00560000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566eb0
//
// 00566eb0  8b4104               mov eax, dword ptr [ecx + 4]
// 00566eb3  56                   push esi
// 00566eb4  8b7004               mov esi, dword ptr [eax + 4]
// 00566eb7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00566ebb  57                   push edi
// 00566ebc  8bf8                 mov edi, eax
// 00566ebe  7528                 jne 0x566ee8
// 00566ec0  53                   push ebx
// 00566ec1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00566ec5  8d460c               lea eax, [esi + 0xc]
// 00566ec8  53                   push ebx
// 00566ec9  50                   push eax
// 00566eca  e871d8fdff           call 0x544740
// 00566ecf  83c408               add esp, 8
// 00566ed2  84c0                 test al, al
// 00566ed4  7405                 je 0x566edb
// 00566ed6  8b7608               mov esi, dword ptr [esi + 8]
// 00566ed9  eb04                 jmp 0x566edf
// 00566edb  8bfe                 mov edi, esi
// 00566edd  8b36                 mov esi, dword ptr [esi]
// 00566edf  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00566ee3  74e0                 je 0x566ec5
// 00566ee5  8bc7                 mov eax, edi
// 00566ee7  5b                   pop ebx
// 00566ee8  5f                   pop edi
// 00566ee9  5e                   pop esi
// 00566eea  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
