// roc 2008-06 004a7d30  unit: RBX::VHint::?$FactoryProduct::Creator  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7d30
//
// 004a7d30  83ec10               sub esp, 0x10
// 004a7d33  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a7d37  53                   push ebx
// 004a7d38  55                   push ebp
// 004a7d39  56                   push esi
// 004a7d3a  57                   push edi
// 004a7d3b  8bf1                 mov esi, ecx
// 004a7d3d  50                   push eax
// 004a7d3e  8d4c2414             lea ecx, [esp + 0x14]
// 004a7d42  51                   push ecx
// 004a7d43  8bce                 mov ecx, esi
// 004a7d45  e856f6ffff           call 0x4a73a0
// 004a7d4a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a7d4e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a7d52  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004a7d56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a7d5a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a7d62  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a7d66  52                   push edx
// 004a7d67  8d442428             lea eax, [esp + 0x28]
// 004a7d6b  50                   push eax
// 004a7d6c  57                   push edi
// 004a7d6d  53                   push ebx
// 004a7d6e  55                   push ebp
// 004a7d6f  51                   push ecx
// 004a7d70  e80bf5ffff           call 0x4a7280
// 004a7d75  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a7d79  83c418               add esp, 0x18
// 004a7d7c  57                   push edi
// 004a7d7d  53                   push ebx
// 004a7d7e  55                   push ebp
// 004a7d7f  52                   push edx
// 004a7d80  8d442420             lea eax, [esp + 0x20]
// 004a7d84  50                   push eax
// 004a7d85  8bce                 mov ecx, esi
// 004a7d87  e80432fcff           call 0x46af90
// 004a7d8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a7d90  5f                   pop edi
// 004a7d91  5e                   pop esi
// 004a7d92  5d                   pop ebp
// 004a7d93  5b                   pop ebx
// 004a7d94  83c410               add esp, 0x10
// 004a7d97  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
