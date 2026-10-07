// roc 2009-06 0070b950  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070b950
//
// 0070b950  83ec10               sub esp, 0x10
// 0070b953  8b442414             mov eax, dword ptr [esp + 0x14]
// 0070b957  53                   push ebx
// 0070b958  55                   push ebp
// 0070b959  56                   push esi
// 0070b95a  57                   push edi
// 0070b95b  8bf1                 mov esi, ecx
// 0070b95d  50                   push eax
// 0070b95e  8d4c2414             lea ecx, [esp + 0x14]
// 0070b962  51                   push ecx
// 0070b963  8bce                 mov ecx, esi
// 0070b965  e866f6ffff           call 0x70afd0
// 0070b96a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0070b96e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0070b972  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0070b976  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070b97a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0070b982  8b542424             mov edx, dword ptr [esp + 0x24]
// 0070b986  52                   push edx
// 0070b987  8d442428             lea eax, [esp + 0x28]
// 0070b98b  50                   push eax
// 0070b98c  57                   push edi
// 0070b98d  53                   push ebx
// 0070b98e  55                   push ebp
// 0070b98f  51                   push ecx
// 0070b990  e8fb25d1ff           call 0x41df90
// 0070b995  8b542428             mov edx, dword ptr [esp + 0x28]
// 0070b999  83c418               add esp, 0x18
// 0070b99c  57                   push edi
// 0070b99d  53                   push ebx
// 0070b99e  55                   push ebp
// 0070b99f  52                   push edx
// 0070b9a0  8d442420             lea eax, [esp + 0x20]
// 0070b9a4  50                   push eax
// 0070b9a5  8bce                 mov ecx, esi
// 0070b9a7  e854feffff           call 0x70b800
// 0070b9ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070b9b0  5f                   pop edi
// 0070b9b1  5e                   pop esi
// 0070b9b2  5d                   pop ebp
// 0070b9b3  5b                   pop ebx
// 0070b9b4  83c410               add esp, 0x10
// 0070b9b7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
