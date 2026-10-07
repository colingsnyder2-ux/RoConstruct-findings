// roc 2010-06 005423e0  unit: RBX::AggregatingSceneManager  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005423e0
//
// 005423e0  83ec10               sub esp, 0x10
// 005423e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005423e7  53                   push ebx
// 005423e8  55                   push ebp
// 005423e9  56                   push esi
// 005423ea  57                   push edi
// 005423eb  8bf1                 mov esi, ecx
// 005423ed  50                   push eax
// 005423ee  8d4c2414             lea ecx, [esp + 0x14]
// 005423f2  51                   push ecx
// 005423f3  8bce                 mov ecx, esi
// 005423f5  e826c4edff           call 0x41e820
// 005423fa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005423fe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00542402  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00542406  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054240a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00542412  8b542424             mov edx, dword ptr [esp + 0x24]
// 00542416  52                   push edx
// 00542417  8d442428             lea eax, [esp + 0x28]
// 0054241b  50                   push eax
// 0054241c  57                   push edi
// 0054241d  53                   push ebx
// 0054241e  55                   push ebp
// 0054241f  51                   push ecx
// 00542420  e82bd61100           call 0x65fa50
// 00542425  8b542428             mov edx, dword ptr [esp + 0x28]
// 00542429  83c418               add esp, 0x18
// 0054242c  57                   push edi
// 0054242d  53                   push ebx
// 0054242e  55                   push ebp
// 0054242f  52                   push edx
// 00542430  8d442420             lea eax, [esp + 0x20]
// 00542434  50                   push eax
// 00542435  8bce                 mov ecx, esi
// 00542437  e874f6ffff           call 0x541ab0
// 0054243c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00542440  5f                   pop edi
// 00542441  5e                   pop esi
// 00542442  5d                   pop ebp
// 00542443  5b                   pop ebx
// 00542444  83c410               add esp, 0x10
// 00542447  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
