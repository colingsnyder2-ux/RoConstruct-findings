// roc 2011-06 006f17f0  unit: RBX::VCollectionService::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f17f0
//
// 006f17f0  53                   push ebx
// 006f17f1  56                   push esi
// 006f17f2  57                   push edi
// 006f17f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f17f7  807f3100             cmp byte ptr [edi + 0x31], 0
// 006f17fb  8bd9                 mov ebx, ecx
// 006f17fd  8bf7                 mov esi, edi
// 006f17ff  7526                 jne 0x6f1827
// 006f1801  8b4608               mov eax, dword ptr [esi + 8]
// 006f1804  50                   push eax
// 006f1805  8bcb                 mov ecx, ebx
// 006f1807  e8e4ffffff           call 0x6f17f0
// 006f180c  8b36                 mov esi, dword ptr [esi]
// 006f180e  8d4f0c               lea ecx, [edi + 0xc]
// 006f1811  e8aa250d00           call 0x7c3dc0
// 006f1816  57                   push edi
// 006f1817  e83c881100           call 0x80a058
// 006f181c  83c404               add esp, 4
// 006f181f  807e3100             cmp byte ptr [esi + 0x31], 0
// 006f1823  8bfe                 mov edi, esi
// 006f1825  74da                 je 0x6f1801
// 006f1827  5f                   pop edi
// 006f1828  5e                   pop esi
// 006f1829  5b                   pop ebx
// 006f182a  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
