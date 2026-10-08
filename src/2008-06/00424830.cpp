// from server: 100% by auto
// roc 2008-06 00424830  unit: CSelectionTreeCtrl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424830
//
// 00424830  83ec10               sub esp, 0x10
// 00424833  8b442414             mov eax, dword ptr [esp + 0x14]
// 00424837  53                   push ebx
// 00424838  55                   push ebp
// 00424839  56                   push esi
// 0042483a  57                   push edi
// 0042483b  8bf1                 mov esi, ecx
// 0042483d  50                   push eax
// 0042483e  8d4c2414             lea ecx, [esp + 0x14]
// 00424842  51                   push ecx
// 00424843  8bce                 mov ecx, esi
// 00424845  e876f1ffff           call 0x4239c0
// 0042484a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042484e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00424852  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00424856  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042485a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00424862  8b542424             mov edx, dword ptr [esp + 0x24]
// 00424866  52                   push edx
// 00424867  8d442428             lea eax, [esp + 0x28]
// 0042486b  50                   push eax
// 0042486c  57                   push edi
// 0042486d  53                   push ebx
// 0042486e  55                   push ebp
// 0042486f  51                   push ecx
// 00424870  e80bf1ffff           call 0x423980
// 00424875  8b542428             mov edx, dword ptr [esp + 0x28]
// 00424879  83c418               add esp, 0x18
// 0042487c  57                   push edi
// 0042487d  53                   push ebx
// 0042487e  55                   push ebp
// 0042487f  52                   push edx
// 00424880  8d442420             lea eax, [esp + 0x20]
// 00424884  50                   push eax
// 00424885  8bce                 mov ecx, esi
// 00424887  e8a4fbffff           call 0x424430
// 0042488c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00424890  5f                   pop edi
// 00424891  5e                   pop esi
// 00424892  5d                   pop ebp
// 00424893  5b                   pop ebx
// 00424894  83c410               add esp, 0x10
// 00424897  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
