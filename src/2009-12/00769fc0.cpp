// roc 2009-12 00769fc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00769fc0
//
// 00769fc0  83ec10               sub esp, 0x10
// 00769fc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00769fc7  53                   push ebx
// 00769fc8  55                   push ebp
// 00769fc9  56                   push esi
// 00769fca  57                   push edi
// 00769fcb  8bf1                 mov esi, ecx
// 00769fcd  50                   push eax
// 00769fce  8d4c2414             lea ecx, [esp + 0x14]
// 00769fd2  51                   push ecx
// 00769fd3  8bce                 mov ecx, esi
// 00769fd5  e8b6e9ffff           call 0x768990
// 00769fda  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00769fde  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00769fe2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00769fe6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00769fea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00769ff2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00769ff6  52                   push edx
// 00769ff7  8d442428             lea eax, [esp + 0x28]
// 00769ffb  50                   push eax
// 00769ffc  57                   push edi
// 00769ffd  53                   push ebx
// 00769ffe  55                   push ebp
// 00769fff  51                   push ecx
// 0076a000  e84be7ffff           call 0x768750
// 0076a005  8b542428             mov edx, dword ptr [esp + 0x28]
// 0076a009  83c418               add esp, 0x18
// 0076a00c  57                   push edi
// 0076a00d  53                   push ebx
// 0076a00e  55                   push ebp
// 0076a00f  52                   push edx
// 0076a010  8d442420             lea eax, [esp + 0x20]
// 0076a014  50                   push eax
// 0076a015  8bce                 mov ecx, esi
// 0076a017  e8b4e0d1ff           call 0x4880d0
// 0076a01c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0076a020  5f                   pop edi
// 0076a021  5e                   pop esi
// 0076a022  5d                   pop ebp
// 0076a023  5b                   pop ebx
// 0076a024  83c410               add esp, 0x10
// 0076a027  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
