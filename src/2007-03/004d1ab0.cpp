// roc 2007-03 004d1ab0  unit: seg_004d0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d1ab0
//
// 004d1ab0  53                   push ebx
// 004d1ab1  56                   push esi
// 004d1ab2  57                   push edi
// 004d1ab3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d1ab7  807f3500             cmp byte ptr [edi + 0x35], 0
// 004d1abb  8bd9                 mov ebx, ecx
// 004d1abd  8bf7                 mov esi, edi
// 004d1abf  7530                 jne 0x4d1af1
// 004d1ac1  8b4608               mov eax, dword ptr [esi + 8]
// 004d1ac4  50                   push eax
// 004d1ac5  8bcb                 mov ecx, ebx
// 004d1ac7  e8e4ffffff           call 0x4d1ab0
// 004d1acc  8b36                 mov esi, dword ptr [esi]
// 004d1ace  68c0594700           push 0x4759c0
// 004d1ad3  6a04                 push 4
// 004d1ad5  6a04                 push 4
// 004d1ad7  8d4f24               lea ecx, [edi + 0x24]
// 004d1ada  51                   push ecx
// 004d1adb  e8a5d41400           call 0x61ef85
// 004d1ae0  57                   push edi
// 004d1ae1  e80ac61400           call 0x61e0f0
// 004d1ae6  83c404               add esp, 4
// 004d1ae9  807e3500             cmp byte ptr [esi + 0x35], 0
// 004d1aed  8bfe                 mov edi, esi
// 004d1aef  74d0                 je 0x4d1ac1
// 004d1af1  5f                   pop edi
// 004d1af2  5e                   pop esi
// 004d1af3  5b                   pop ebx
// 004d1af4  c20400               ret 4
// library rbxgs-view/BrickMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
