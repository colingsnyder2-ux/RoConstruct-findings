// roc 2010-06 006118d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006118d0
//
// 006118d0  83ec10               sub esp, 0x10
// 006118d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006118d7  53                   push ebx
// 006118d8  55                   push ebp
// 006118d9  56                   push esi
// 006118da  57                   push edi
// 006118db  8bf1                 mov esi, ecx
// 006118dd  50                   push eax
// 006118de  8d4c2414             lea ecx, [esp + 0x14]
// 006118e2  51                   push ecx
// 006118e3  8bce                 mov ecx, esi
// 006118e5  e876ddffff           call 0x60f660
// 006118ea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006118ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006118f2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006118f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006118fa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00611902  8b542424             mov edx, dword ptr [esp + 0x24]
// 00611906  52                   push edx
// 00611907  8d442428             lea eax, [esp + 0x28]
// 0061190b  50                   push eax
// 0061190c  57                   push edi
// 0061190d  53                   push ebx
// 0061190e  55                   push ebp
// 0061190f  51                   push ecx
// 00611910  e8ebd6ffff           call 0x60f000
// 00611915  8b542428             mov edx, dword ptr [esp + 0x28]
// 00611919  83c418               add esp, 0x18
// 0061191c  57                   push edi
// 0061191d  53                   push ebx
// 0061191e  55                   push ebp
// 0061191f  52                   push edx
// 00611920  8d442420             lea eax, [esp + 0x20]
// 00611924  50                   push eax
// 00611925  8bce                 mov ecx, esi
// 00611927  e8a4fdffff           call 0x6116d0
// 0061192c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00611930  5f                   pop edi
// 00611931  5e                   pop esi
// 00611932  5d                   pop ebp
// 00611933  5b                   pop ebx
// 00611934  83c410               add esp, 0x10
// 00611937  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
