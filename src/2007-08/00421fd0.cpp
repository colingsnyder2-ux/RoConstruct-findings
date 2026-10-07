// roc 2007-08 00421fd0  unit: CRobloxTreeCtrl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421fd0
//
// 00421fd0  83ec10               sub esp, 0x10
// 00421fd3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00421fd7  53                   push ebx
// 00421fd8  55                   push ebp
// 00421fd9  56                   push esi
// 00421fda  57                   push edi
// 00421fdb  8bf1                 mov esi, ecx
// 00421fdd  50                   push eax
// 00421fde  8d4c2414             lea ecx, [esp + 0x14]
// 00421fe2  51                   push ecx
// 00421fe3  8bce                 mov ecx, esi
// 00421fe5  e8f6f9ffff           call 0x4219e0
// 00421fea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00421fee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00421ff2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00421ff6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00421ffa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00422002  8b542424             mov edx, dword ptr [esp + 0x24]
// 00422006  52                   push edx
// 00422007  8d442428             lea eax, [esp + 0x28]
// 0042200b  50                   push eax
// 0042200c  57                   push edi
// 0042200d  53                   push ebx
// 0042200e  55                   push ebp
// 0042200f  51                   push ecx
// 00422010  e81b120100           call 0x433230
// 00422015  8b542428             mov edx, dword ptr [esp + 0x28]
// 00422019  83c418               add esp, 0x18
// 0042201c  57                   push edi
// 0042201d  53                   push ebx
// 0042201e  55                   push ebp
// 0042201f  52                   push edx
// 00422020  8d442420             lea eax, [esp + 0x20]
// 00422024  50                   push eax
// 00422025  8bce                 mov ecx, esi
// 00422027  e824fdffff           call 0x421d50
// 0042202c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00422030  5f                   pop edi
// 00422031  5e                   pop esi
// 00422032  5d                   pop ebp
// 00422033  5b                   pop ebx
// 00422034  83c410               add esp, 0x10
// 00422037  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
