// roc 2010-06 00641510  unit: RBX::VInstance::?$NonFactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00641510
//
// 00641510  53                   push ebx
// 00641511  56                   push esi
// 00641512  57                   push edi
// 00641513  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00641517  807f3100             cmp byte ptr [edi + 0x31], 0
// 0064151b  8bd9                 mov ebx, ecx
// 0064151d  8bf7                 mov esi, edi
// 0064151f  7526                 jne 0x641547
// 00641521  8b4608               mov eax, dword ptr [esi + 8]
// 00641524  50                   push eax
// 00641525  8bcb                 mov ecx, ebx
// 00641527  e8e4ffffff           call 0x641510
// 0064152c  8b36                 mov esi, dword ptr [esi]
// 0064152e  8d4f0c               lea ecx, [edi + 0xc]
// 00641531  e8fae6ffff           call 0x63fc30
// 00641536  57                   push edi
// 00641537  e85e641600           call 0x7a799a
// 0064153c  83c404               add esp, 4
// 0064153f  807e3100             cmp byte ptr [esi + 0x31], 0
// 00641543  8bfe                 mov edi, esi
// 00641545  74da                 je 0x641521
// 00641547  5f                   pop edi
// 00641548  5e                   pop esi
// 00641549  5b                   pop ebx
// 0064154a  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
