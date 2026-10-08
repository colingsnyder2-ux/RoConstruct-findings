// roc 2009-12 00580750  unit: Ogre::RbxSceneUpdater  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00580750
//
// 00580750  83ec10               sub esp, 0x10
// 00580753  8b442414             mov eax, dword ptr [esp + 0x14]
// 00580757  53                   push ebx
// 00580758  55                   push ebp
// 00580759  56                   push esi
// 0058075a  57                   push edi
// 0058075b  8bf1                 mov esi, ecx
// 0058075d  50                   push eax
// 0058075e  8d4c2414             lea ecx, [esp + 0x14]
// 00580762  51                   push ecx
// 00580763  8bce                 mov ecx, esi
// 00580765  e816c8ffff           call 0x57cf80
// 0058076a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0058076e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00580772  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00580776  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058077a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00580782  8b542424             mov edx, dword ptr [esp + 0x24]
// 00580786  52                   push edx
// 00580787  8d442428             lea eax, [esp + 0x28]
// 0058078b  50                   push eax
// 0058078c  57                   push edi
// 0058078d  53                   push ebx
// 0058078e  55                   push ebp
// 0058078f  51                   push ecx
// 00580790  e8dbb9ffff           call 0x57c170
// 00580795  8b542428             mov edx, dword ptr [esp + 0x28]
// 00580799  83c418               add esp, 0x18
// 0058079c  57                   push edi
// 0058079d  53                   push ebx
// 0058079e  55                   push ebp
// 0058079f  52                   push edx
// 005807a0  8d442420             lea eax, [esp + 0x20]
// 005807a4  50                   push eax
// 005807a5  8bce                 mov ecx, esi
// 005807a7  e874f3ffff           call 0x57fb20
// 005807ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 005807b0  5f                   pop edi
// 005807b1  5e                   pop esi
// 005807b2  5d                   pop ebp
// 005807b3  5b                   pop ebx
// 005807b4  83c410               add esp, 0x10
// 005807b7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
