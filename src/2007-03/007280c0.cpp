// roc 2007-03 007280c0  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007280c0
//
// 007280c0  53                   push ebx
// 007280c1  56                   push esi
// 007280c2  57                   push edi
// 007280c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007280c7  807f2500             cmp byte ptr [edi + 0x25], 0
// 007280cb  8bd9                 mov ebx, ecx
// 007280cd  8bf7                 mov esi, edi
// 007280cf  7526                 jne 0x7280f7
// 007280d1  8b4608               mov eax, dword ptr [esi + 8]
// 007280d4  50                   push eax
// 007280d5  8bcb                 mov ecx, ebx
// 007280d7  e8e4ffffff           call 0x7280c0
// 007280dc  8b36                 mov esi, dword ptr [esi]
// 007280de  8d4f0c               lea ecx, [edi + 0xc]
// 007280e1  e87afcffff           call 0x727d60
// 007280e6  57                   push edi
// 007280e7  e80460efff           call 0x61e0f0
// 007280ec  83c404               add esp, 4
// 007280ef  807e2500             cmp byte ptr [esi + 0x25], 0
// 007280f3  8bfe                 mov edi, esi
// 007280f5  74da                 je 0x7280d1
// 007280f7  5f                   pop edi
// 007280f8  5e                   pop esi
// 007280f9  5b                   pop ebx
// 007280fa  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@U?$less@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@U?$less@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$shared_ptr@VInstance@RBX@@@boost@@Vconnection@signals@2@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
