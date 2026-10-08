// roc 2007-08 004de0b0  unit: RBX::Render::Mesh::Level  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004de0b0
//
// 004de0b0  53                   push ebx
// 004de0b1  56                   push esi
// 004de0b2  57                   push edi
// 004de0b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004de0b7  807f3500             cmp byte ptr [edi + 0x35], 0
// 004de0bb  8bd9                 mov ebx, ecx
// 004de0bd  8bf7                 mov esi, edi
// 004de0bf  7530                 jne 0x4de0f1
// 004de0c1  8b4608               mov eax, dword ptr [esi + 8]
// 004de0c4  50                   push eax
// 004de0c5  8bcb                 mov ecx, ebx
// 004de0c7  e8e4ffffff           call 0x4de0b0
// 004de0cc  8b36                 mov esi, dword ptr [esi]
// 004de0ce  68f0374600           push 0x4637f0
// 004de0d3  6a04                 push 4
// 004de0d5  6a04                 push 4
// 004de0d7  8d4f24               lea ecx, [edi + 0x24]
// 004de0da  51                   push ecx
// 004de0db  e8172a1500           call 0x630af7
// 004de0e0  57                   push edi
// 004de0e1  e87c1b1500           call 0x62fc62
// 004de0e6  83c404               add esp, 4
// 004de0e9  807e3500             cmp byte ptr [esi + 0x35], 0
// 004de0ed  8bfe                 mov edi, esi
// 004de0ef  74d0                 je 0x4de0c1
// 004de0f1  5f                   pop edi
// 004de0f2  5e                   pop esi
// 004de0f3  5b                   pop ebx
// 004de0f4  c20400               ret 4
// library rbxgs-view/BrickMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
