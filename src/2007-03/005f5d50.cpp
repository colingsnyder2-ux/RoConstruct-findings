// roc 2007-03 005f5d50  unit: seg_005f0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5d50
//
// 005f5d50  53                   push ebx
// 005f5d51  56                   push esi
// 005f5d52  57                   push edi
// 005f5d53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f5d57  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005f5d5b  8bd9                 mov ebx, ecx
// 005f5d5d  8bf7                 mov esi, edi
// 005f5d5f  751e                 jne 0x5f5d7f
// 005f5d61  8b4608               mov eax, dword ptr [esi + 8]
// 005f5d64  50                   push eax
// 005f5d65  8bcb                 mov ecx, ebx
// 005f5d67  e8e4ffffff           call 0x5f5d50
// 005f5d6c  8b36                 mov esi, dword ptr [esi]
// 005f5d6e  57                   push edi
// 005f5d6f  e87c830200           call 0x61e0f0
// 005f5d74  83c404               add esp, 4
// 005f5d77  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 005f5d7b  8bfe                 mov edi, esi
// 005f5d7d  74e2                 je 0x5f5d61
// 005f5d7f  5f                   pop edi
// 005f5d80  5e                   pop esi
// 005f5d81  5b                   pop ebx
// 005f5d82  c20400               ret 4
// library rbxgs/v8world\Block.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
