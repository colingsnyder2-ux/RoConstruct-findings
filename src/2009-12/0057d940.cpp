// roc 2009-12 0057d940  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057d940
//
// 0057d940  83ec10               sub esp, 0x10
// 0057d943  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d947  53                   push ebx
// 0057d948  55                   push ebp
// 0057d949  56                   push esi
// 0057d94a  57                   push edi
// 0057d94b  8bf1                 mov esi, ecx
// 0057d94d  50                   push eax
// 0057d94e  8d4c2414             lea ecx, [esp + 0x14]
// 0057d952  51                   push ecx
// 0057d953  8bce                 mov ecx, esi
// 0057d955  e876e4ffff           call 0x57bdd0
// 0057d95a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057d95e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057d962  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057d966  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d96a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0057d972  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057d976  52                   push edx
// 0057d977  8d442428             lea eax, [esp + 0x28]
// 0057d97b  50                   push eax
// 0057d97c  57                   push edi
// 0057d97d  53                   push ebx
// 0057d97e  55                   push ebp
// 0057d97f  51                   push ecx
// 0057d980  e80b69fbff           call 0x534290
// 0057d985  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057d989  83c418               add esp, 0x18
// 0057d98c  57                   push edi
// 0057d98d  53                   push ebx
// 0057d98e  55                   push ebp
// 0057d98f  52                   push edx
// 0057d990  8d442420             lea eax, [esp + 0x20]
// 0057d994  50                   push eax
// 0057d995  8bce                 mov ecx, esi
// 0057d997  e874081300           call 0x6ae210
// 0057d99c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057d9a0  5f                   pop edi
// 0057d9a1  5e                   pop esi
// 0057d9a2  5d                   pop ebp
// 0057d9a3  5b                   pop ebx
// 0057d9a4  83c410               add esp, 0x10
// 0057d9a7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
