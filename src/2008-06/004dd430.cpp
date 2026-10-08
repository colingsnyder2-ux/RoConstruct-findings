// roc 2008-06 004dd430  unit: RBX::RenderBase::Mesh::Level  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dd430
//
// 004dd430  53                   push ebx
// 004dd431  56                   push esi
// 004dd432  57                   push edi
// 004dd433  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004dd437  807f3500             cmp byte ptr [edi + 0x35], 0
// 004dd43b  8bd9                 mov ebx, ecx
// 004dd43d  8bf7                 mov esi, edi
// 004dd43f  7530                 jne 0x4dd471
// 004dd441  8b4608               mov eax, dword ptr [esi + 8]
// 004dd444  50                   push eax
// 004dd445  8bcb                 mov ecx, ebx
// 004dd447  e8e4ffffff           call 0x4dd430
// 004dd44c  8b36                 mov esi, dword ptr [esi]
// 004dd44e  68702a5000           push 0x502a70
// 004dd453  6a04                 push 4
// 004dd455  6a04                 push 4
// 004dd457  8d4f24               lea ecx, [edi + 0x24]
// 004dd45a  51                   push ecx
// 004dd45b  e8fb411c00           call 0x6a165b
// 004dd460  57                   push edi
// 004dd461  e814321c00           call 0x6a067a
// 004dd466  83c404               add esp, 4
// 004dd469  807e3500             cmp byte ptr [esi + 0x35], 0
// 004dd46d  8bfe                 mov edi, esi
// 004dd46f  74d0                 je 0x4dd441
// 004dd471  5f                   pop edi
// 004dd472  5e                   pop esi
// 004dd473  5b                   pop ebx
// 004dd474  c20400               ret 4
// library rbxgs-view/BrickMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
