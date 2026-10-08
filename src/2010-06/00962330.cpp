// from server: 100% by auto
// roc 2010-06 00962330  unit: RBX::SceneUpdater  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00962330
//
// 00962330  83ec10               sub esp, 0x10
// 00962333  8b442414             mov eax, dword ptr [esp + 0x14]
// 00962337  53                   push ebx
// 00962338  55                   push ebp
// 00962339  56                   push esi
// 0096233a  57                   push edi
// 0096233b  8bf1                 mov esi, ecx
// 0096233d  50                   push eax
// 0096233e  8d4c2414             lea ecx, [esp + 0x14]
// 00962342  51                   push ecx
// 00962343  8bce                 mov ecx, esi
// 00962345  e896ebffff           call 0x960ee0
// 0096234a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0096234e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00962352  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00962356  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0096235a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00962362  8b542424             mov edx, dword ptr [esp + 0x24]
// 00962366  52                   push edx
// 00962367  8d442428             lea eax, [esp + 0x28]
// 0096236b  50                   push eax
// 0096236c  57                   push edi
// 0096236d  53                   push ebx
// 0096236e  55                   push ebp
// 0096236f  51                   push ecx
// 00962370  e82b02b8ff           call 0x4e25a0
// 00962375  8b542428             mov edx, dword ptr [esp + 0x28]
// 00962379  83c418               add esp, 0x18
// 0096237c  57                   push edi
// 0096237d  53                   push ebx
// 0096237e  55                   push ebp
// 0096237f  52                   push edx
// 00962380  8d442420             lea eax, [esp + 0x20]
// 00962384  50                   push eax
// 00962385  8bce                 mov ecx, esi
// 00962387  e8f49bcbff           call 0x61bf80
// 0096238c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00962390  5f                   pop edi
// 00962391  5e                   pop esi
// 00962392  5d                   pop ebp
// 00962393  5b                   pop ebx
// 00962394  83c410               add esp, 0x10
// 00962397  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
