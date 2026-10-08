// roc 2009-12 00401850  unit: CAboutRobloxDialog  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401850
//
// 00401850  83ec10               sub esp, 0x10
// 00401853  8b442414             mov eax, dword ptr [esp + 0x14]
// 00401857  53                   push ebx
// 00401858  55                   push ebp
// 00401859  56                   push esi
// 0040185a  57                   push edi
// 0040185b  8bf1                 mov esi, ecx
// 0040185d  50                   push eax
// 0040185e  8d4c2414             lea ecx, [esp + 0x14]
// 00401862  51                   push ecx
// 00401863  8bce                 mov ecx, esi
// 00401865  e8967d3e00           call 0x7e9600
// 0040186a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040186e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00401872  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00401876  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040187a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00401882  8b542424             mov edx, dword ptr [esp + 0x24]
// 00401886  52                   push edx
// 00401887  8d442428             lea eax, [esp + 0x28]
// 0040188b  50                   push eax
// 0040188c  57                   push edi
// 0040188d  53                   push ebx
// 0040188e  55                   push ebp
// 0040188f  51                   push ecx
// 00401890  e82b7d3e00           call 0x7e95c0
// 00401895  8b542428             mov edx, dword ptr [esp + 0x28]
// 00401899  83c418               add esp, 0x18
// 0040189c  57                   push edi
// 0040189d  53                   push ebx
// 0040189e  55                   push ebp
// 0040189f  52                   push edx
// 004018a0  8d442420             lea eax, [esp + 0x20]
// 004018a4  50                   push eax
// 004018a5  8bce                 mov ecx, esi
// 004018a7  e8c4062600           call 0x661f70
// 004018ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 004018b0  5f                   pop edi
// 004018b1  5e                   pop esi
// 004018b2  5d                   pop ebp
// 004018b3  5b                   pop ebx
// 004018b4  83c410               add esp, 0x10
// 004018b7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
