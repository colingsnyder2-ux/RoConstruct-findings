// roc 2010-06 00603a60  unit: RBX::ArrowTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603a60
//
// 00603a60  83ec10               sub esp, 0x10
// 00603a63  8b442414             mov eax, dword ptr [esp + 0x14]
// 00603a67  53                   push ebx
// 00603a68  55                   push ebp
// 00603a69  56                   push esi
// 00603a6a  57                   push edi
// 00603a6b  8bf1                 mov esi, ecx
// 00603a6d  50                   push eax
// 00603a6e  8d4c2414             lea ecx, [esp + 0x14]
// 00603a72  51                   push ecx
// 00603a73  8bce                 mov ecx, esi
// 00603a75  e856e7dfff           call 0x4021d0
// 00603a7a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00603a7e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00603a82  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00603a86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00603a8a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00603a92  8b542424             mov edx, dword ptr [esp + 0x24]
// 00603a96  52                   push edx
// 00603a97  8d442428             lea eax, [esp + 0x28]
// 00603a9b  50                   push eax
// 00603a9c  57                   push edi
// 00603a9d  53                   push ebx
// 00603a9e  55                   push ebp
// 00603a9f  51                   push ecx
// 00603aa0  e83bb61500           call 0x75f0e0
// 00603aa5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00603aa9  83c418               add esp, 0x18
// 00603aac  57                   push edi
// 00603aad  53                   push ebx
// 00603aae  55                   push ebp
// 00603aaf  52                   push edx
// 00603ab0  8d442420             lea eax, [esp + 0x20]
// 00603ab4  50                   push eax
// 00603ab5  8bce                 mov ecx, esi
// 00603ab7  e87421e3ff           call 0x435c30
// 00603abc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00603ac0  5f                   pop edi
// 00603ac1  5e                   pop esi
// 00603ac2  5d                   pop ebp
// 00603ac3  5b                   pop ebx
// 00603ac4  83c410               add esp, 0x10
// 00603ac7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
