// from server: 100% by auto
// roc 2010-06 006f0b70  unit: RBX::VInstance::?$NonFactoryProduct  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f0b70
//
// 006f0b70  83ec10               sub esp, 0x10
// 006f0b73  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f0b77  53                   push ebx
// 006f0b78  55                   push ebp
// 006f0b79  56                   push esi
// 006f0b7a  57                   push edi
// 006f0b7b  8bf1                 mov esi, ecx
// 006f0b7d  50                   push eax
// 006f0b7e  8d4c2414             lea ecx, [esp + 0x14]
// 006f0b82  51                   push ecx
// 006f0b83  8bce                 mov ecx, esi
// 006f0b85  e886eeffff           call 0x6efa10
// 006f0b8a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006f0b8e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f0b92  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f0b96  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f0b9a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006f0ba2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f0ba6  52                   push edx
// 006f0ba7  8d442428             lea eax, [esp + 0x28]
// 006f0bab  50                   push eax
// 006f0bac  57                   push edi
// 006f0bad  53                   push ebx
// 006f0bae  55                   push ebp
// 006f0baf  51                   push ecx
// 006f0bb0  e81beeffff           call 0x6ef9d0
// 006f0bb5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f0bb9  83c418               add esp, 0x18
// 006f0bbc  57                   push edi
// 006f0bbd  53                   push ebx
// 006f0bbe  55                   push ebp
// 006f0bbf  52                   push edx
// 006f0bc0  8d442420             lea eax, [esp + 0x20]
// 006f0bc4  50                   push eax
// 006f0bc5  8bce                 mov ecx, esi
// 006f0bc7  e82450ddff           call 0x4c5bf0
// 006f0bcc  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f0bd0  5f                   pop edi
// 006f0bd1  5e                   pop esi
// 006f0bd2  5d                   pop ebp
// 006f0bd3  5b                   pop ebx
// 006f0bd4  83c410               add esp, 0x10
// 006f0bd7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
