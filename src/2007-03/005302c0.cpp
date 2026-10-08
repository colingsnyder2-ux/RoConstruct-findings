// roc 2007-03 005302c0  unit: seg_00530000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005302c0
//
// 005302c0  53                   push ebx
// 005302c1  56                   push esi
// 005302c2  57                   push edi
// 005302c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005302c7  807f1500             cmp byte ptr [edi + 0x15], 0
// 005302cb  8bd9                 mov ebx, ecx
// 005302cd  8bf7                 mov esi, edi
// 005302cf  751e                 jne 0x5302ef
// 005302d1  8b4608               mov eax, dword ptr [esi + 8]
// 005302d4  50                   push eax
// 005302d5  8bcb                 mov ecx, ebx
// 005302d7  e8e4ffffff           call 0x5302c0
// 005302dc  8b36                 mov esi, dword ptr [esi]
// 005302de  57                   push edi
// 005302df  e80cde0e00           call 0x61e0f0
// 005302e4  83c404               add esp, 4
// 005302e7  807e1500             cmp byte ptr [esi + 0x15], 0
// 005302eb  8bfe                 mov edi, esi
// 005302ed  74e2                 je 0x5302d1
// 005302ef  5f                   pop edi
// 005302f0  5e                   pop esi
// 005302f1  5b                   pop ebx
// 005302f2  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
