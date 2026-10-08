// from server: 100% by auto
// roc 2009-06 00401d00  unit: CAboutRobloxDialog  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00401d00
//
// 00401d00  83ec10               sub esp, 0x10
// 00401d03  8b442414             mov eax, dword ptr [esp + 0x14]
// 00401d07  53                   push ebx
// 00401d08  55                   push ebp
// 00401d09  56                   push esi
// 00401d0a  57                   push edi
// 00401d0b  8bf1                 mov esi, ecx
// 00401d0d  50                   push eax
// 00401d0e  8d4c2414             lea ecx, [esp + 0x14]
// 00401d12  51                   push ecx
// 00401d13  8bce                 mov ecx, esi
// 00401d15  e8a6c13000           call 0x70dec0
// 00401d1a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00401d1e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00401d22  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00401d26  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00401d2a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00401d32  8b542424             mov edx, dword ptr [esp + 0x24]
// 00401d36  52                   push edx
// 00401d37  8d442428             lea eax, [esp + 0x28]
// 00401d3b  50                   push eax
// 00401d3c  57                   push edi
// 00401d3d  53                   push ebx
// 00401d3e  55                   push ebp
// 00401d3f  51                   push ecx
// 00401d40  e84bc20100           call 0x41df90
// 00401d45  8b542428             mov edx, dword ptr [esp + 0x28]
// 00401d49  83c418               add esp, 0x18
// 00401d4c  57                   push edi
// 00401d4d  53                   push ebx
// 00401d4e  55                   push ebp
// 00401d4f  52                   push edx
// 00401d50  8d442420             lea eax, [esp + 0x20]
// 00401d54  50                   push eax
// 00401d55  8bce                 mov ecx, esi
// 00401d57  e8c4feffff           call 0x401c20
// 00401d5c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00401d60  5f                   pop edi
// 00401d61  5e                   pop esi
// 00401d62  5d                   pop ebp
// 00401d63  5b                   pop ebx
// 00401d64  83c410               add esp, 0x10
// 00401d67  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
