// roc 2009-12 006f7380  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f7380
//
// 006f7380  83ec10               sub esp, 0x10
// 006f7383  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f7387  53                   push ebx
// 006f7388  55                   push ebp
// 006f7389  56                   push esi
// 006f738a  57                   push edi
// 006f738b  8bf1                 mov esi, ecx
// 006f738d  50                   push eax
// 006f738e  8d4c2414             lea ecx, [esp + 0x14]
// 006f7392  51                   push ecx
// 006f7393  8bce                 mov ecx, esi
// 006f7395  e866e0ffff           call 0x6f5400
// 006f739a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006f739e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f73a2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f73a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f73aa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006f73b2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f73b6  52                   push edx
// 006f73b7  8d442428             lea eax, [esp + 0x28]
// 006f73bb  50                   push eax
// 006f73bc  57                   push edi
// 006f73bd  53                   push ebx
// 006f73be  55                   push ebp
// 006f73bf  51                   push ecx
// 006f73c0  e8fb210f00           call 0x7e95c0
// 006f73c5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f73c9  83c418               add esp, 0x18
// 006f73cc  57                   push edi
// 006f73cd  53                   push ebx
// 006f73ce  55                   push ebp
// 006f73cf  52                   push edx
// 006f73d0  8d442420             lea eax, [esp + 0x20]
// 006f73d4  50                   push eax
// 006f73d5  8bce                 mov ecx, esi
// 006f73d7  e844f9ffff           call 0x6f6d20
// 006f73dc  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f73e0  5f                   pop edi
// 006f73e1  5e                   pop esi
// 006f73e2  5d                   pop ebp
// 006f73e3  5b                   pop ebx
// 006f73e4  83c410               add esp, 0x10
// 006f73e7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
