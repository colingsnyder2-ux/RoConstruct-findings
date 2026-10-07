// roc 2012-06 0073c1c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073c1c0
//
// 0073c1c0  53                   push ebx
// 0073c1c1  56                   push esi
// 0073c1c2  57                   push edi
// 0073c1c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073c1c7  807f3100             cmp byte ptr [edi + 0x31], 0
// 0073c1cb  8bd9                 mov ebx, ecx
// 0073c1cd  8bf7                 mov esi, edi
// 0073c1cf  7526                 jne 0x73c1f7
// 0073c1d1  8b4608               mov eax, dword ptr [esi + 8]
// 0073c1d4  50                   push eax
// 0073c1d5  8bcb                 mov ecx, ebx
// 0073c1d7  e8e4ffffff           call 0x73c1c0
// 0073c1dc  8b36                 mov esi, dword ptr [esi]
// 0073c1de  8d4f0c               lea ecx, [edi + 0xc]
// 0073c1e1  e85aa3fcff           call 0x706540
// 0073c1e6  57                   push edi
// 0073c1e7  e8285f2400           call 0x982114
// 0073c1ec  83c404               add esp, 4
// 0073c1ef  807e3100             cmp byte ptr [esi + 0x31], 0
// 0073c1f3  8bfe                 mov edi, esi
// 0073c1f5  74da                 je 0x73c1d1
// 0073c1f7  5f                   pop edi
// 0073c1f8  5e                   pop esi
// 0073c1f9  5b                   pop ebx
// 0073c1fa  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
