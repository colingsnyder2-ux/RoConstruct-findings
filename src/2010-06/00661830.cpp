// from server: 100% by auto
// roc 2010-06 00661830  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00661830
//
// 00661830  83ec10               sub esp, 0x10
// 00661833  8b442414             mov eax, dword ptr [esp + 0x14]
// 00661837  53                   push ebx
// 00661838  55                   push ebp
// 00661839  56                   push esi
// 0066183a  57                   push edi
// 0066183b  8bf1                 mov esi, ecx
// 0066183d  50                   push eax
// 0066183e  8d4c2414             lea ecx, [esp + 0x14]
// 00661842  51                   push ecx
// 00661843  8bce                 mov ecx, esi
// 00661845  e8d6cfdbff           call 0x41e820
// 0066184a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066184e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00661852  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00661856  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066185a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00661862  8b542424             mov edx, dword ptr [esp + 0x24]
// 00661866  52                   push edx
// 00661867  8d442428             lea eax, [esp + 0x28]
// 0066186b  50                   push eax
// 0066186c  57                   push edi
// 0066186d  53                   push ebx
// 0066186e  55                   push ebp
// 0066186f  51                   push ecx
// 00661870  e8dbe1ffff           call 0x65fa50
// 00661875  8b542428             mov edx, dword ptr [esp + 0x28]
// 00661879  83c418               add esp, 0x18
// 0066187c  57                   push edi
// 0066187d  53                   push ebx
// 0066187e  55                   push ebp
// 0066187f  52                   push edx
// 00661880  8d442420             lea eax, [esp + 0x20]
// 00661884  50                   push eax
// 00661885  8bce                 mov ecx, esi
// 00661887  e844f9ffff           call 0x6611d0
// 0066188c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00661890  5f                   pop edi
// 00661891  5e                   pop esi
// 00661892  5d                   pop ebp
// 00661893  5b                   pop ebx
// 00661894  83c410               add esp, 0x10
// 00661897  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
