// roc 2007-03 00403c40  unit: seg_00400000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403c40
//
// 00403c40  53                   push ebx
// 00403c41  56                   push esi
// 00403c42  57                   push edi
// 00403c43  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403c47  807f1100             cmp byte ptr [edi + 0x11], 0
// 00403c4b  8bd9                 mov ebx, ecx
// 00403c4d  8bf7                 mov esi, edi
// 00403c4f  751e                 jne 0x403c6f
// 00403c51  8b4608               mov eax, dword ptr [esi + 8]
// 00403c54  50                   push eax
// 00403c55  8bcb                 mov ecx, ebx
// 00403c57  e8e4ffffff           call 0x403c40
// 00403c5c  8b36                 mov esi, dword ptr [esi]
// 00403c5e  57                   push edi
// 00403c5f  e88ca42100           call 0x61e0f0
// 00403c64  83c404               add esp, 4
// 00403c67  807e1100             cmp byte ptr [esi + 0x11], 0
// 00403c6b  8bfe                 mov edi, esi
// 00403c6d  74e2                 je 0x403c51
// 00403c6f  5f                   pop edi
// 00403c70  5e                   pop esi
// 00403c71  5b                   pop ebx
// 00403c72  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
