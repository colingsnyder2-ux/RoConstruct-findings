// from server: 100% by auto
// roc 2009-06 004db1c0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004db1c0
//
// 004db1c0  83ec10               sub esp, 0x10
// 004db1c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004db1c7  53                   push ebx
// 004db1c8  55                   push ebp
// 004db1c9  56                   push esi
// 004db1ca  57                   push edi
// 004db1cb  8bf1                 mov esi, ecx
// 004db1cd  50                   push eax
// 004db1ce  8d4c2414             lea ecx, [esp + 0x14]
// 004db1d2  51                   push ecx
// 004db1d3  8bce                 mov ecx, esi
// 004db1d5  e846fbffff           call 0x4dad20
// 004db1da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004db1de  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004db1e2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004db1e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004db1ea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004db1f2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004db1f6  52                   push edx
// 004db1f7  8d442428             lea eax, [esp + 0x28]
// 004db1fb  50                   push eax
// 004db1fc  57                   push edi
// 004db1fd  53                   push ebx
// 004db1fe  55                   push ebp
// 004db1ff  51                   push ecx
// 004db200  e8fbf2ffff           call 0x4da500
// 004db205  8b542428             mov edx, dword ptr [esp + 0x28]
// 004db209  83c418               add esp, 0x18
// 004db20c  57                   push edi
// 004db20d  53                   push ebx
// 004db20e  55                   push ebp
// 004db20f  52                   push edx
// 004db210  8d442420             lea eax, [esp + 0x20]
// 004db214  50                   push eax
// 004db215  8bce                 mov ecx, esi
// 004db217  e8c4fbffff           call 0x4dade0
// 004db21c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004db220  5f                   pop edi
// 004db221  5e                   pop esi
// 004db222  5d                   pop ebp
// 004db223  5b                   pop ebx
// 004db224  83c410               add esp, 0x10
// 004db227  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
