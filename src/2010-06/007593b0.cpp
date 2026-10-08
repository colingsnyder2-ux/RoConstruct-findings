// from server: 100% by auto
// roc 2010-06 007593b0  unit: RBX::PyramidPoly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007593b0
//
// 007593b0  83ec10               sub esp, 0x10
// 007593b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007593b7  53                   push ebx
// 007593b8  55                   push ebp
// 007593b9  56                   push esi
// 007593ba  57                   push edi
// 007593bb  8bf1                 mov esi, ecx
// 007593bd  50                   push eax
// 007593be  8d4c2414             lea ecx, [esp + 0x14]
// 007593c2  51                   push ecx
// 007593c3  8bce                 mov ecx, esi
// 007593c5  e8e6e4ffff           call 0x7578b0
// 007593ca  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007593ce  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007593d2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007593d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007593da  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007593e2  8b542424             mov edx, dword ptr [esp + 0x24]
// 007593e6  52                   push edx
// 007593e7  8d442428             lea eax, [esp + 0x28]
// 007593eb  50                   push eax
// 007593ec  57                   push edi
// 007593ed  53                   push ebx
// 007593ee  55                   push ebp
// 007593ef  51                   push ecx
// 007593f0  e82be6ffff           call 0x757a20
// 007593f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 007593f9  83c418               add esp, 0x18
// 007593fc  57                   push edi
// 007593fd  53                   push ebx
// 007593fe  55                   push ebp
// 007593ff  52                   push edx
// 00759400  8d442420             lea eax, [esp + 0x20]
// 00759404  50                   push eax
// 00759405  8bce                 mov ecx, esi
// 00759407  e8c4feffff           call 0x7592d0
// 0075940c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00759410  5f                   pop edi
// 00759411  5e                   pop esi
// 00759412  5d                   pop ebp
// 00759413  5b                   pop ebx
// 00759414  83c410               add esp, 0x10
// 00759417  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
