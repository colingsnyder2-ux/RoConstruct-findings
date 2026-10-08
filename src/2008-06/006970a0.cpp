// from server: 100% by auto
// roc 2008-06 006970a0  unit: Ogre::RbxSceneManager  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006970a0
//
// 006970a0  83ec10               sub esp, 0x10
// 006970a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006970a7  53                   push ebx
// 006970a8  55                   push ebp
// 006970a9  56                   push esi
// 006970aa  57                   push edi
// 006970ab  8bf1                 mov esi, ecx
// 006970ad  50                   push eax
// 006970ae  8d4c2414             lea ecx, [esp + 0x14]
// 006970b2  51                   push ecx
// 006970b3  8bce                 mov ecx, esi
// 006970b5  e8a6b1ffff           call 0x692260
// 006970ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006970be  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006970c2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006970c6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006970ca  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006970d2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006970d6  52                   push edx
// 006970d7  8d442428             lea eax, [esp + 0x28]
// 006970db  50                   push eax
// 006970dc  57                   push edi
// 006970dd  53                   push ebx
// 006970de  55                   push ebp
// 006970df  51                   push ecx
// 006970e0  e82b91ffff           call 0x690210
// 006970e5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006970e9  83c418               add esp, 0x18
// 006970ec  57                   push edi
// 006970ed  53                   push ebx
// 006970ee  55                   push ebp
// 006970ef  52                   push edx
// 006970f0  8d442420             lea eax, [esp + 0x20]
// 006970f4  50                   push eax
// 006970f5  8bce                 mov ecx, esi
// 006970f7  e8b4c8ffff           call 0x6939b0
// 006970fc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00697100  5f                   pop edi
// 00697101  5e                   pop esi
// 00697102  5d                   pop ebp
// 00697103  5b                   pop ebx
// 00697104  83c410               add esp, 0x10
// 00697107  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
