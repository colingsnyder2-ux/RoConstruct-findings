// roc 2008-06 00592140  unit: RBX::RootInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592140
//
// 00592140  53                   push ebx
// 00592141  56                   push esi
// 00592142  57                   push edi
// 00592143  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00592147  807f3100             cmp byte ptr [edi + 0x31], 0
// 0059214b  8bd9                 mov ebx, ecx
// 0059214d  8bf7                 mov esi, edi
// 0059214f  7526                 jne 0x592177
// 00592151  8b4608               mov eax, dword ptr [esi + 8]
// 00592154  50                   push eax
// 00592155  8bcb                 mov ecx, ebx
// 00592157  e8e4ffffff           call 0x592140
// 0059215c  8b36                 mov esi, dword ptr [esi]
// 0059215e  8d4f0c               lea ecx, [edi + 0xc]
// 00592161  e8da45f0ff           call 0x496740
// 00592166  57                   push edi
// 00592167  e80ee51000           call 0x6a067a
// 0059216c  83c404               add esp, 4
// 0059216f  807e3100             cmp byte ptr [esi + 0x31], 0
// 00592173  8bfe                 mov edi, esi
// 00592175  74da                 je 0x592151
// 00592177  5f                   pop edi
// 00592178  5e                   pop esi
// 00592179  5b                   pop ebx
// 0059217a  c20400               ret 4
// library templates-boost-1_34_1/map_str_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UT@@@boost@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_str_sp.cpp
