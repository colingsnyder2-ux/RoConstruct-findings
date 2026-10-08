// roc 2009-12 005307e0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005307e0
//
// 005307e0  83ec10               sub esp, 0x10
// 005307e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005307e7  53                   push ebx
// 005307e8  55                   push ebp
// 005307e9  56                   push esi
// 005307ea  57                   push edi
// 005307eb  8bf1                 mov esi, ecx
// 005307ed  50                   push eax
// 005307ee  8d4c2414             lea ecx, [esp + 0x14]
// 005307f2  51                   push ecx
// 005307f3  8bce                 mov ecx, esi
// 005307f5  e8c6f9ffff           call 0x5301c0
// 005307fa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005307fe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00530802  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00530806  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053080a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00530812  8b542424             mov edx, dword ptr [esp + 0x24]
// 00530816  52                   push edx
// 00530817  8d442428             lea eax, [esp + 0x28]
// 0053081b  50                   push eax
// 0053081c  57                   push edi
// 0053081d  53                   push ebx
// 0053081e  55                   push ebp
// 0053081f  51                   push ecx
// 00530820  e84bf0ffff           call 0x52f870
// 00530825  8b542428             mov edx, dword ptr [esp + 0x28]
// 00530829  83c418               add esp, 0x18
// 0053082c  57                   push edi
// 0053082d  53                   push ebx
// 0053082e  55                   push ebp
// 0053082f  52                   push edx
// 00530830  8d442420             lea eax, [esp + 0x20]
// 00530834  50                   push eax
// 00530835  8bce                 mov ecx, esi
// 00530837  e8c4fbffff           call 0x530400
// 0053083c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00530840  5f                   pop edi
// 00530841  5e                   pop esi
// 00530842  5d                   pop ebp
// 00530843  5b                   pop ebx
// 00530844  83c410               add esp, 0x10
// 00530847  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
