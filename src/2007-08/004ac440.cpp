// from server: 100% by auto
// roc 2007-08 004ac440  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ac440
//
// 004ac440  83ec10               sub esp, 0x10
// 004ac443  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ac447  53                   push ebx
// 004ac448  55                   push ebp
// 004ac449  56                   push esi
// 004ac44a  57                   push edi
// 004ac44b  8bf1                 mov esi, ecx
// 004ac44d  50                   push eax
// 004ac44e  8d4c2414             lea ecx, [esp + 0x14]
// 004ac452  51                   push ecx
// 004ac453  8bce                 mov ecx, esi
// 004ac455  e88655f7ff           call 0x4219e0
// 004ac45a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ac45e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ac462  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ac466  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ac46a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ac472  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ac476  52                   push edx
// 004ac477  8d442428             lea eax, [esp + 0x28]
// 004ac47b  50                   push eax
// 004ac47c  57                   push edi
// 004ac47d  53                   push ebx
// 004ac47e  55                   push ebp
// 004ac47f  51                   push ecx
// 004ac480  e8ab6df8ff           call 0x433230
// 004ac485  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ac489  83c418               add esp, 0x18
// 004ac48c  57                   push edi
// 004ac48d  53                   push ebx
// 004ac48e  55                   push ebp
// 004ac48f  52                   push edx
// 004ac490  8d442420             lea eax, [esp + 0x20]
// 004ac494  50                   push eax
// 004ac495  8bce                 mov ecx, esi
// 004ac497  e8f4e9ffff           call 0x4aae90
// 004ac49c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ac4a0  5f                   pop edi
// 004ac4a1  5e                   pop esi
// 004ac4a2  5d                   pop ebp
// 004ac4a3  5b                   pop ebx
// 004ac4a4  83c410               add esp, 0x10
// 004ac4a7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
