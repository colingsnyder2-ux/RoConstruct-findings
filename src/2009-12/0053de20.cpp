// roc 2009-12 0053de20  unit: RBX::Network::DirectPhysicsReceiver  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053de20
//
// 0053de20  83ec10               sub esp, 0x10
// 0053de23  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053de27  53                   push ebx
// 0053de28  55                   push ebp
// 0053de29  56                   push esi
// 0053de2a  57                   push edi
// 0053de2b  8bf1                 mov esi, ecx
// 0053de2d  50                   push eax
// 0053de2e  8d4c2414             lea ecx, [esp + 0x14]
// 0053de32  51                   push ecx
// 0053de33  8bce                 mov ecx, esi
// 0053de35  e866cfffff           call 0x53ada0
// 0053de3a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053de3e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0053de42  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053de46  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053de4a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053de52  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053de56  52                   push edx
// 0053de57  8d442428             lea eax, [esp + 0x28]
// 0053de5b  50                   push eax
// 0053de5c  57                   push edi
// 0053de5d  53                   push ebx
// 0053de5e  55                   push ebp
// 0053de5f  51                   push ecx
// 0053de60  e82bc5ffff           call 0x53a390
// 0053de65  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053de69  83c418               add esp, 0x18
// 0053de6c  57                   push edi
// 0053de6d  53                   push ebx
// 0053de6e  55                   push ebp
// 0053de6f  52                   push edx
// 0053de70  8d442420             lea eax, [esp + 0x20]
// 0053de74  50                   push eax
// 0053de75  8bce                 mov ecx, esi
// 0053de77  e874ebffff           call 0x53c9f0
// 0053de7c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053de80  5f                   pop edi
// 0053de81  5e                   pop esi
// 0053de82  5d                   pop ebp
// 0053de83  5b                   pop ebx
// 0053de84  83c410               add esp, 0x10
// 0053de87  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
