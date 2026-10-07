// roc 2007-08 00407220  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00407220
//
// 00407220  83ec10               sub esp, 0x10
// 00407223  8b442414             mov eax, dword ptr [esp + 0x14]
// 00407227  53                   push ebx
// 00407228  55                   push ebp
// 00407229  56                   push esi
// 0040722a  57                   push edi
// 0040722b  8bf1                 mov esi, ecx
// 0040722d  50                   push eax
// 0040722e  8d4c2414             lea ecx, [esp + 0x14]
// 00407232  51                   push ecx
// 00407233  8bce                 mov ecx, esi
// 00407235  e816c10200           call 0x433350
// 0040723a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040723e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00407242  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00407246  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040724a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00407252  8b542424             mov edx, dword ptr [esp + 0x24]
// 00407256  52                   push edx
// 00407257  8d442428             lea eax, [esp + 0x28]
// 0040725b  50                   push eax
// 0040725c  57                   push edi
// 0040725d  53                   push ebx
// 0040725e  55                   push ebp
// 0040725f  51                   push ecx
// 00407260  e8cbbf0200           call 0x433230
// 00407265  8b542428             mov edx, dword ptr [esp + 0x28]
// 00407269  83c418               add esp, 0x18
// 0040726c  57                   push edi
// 0040726d  53                   push ebx
// 0040726e  55                   push ebp
// 0040726f  52                   push edx
// 00407270  8d442420             lea eax, [esp + 0x20]
// 00407274  50                   push eax
// 00407275  8bce                 mov ecx, esi
// 00407277  e8447d0400           call 0x44efc0
// 0040727c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407280  5f                   pop edi
// 00407281  5e                   pop esi
// 00407282  5d                   pop ebp
// 00407283  5b                   pop ebx
// 00407284  83c410               add esp, 0x10
// 00407287  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
