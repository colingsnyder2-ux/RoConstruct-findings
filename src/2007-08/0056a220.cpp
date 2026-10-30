// from server: 100% by auto
// roc 2007-08 0056a220  unit: RBX::ModelInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056a220
//
// 0056a220  53                   push ebx
// 0056a221  56                   push esi
// 0056a222  57                   push edi
// 0056a223  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056a227  807f3100             cmp byte ptr [edi + 0x31], 0
// 0056a22b  8bd9                 mov ebx, ecx
// 0056a22d  8bf7                 mov esi, edi
// 0056a22f  7526                 jne 0x56a257
// 0056a231  8b4608               mov eax, dword ptr [esi + 8]
// 0056a234  50                   push eax
// 0056a235  8bcb                 mov ecx, ebx
// 0056a237  e8e4ffffff           call 0x56a220
// 0056a23c  8b36                 mov esi, dword ptr [esi]
// 0056a23e  8d4f0c               lea ecx, [edi + 0xc]
// 0056a241  e85af3ffff           call 0x5695a0
// 0056a246  57                   push edi
// 0056a247  e8165a0c00           call 0x62fc62
// 0056a24c  83c404               add esp, 4
// 0056a24f  807e3100             cmp byte ptr [esi + 0x31], 0
// 0056a253  8bfe                 mov edi, esi
// 0056a255  74da                 je 0x56a231
// 0056a257  5f                   pop edi
// 0056a258  5e                   pop esi
// 0056a259  5b                   pop ebx
// 0056a25a  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
