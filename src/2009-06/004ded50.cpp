// roc 2009-06 004ded50  unit: RBX::Network::IdSerializer  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ded50
//
// 004ded50  83ec10               sub esp, 0x10
// 004ded53  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ded57  53                   push ebx
// 004ded58  55                   push ebp
// 004ded59  56                   push esi
// 004ded5a  57                   push edi
// 004ded5b  8bf1                 mov esi, ecx
// 004ded5d  50                   push eax
// 004ded5e  8d4c2414             lea ecx, [esp + 0x14]
// 004ded62  51                   push ecx
// 004ded63  8bce                 mov ecx, esi
// 004ded65  e816f6ffff           call 0x4de380
// 004ded6a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ded6e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ded72  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ded76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ded7a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ded82  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ded86  52                   push edx
// 004ded87  8d442428             lea eax, [esp + 0x28]
// 004ded8b  50                   push eax
// 004ded8c  57                   push edi
// 004ded8d  53                   push ebx
// 004ded8e  55                   push ebp
// 004ded8f  51                   push ecx
// 004ded90  e8cbf4ffff           call 0x4de260
// 004ded95  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ded99  83c418               add esp, 0x18
// 004ded9c  57                   push edi
// 004ded9d  53                   push ebx
// 004ded9e  55                   push ebp
// 004ded9f  52                   push edx
// 004deda0  8d442420             lea eax, [esp + 0x20]
// 004deda4  50                   push eax
// 004deda5  8bce                 mov ecx, esi
// 004deda7  e874e60e00           call 0x5cd420
// 004dedac  8b442424             mov eax, dword ptr [esp + 0x24]
// 004dedb0  5f                   pop edi
// 004dedb1  5e                   pop esi
// 004dedb2  5d                   pop ebp
// 004dedb3  5b                   pop ebx
// 004dedb4  83c410               add esp, 0x10
// 004dedb7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
