// roc 2009-06 006228c0  unit: RBX::RootInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006228c0
//
// 006228c0  53                   push ebx
// 006228c1  56                   push esi
// 006228c2  57                   push edi
// 006228c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006228c7  807f3100             cmp byte ptr [edi + 0x31], 0
// 006228cb  8bd9                 mov ebx, ecx
// 006228cd  8bf7                 mov esi, edi
// 006228cf  7526                 jne 0x6228f7
// 006228d1  8b4608               mov eax, dword ptr [esi + 8]
// 006228d4  50                   push eax
// 006228d5  8bcb                 mov ecx, ebx
// 006228d7  e8e4ffffff           call 0x6228c0
// 006228dc  8b36                 mov esi, dword ptr [esi]
// 006228de  8d4f0c               lea ecx, [edi + 0xc]
// 006228e1  e8baf8ffff           call 0x6221a0
// 006228e6  57                   push edi
// 006228e7  e846610f00           call 0x718a32
// 006228ec  83c404               add esp, 4
// 006228ef  807e3100             cmp byte ptr [esi + 0x31], 0
// 006228f3  8bfe                 mov edi, esi
// 006228f5  74da                 je 0x6228d1
// 006228f7  5f                   pop edi
// 006228f8  5e                   pop esi
// 006228f9  5b                   pop ebx
// 006228fa  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
