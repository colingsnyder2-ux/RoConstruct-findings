// from server: 100% by auto
// roc 2010-06 004e38b0  unit: RBX::Network::IdSerializer  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e38b0
//
// 004e38b0  83ec10               sub esp, 0x10
// 004e38b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e38b7  53                   push ebx
// 004e38b8  55                   push ebp
// 004e38b9  56                   push esi
// 004e38ba  57                   push edi
// 004e38bb  8bf1                 mov esi, ecx
// 004e38bd  50                   push eax
// 004e38be  8d4c2414             lea ecx, [esp + 0x14]
// 004e38c2  51                   push ecx
// 004e38c3  8bce                 mov ecx, esi
// 004e38c5  e8f6edffff           call 0x4e26c0
// 004e38ca  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e38ce  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e38d2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004e38d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e38da  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004e38e2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e38e6  52                   push edx
// 004e38e7  8d442428             lea eax, [esp + 0x28]
// 004e38eb  50                   push eax
// 004e38ec  57                   push edi
// 004e38ed  53                   push ebx
// 004e38ee  55                   push ebp
// 004e38ef  51                   push ecx
// 004e38f0  e8abecffff           call 0x4e25a0
// 004e38f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e38f9  83c418               add esp, 0x18
// 004e38fc  57                   push edi
// 004e38fd  53                   push ebx
// 004e38fe  55                   push ebp
// 004e38ff  52                   push edx
// 004e3900  8d442420             lea eax, [esp + 0x20]
// 004e3904  50                   push eax
// 004e3905  8bce                 mov ecx, esi
// 004e3907  e8d49df9ff           call 0x47d6e0
// 004e390c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e3910  5f                   pop edi
// 004e3911  5e                   pop esi
// 004e3912  5d                   pop ebp
// 004e3913  5b                   pop ebx
// 004e3914  83c410               add esp, 0x10
// 004e3917  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
