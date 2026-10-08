// roc 2009-12 007b7360  unit: RBX::SleepStage  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b7360
//
// 007b7360  83ec10               sub esp, 0x10
// 007b7363  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b7367  53                   push ebx
// 007b7368  55                   push ebp
// 007b7369  56                   push esi
// 007b736a  57                   push edi
// 007b736b  8bf1                 mov esi, ecx
// 007b736d  50                   push eax
// 007b736e  8d4c2414             lea ecx, [esp + 0x14]
// 007b7372  51                   push ecx
// 007b7373  8bce                 mov ecx, esi
// 007b7375  e86673c6ff           call 0x41e6e0
// 007b737a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b737e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b7382  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007b7386  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b738a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007b7392  8b542424             mov edx, dword ptr [esp + 0x24]
// 007b7396  52                   push edx
// 007b7397  8d442428             lea eax, [esp + 0x28]
// 007b739b  50                   push eax
// 007b739c  57                   push edi
// 007b739d  53                   push ebx
// 007b739e  55                   push ebp
// 007b739f  51                   push ecx
// 007b73a0  e8fb2ed8ff           call 0x53a2a0
// 007b73a5  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b73a9  83c418               add esp, 0x18
// 007b73ac  57                   push edi
// 007b73ad  53                   push ebx
// 007b73ae  55                   push ebp
// 007b73af  52                   push edx
// 007b73b0  8d442420             lea eax, [esp + 0x20]
// 007b73b4  50                   push eax
// 007b73b5  8bce                 mov ecx, esi
// 007b73b7  e894d2c7ff           call 0x434650
// 007b73bc  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b73c0  5f                   pop edi
// 007b73c1  5e                   pop esi
// 007b73c2  5d                   pop ebp
// 007b73c3  5b                   pop ebx
// 007b73c4  83c410               add esp, 0x10
// 007b73c7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
