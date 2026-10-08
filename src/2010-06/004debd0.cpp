// from server: 100% by auto
// roc 2010-06 004debd0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004debd0
//
// 004debd0  83ec10               sub esp, 0x10
// 004debd3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004debd7  53                   push ebx
// 004debd8  55                   push ebp
// 004debd9  56                   push esi
// 004debda  57                   push edi
// 004debdb  8bf1                 mov esi, ecx
// 004debdd  50                   push eax
// 004debde  8d4c2414             lea ecx, [esp + 0x14]
// 004debe2  51                   push ecx
// 004debe3  8bce                 mov ecx, esi
// 004debe5  e8c6f9ffff           call 0x4de5b0
// 004debea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004debee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004debf2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004debf6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004debfa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004dec02  8b542424             mov edx, dword ptr [esp + 0x24]
// 004dec06  52                   push edx
// 004dec07  8d442428             lea eax, [esp + 0x28]
// 004dec0b  50                   push eax
// 004dec0c  57                   push edi
// 004dec0d  53                   push ebx
// 004dec0e  55                   push ebp
// 004dec0f  51                   push ecx
// 004dec10  e84bf0ffff           call 0x4ddc60
// 004dec15  8b542428             mov edx, dword ptr [esp + 0x28]
// 004dec19  83c418               add esp, 0x18
// 004dec1c  57                   push edi
// 004dec1d  53                   push ebx
// 004dec1e  55                   push ebp
// 004dec1f  52                   push edx
// 004dec20  8d442420             lea eax, [esp + 0x20]
// 004dec24  50                   push eax
// 004dec25  8bce                 mov ecx, esi
// 004dec27  e8c4fbffff           call 0x4de7f0
// 004dec2c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004dec30  5f                   pop edi
// 004dec31  5e                   pop esi
// 004dec32  5d                   pop ebp
// 004dec33  5b                   pop ebx
// 004dec34  83c410               add esp, 0x10
// 004dec37  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
