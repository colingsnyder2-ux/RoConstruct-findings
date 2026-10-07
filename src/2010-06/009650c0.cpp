// roc 2010-06 009650c0  unit: Ogre::RbxSceneUpdater  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009650c0
//
// 009650c0  83ec10               sub esp, 0x10
// 009650c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 009650c7  53                   push ebx
// 009650c8  55                   push ebp
// 009650c9  56                   push esi
// 009650ca  57                   push edi
// 009650cb  8bf1                 mov esi, ecx
// 009650cd  50                   push eax
// 009650ce  8d4c2414             lea ecx, [esp + 0x14]
// 009650d2  51                   push ecx
// 009650d3  8bce                 mov ecx, esi
// 009650d5  e856cbffff           call 0x961c30
// 009650da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009650de  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009650e2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009650e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009650ea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 009650f2  8b542424             mov edx, dword ptr [esp + 0x24]
// 009650f6  52                   push edx
// 009650f7  8d442428             lea eax, [esp + 0x28]
// 009650fb  50                   push eax
// 009650fc  57                   push edi
// 009650fd  53                   push ebx
// 009650fe  55                   push ebp
// 009650ff  51                   push ecx
// 00965100  e8ebc0ffff           call 0x9611f0
// 00965105  8b542428             mov edx, dword ptr [esp + 0x28]
// 00965109  83c418               add esp, 0x18
// 0096510c  57                   push edi
// 0096510d  53                   push ebx
// 0096510e  55                   push ebp
// 0096510f  52                   push edx
// 00965110  8d442420             lea eax, [esp + 0x20]
// 00965114  50                   push eax
// 00965115  8bce                 mov ecx, esi
// 00965117  e874f3ffff           call 0x964490
// 0096511c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00965120  5f                   pop edi
// 00965121  5e                   pop esi
// 00965122  5d                   pop ebp
// 00965123  5b                   pop ebx
// 00965124  83c410               add esp, 0x10
// 00965127  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
