// roc 2008-06 004af4c0  unit: RBX::Network::Replicator::MarkerItem  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af4c0
//
// 004af4c0  83ec10               sub esp, 0x10
// 004af4c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004af4c7  53                   push ebx
// 004af4c8  55                   push ebp
// 004af4c9  56                   push esi
// 004af4ca  57                   push edi
// 004af4cb  8bf1                 mov esi, ecx
// 004af4cd  50                   push eax
// 004af4ce  8d4c2414             lea ecx, [esp + 0x14]
// 004af4d2  51                   push ecx
// 004af4d3  8bce                 mov ecx, esi
// 004af4d5  e866e4ffff           call 0x4ad940
// 004af4da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004af4de  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004af4e2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004af4e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af4ea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004af4f2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004af4f6  52                   push edx
// 004af4f7  8d442428             lea eax, [esp + 0x28]
// 004af4fb  50                   push eax
// 004af4fc  57                   push edi
// 004af4fd  53                   push ebx
// 004af4fe  55                   push ebp
// 004af4ff  51                   push ecx
// 004af500  e81be0ffff           call 0x4ad520
// 004af505  8b542428             mov edx, dword ptr [esp + 0x28]
// 004af509  83c418               add esp, 0x18
// 004af50c  57                   push edi
// 004af50d  53                   push ebx
// 004af50e  55                   push ebp
// 004af50f  52                   push edx
// 004af510  8d442420             lea eax, [esp + 0x20]
// 004af514  50                   push eax
// 004af515  8bce                 mov ecx, esi
// 004af517  e8d48efeff           call 0x4983f0
// 004af51c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004af520  5f                   pop edi
// 004af521  5e                   pop esi
// 004af522  5d                   pop ebp
// 004af523  5b                   pop ebx
// 004af524  83c410               add esp, 0x10
// 004af527  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
