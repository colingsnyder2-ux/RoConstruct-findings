// from server: 100% by auto
// roc 2009-06 004e73c0  unit: RBX::Network::DirectPhysicsReceiver  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e73c0
//
// 004e73c0  83ec10               sub esp, 0x10
// 004e73c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e73c7  53                   push ebx
// 004e73c8  55                   push ebp
// 004e73c9  56                   push esi
// 004e73ca  57                   push edi
// 004e73cb  8bf1                 mov esi, ecx
// 004e73cd  50                   push eax
// 004e73ce  8d4c2414             lea ecx, [esp + 0x14]
// 004e73d2  51                   push ecx
// 004e73d3  8bce                 mov ecx, esi
// 004e73d5  e856e4ffff           call 0x4e5830
// 004e73da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e73de  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e73e2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004e73e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e73ea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004e73f2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e73f6  52                   push edx
// 004e73f7  8d442428             lea eax, [esp + 0x28]
// 004e73fb  50                   push eax
// 004e73fc  57                   push edi
// 004e73fd  53                   push ebx
// 004e73fe  55                   push ebp
// 004e73ff  51                   push ecx
// 004e7400  e89bdeffff           call 0x4e52a0
// 004e7405  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e7409  83c418               add esp, 0x18
// 004e740c  57                   push edi
// 004e740d  53                   push ebx
// 004e740e  55                   push ebp
// 004e740f  52                   push edx
// 004e7410  8d442420             lea eax, [esp + 0x20]
// 004e7414  50                   push eax
// 004e7415  8bce                 mov ecx, esi
// 004e7417  e8f41cffff           call 0x4d9110
// 004e741c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e7420  5f                   pop edi
// 004e7421  5e                   pop esi
// 004e7422  5d                   pop ebp
// 004e7423  5b                   pop ebx
// 004e7424  83c410               add esp, 0x10
// 004e7427  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
