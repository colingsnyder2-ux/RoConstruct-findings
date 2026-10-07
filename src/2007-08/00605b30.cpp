// roc 2007-08 00605b30  unit: RBX::SleepStage  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605b30
//
// 00605b30  83ec10               sub esp, 0x10
// 00605b33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00605b37  53                   push ebx
// 00605b38  55                   push ebp
// 00605b39  56                   push esi
// 00605b3a  57                   push edi
// 00605b3b  8bf1                 mov esi, ecx
// 00605b3d  50                   push eax
// 00605b3e  8d4c2414             lea ecx, [esp + 0x14]
// 00605b42  51                   push ecx
// 00605b43  8bce                 mov ecx, esi
// 00605b45  e8a62beaff           call 0x4a86f0
// 00605b4a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00605b4e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00605b52  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00605b56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00605b5a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00605b62  8b542424             mov edx, dword ptr [esp + 0x24]
// 00605b66  52                   push edx
// 00605b67  8d442428             lea eax, [esp + 0x28]
// 00605b6b  50                   push eax
// 00605b6c  57                   push edi
// 00605b6d  53                   push ebx
// 00605b6e  55                   push ebp
// 00605b6f  51                   push ecx
// 00605b70  e84b1af3ff           call 0x5375c0
// 00605b75  8b542428             mov edx, dword ptr [esp + 0x28]
// 00605b79  83c418               add esp, 0x18
// 00605b7c  57                   push edi
// 00605b7d  53                   push ebx
// 00605b7e  55                   push ebp
// 00605b7f  52                   push edx
// 00605b80  8d442420             lea eax, [esp + 0x20]
// 00605b84  50                   push eax
// 00605b85  8bce                 mov ecx, esi
// 00605b87  e8d4defaff           call 0x5b3a60
// 00605b8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00605b90  5f                   pop edi
// 00605b91  5e                   pop esi
// 00605b92  5d                   pop ebp
// 00605b93  5b                   pop ebx
// 00605b94  83c410               add esp, 0x10
// 00605b97  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
