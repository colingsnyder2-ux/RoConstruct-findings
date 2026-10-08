// roc 2007-03 00580350  unit: seg_00580000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580350
//
// 00580350  53                   push ebx
// 00580351  56                   push esi
// 00580352  57                   push edi
// 00580353  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00580357  807f2100             cmp byte ptr [edi + 0x21], 0
// 0058035b  8bd9                 mov ebx, ecx
// 0058035d  8bf7                 mov esi, edi
// 0058035f  751e                 jne 0x58037f
// 00580361  8b4608               mov eax, dword ptr [esi + 8]
// 00580364  50                   push eax
// 00580365  8bcb                 mov ecx, ebx
// 00580367  e8e4ffffff           call 0x580350
// 0058036c  8b36                 mov esi, dword ptr [esi]
// 0058036e  57                   push edi
// 0058036f  e87cdd0900           call 0x61e0f0
// 00580374  83c404               add esp, 4
// 00580377  807e2100             cmp byte ptr [esi + 0x21], 0
// 0058037b  8bfe                 mov edi, esi
// 0058037d  74e2                 je 0x580361
// 0058037f  5f                   pop edi
// 00580380  5e                   pop esi
// 00580381  5b                   pop ebx
// 00580382  c20400               ret 4
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
