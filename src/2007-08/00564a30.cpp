// from server: 100% by auto
// roc 2007-08 00564a30  unit: RBX::RedoState  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564a30
//
// 00564a30  83ec10               sub esp, 0x10
// 00564a33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00564a37  53                   push ebx
// 00564a38  55                   push ebp
// 00564a39  56                   push esi
// 00564a3a  57                   push edi
// 00564a3b  8bf1                 mov esi, ecx
// 00564a3d  50                   push eax
// 00564a3e  8d4c2414             lea ecx, [esp + 0x14]
// 00564a42  51                   push ecx
// 00564a43  8bce                 mov ecx, esi
// 00564a45  e806e9ecff           call 0x433350
// 00564a4a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00564a4e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00564a52  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00564a56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00564a5a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00564a62  8b542424             mov edx, dword ptr [esp + 0x24]
// 00564a66  52                   push edx
// 00564a67  8d442428             lea eax, [esp + 0x28]
// 00564a6b  50                   push eax
// 00564a6c  57                   push edi
// 00564a6d  53                   push ebx
// 00564a6e  55                   push ebp
// 00564a6f  51                   push ecx
// 00564a70  e8bbe7ecff           call 0x433230
// 00564a75  8b542428             mov edx, dword ptr [esp + 0x28]
// 00564a79  83c418               add esp, 0x18
// 00564a7c  57                   push edi
// 00564a7d  53                   push ebx
// 00564a7e  55                   push ebp
// 00564a7f  52                   push edx
// 00564a80  8d442420             lea eax, [esp + 0x20]
// 00564a84  50                   push eax
// 00564a85  8bce                 mov ecx, esi
// 00564a87  e8a4290500           call 0x5b7430
// 00564a8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00564a90  5f                   pop edi
// 00564a91  5e                   pop esi
// 00564a92  5d                   pop ebp
// 00564a93  5b                   pop ebx
// 00564a94  83c410               add esp, 0x10
// 00564a97  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
