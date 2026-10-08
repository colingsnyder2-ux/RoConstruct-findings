// roc 2009-12 0053dfc0  unit: RBX::Network::DirectPhysicsReceiver  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053dfc0
//
// 0053dfc0  83ec10               sub esp, 0x10
// 0053dfc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053dfc7  53                   push ebx
// 0053dfc8  55                   push ebp
// 0053dfc9  56                   push esi
// 0053dfca  57                   push edi
// 0053dfcb  8bf1                 mov esi, ecx
// 0053dfcd  50                   push eax
// 0053dfce  8d4c2414             lea ecx, [esp + 0x14]
// 0053dfd2  51                   push ecx
// 0053dfd3  8bce                 mov ecx, esi
// 0053dfd5  e876ceffff           call 0x53ae50
// 0053dfda  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053dfde  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0053dfe2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053dfe6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053dfea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053dff2  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053dff6  52                   push edx
// 0053dff7  8d442428             lea eax, [esp + 0x28]
// 0053dffb  50                   push eax
// 0053dffc  57                   push edi
// 0053dffd  53                   push ebx
// 0053dffe  55                   push ebp
// 0053dfff  51                   push ecx
// 0053e000  e88bc3ffff           call 0x53a390
// 0053e005  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053e009  83c418               add esp, 0x18
// 0053e00c  57                   push edi
// 0053e00d  53                   push ebx
// 0053e00e  55                   push ebp
// 0053e00f  52                   push edx
// 0053e010  8d442420             lea eax, [esp + 0x20]
// 0053e014  50                   push eax
// 0053e015  8bce                 mov ecx, esi
// 0053e017  e8d4e9ffff           call 0x53c9f0
// 0053e01c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053e020  5f                   pop edi
// 0053e021  5e                   pop esi
// 0053e022  5d                   pop ebp
// 0053e023  5b                   pop ebx
// 0053e024  83c410               add esp, 0x10
// 0053e027  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
