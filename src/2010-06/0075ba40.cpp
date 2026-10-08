// from server: 100% by auto
// roc 2010-06 0075ba40  unit: RBX::ParallelRampPoly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ba40
//
// 0075ba40  83ec10               sub esp, 0x10
// 0075ba43  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075ba47  53                   push ebx
// 0075ba48  55                   push ebp
// 0075ba49  56                   push esi
// 0075ba4a  57                   push edi
// 0075ba4b  8bf1                 mov esi, ecx
// 0075ba4d  50                   push eax
// 0075ba4e  8d4c2414             lea ecx, [esp + 0x14]
// 0075ba52  51                   push ecx
// 0075ba53  8bce                 mov ecx, esi
// 0075ba55  e846e3ffff           call 0x759da0
// 0075ba5a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075ba5e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0075ba62  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0075ba66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075ba6a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0075ba72  8b542424             mov edx, dword ptr [esp + 0x24]
// 0075ba76  52                   push edx
// 0075ba77  8d442428             lea eax, [esp + 0x28]
// 0075ba7b  50                   push eax
// 0075ba7c  57                   push edi
// 0075ba7d  53                   push ebx
// 0075ba7e  55                   push ebp
// 0075ba7f  51                   push ecx
// 0075ba80  e8dbf1ffff           call 0x75ac60
// 0075ba85  8b542428             mov edx, dword ptr [esp + 0x28]
// 0075ba89  83c418               add esp, 0x18
// 0075ba8c  57                   push edi
// 0075ba8d  53                   push ebx
// 0075ba8e  55                   push ebp
// 0075ba8f  52                   push edx
// 0075ba90  8d442420             lea eax, [esp + 0x20]
// 0075ba94  50                   push eax
// 0075ba95  8bce                 mov ecx, esi
// 0075ba97  e824feffff           call 0x75b8c0
// 0075ba9c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0075baa0  5f                   pop edi
// 0075baa1  5e                   pop esi
// 0075baa2  5d                   pop ebp
// 0075baa3  5b                   pop ebx
// 0075baa4  83c410               add esp, 0x10
// 0075baa7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
