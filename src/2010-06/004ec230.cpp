// roc 2010-06 004ec230  unit: RBX::Network::DirectPhysicsReceiver  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ec230
//
// 004ec230  83ec10               sub esp, 0x10
// 004ec233  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ec237  53                   push ebx
// 004ec238  55                   push ebp
// 004ec239  56                   push esi
// 004ec23a  57                   push edi
// 004ec23b  8bf1                 mov esi, ecx
// 004ec23d  50                   push eax
// 004ec23e  8d4c2414             lea ecx, [esp + 0x14]
// 004ec242  51                   push ecx
// 004ec243  8bce                 mov ecx, esi
// 004ec245  e826d1ffff           call 0x4e9370
// 004ec24a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ec24e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ec252  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ec256  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ec25a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ec262  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ec266  52                   push edx
// 004ec267  8d442428             lea eax, [esp + 0x28]
// 004ec26b  50                   push eax
// 004ec26c  57                   push edi
// 004ec26d  53                   push ebx
// 004ec26e  55                   push ebp
// 004ec26f  51                   push ecx
// 004ec270  e89bc6ffff           call 0x4e8910
// 004ec275  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ec279  83c418               add esp, 0x18
// 004ec27c  57                   push edi
// 004ec27d  53                   push ebx
// 004ec27e  55                   push ebp
// 004ec27f  52                   push edx
// 004ec280  8d442420             lea eax, [esp + 0x20]
// 004ec284  50                   push eax
// 004ec285  8bce                 mov ecx, esi
// 004ec287  e864ecffff           call 0x4eaef0
// 004ec28c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ec290  5f                   pop edi
// 004ec291  5e                   pop esi
// 004ec292  5d                   pop ebp
// 004ec293  5b                   pop ebx
// 004ec294  83c410               add esp, 0x10
// 004ec297  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
