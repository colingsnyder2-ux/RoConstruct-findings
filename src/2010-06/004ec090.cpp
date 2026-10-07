// roc 2010-06 004ec090  unit: RBX::Network::DirectPhysicsReceiver  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ec090
//
// 004ec090  83ec10               sub esp, 0x10
// 004ec093  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ec097  53                   push ebx
// 004ec098  55                   push ebp
// 004ec099  56                   push esi
// 004ec09a  57                   push edi
// 004ec09b  8bf1                 mov esi, ecx
// 004ec09d  50                   push eax
// 004ec09e  8d4c2414             lea ecx, [esp + 0x14]
// 004ec0a2  51                   push ecx
// 004ec0a3  8bce                 mov ecx, esi
// 004ec0a5  e816d2ffff           call 0x4e92c0
// 004ec0aa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ec0ae  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ec0b2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ec0b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ec0ba  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ec0c2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ec0c6  52                   push edx
// 004ec0c7  8d442428             lea eax, [esp + 0x28]
// 004ec0cb  50                   push eax
// 004ec0cc  57                   push edi
// 004ec0cd  53                   push ebx
// 004ec0ce  55                   push ebp
// 004ec0cf  51                   push ecx
// 004ec0d0  e83bc8ffff           call 0x4e8910
// 004ec0d5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ec0d9  83c418               add esp, 0x18
// 004ec0dc  57                   push edi
// 004ec0dd  53                   push ebx
// 004ec0de  55                   push ebp
// 004ec0df  52                   push edx
// 004ec0e0  8d442420             lea eax, [esp + 0x20]
// 004ec0e4  50                   push eax
// 004ec0e5  8bce                 mov ecx, esi
// 004ec0e7  e804eeffff           call 0x4eaef0
// 004ec0ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ec0f0  5f                   pop edi
// 004ec0f1  5e                   pop esi
// 004ec0f2  5d                   pop ebp
// 004ec0f3  5b                   pop ebx
// 004ec0f4  83c410               add esp, 0x10
// 004ec0f7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
