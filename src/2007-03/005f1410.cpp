// roc 2007-03 005f1410  unit: seg_005f0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1410
//
// 005f1410  53                   push ebx
// 005f1411  56                   push esi
// 005f1412  57                   push edi
// 005f1413  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f1417  807f1900             cmp byte ptr [edi + 0x19], 0
// 005f141b  8bd9                 mov ebx, ecx
// 005f141d  8bf7                 mov esi, edi
// 005f141f  751e                 jne 0x5f143f
// 005f1421  8b4608               mov eax, dword ptr [esi + 8]
// 005f1424  50                   push eax
// 005f1425  8bcb                 mov ecx, ebx
// 005f1427  e8e4ffffff           call 0x5f1410
// 005f142c  8b36                 mov esi, dword ptr [esi]
// 005f142e  57                   push edi
// 005f142f  e8bccc0200           call 0x61e0f0
// 005f1434  83c404               add esp, 4
// 005f1437  807e1900             cmp byte ptr [esi + 0x19], 0
// 005f143b  8bfe                 mov edi, esi
// 005f143d  74e2                 je 0x5f1421
// 005f143f  5f                   pop edi
// 005f1440  5e                   pop esi
// 005f1441  5b                   pop ebx
// 005f1442  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PAVPrimitive@RBX@@VPrimitiveSort@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@VPrimitiveSort@2@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
