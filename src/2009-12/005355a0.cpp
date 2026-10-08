// roc 2009-12 005355a0  unit: RBX::Network::IdSerializer  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005355a0
//
// 005355a0  83ec10               sub esp, 0x10
// 005355a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005355a7  53                   push ebx
// 005355a8  55                   push ebp
// 005355a9  56                   push esi
// 005355aa  57                   push edi
// 005355ab  8bf1                 mov esi, ecx
// 005355ad  50                   push eax
// 005355ae  8d4c2414             lea ecx, [esp + 0x14]
// 005355b2  51                   push ecx
// 005355b3  8bce                 mov ecx, esi
// 005355b5  e8f6edffff           call 0x5343b0
// 005355ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005355be  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005355c2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005355c6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005355ca  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005355d2  8b542424             mov edx, dword ptr [esp + 0x24]
// 005355d6  52                   push edx
// 005355d7  8d442428             lea eax, [esp + 0x28]
// 005355db  50                   push eax
// 005355dc  57                   push edi
// 005355dd  53                   push ebx
// 005355de  55                   push ebp
// 005355df  51                   push ecx
// 005355e0  e8abecffff           call 0x534290
// 005355e5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005355e9  83c418               add esp, 0x18
// 005355ec  57                   push edi
// 005355ed  53                   push ebx
// 005355ee  55                   push ebp
// 005355ef  52                   push edx
// 005355f0  8d442420             lea eax, [esp + 0x20]
// 005355f4  50                   push eax
// 005355f5  8bce                 mov ecx, esi
// 005355f7  e884aa2600           call 0x7a0080
// 005355fc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535600  5f                   pop edi
// 00535601  5e                   pop esi
// 00535602  5d                   pop ebp
// 00535603  5b                   pop ebx
// 00535604  83c410               add esp, 0x10
// 00535607  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
