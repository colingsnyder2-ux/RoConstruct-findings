// roc 2009-12 007e6af0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e6af0
//
// 007e6af0  83ec10               sub esp, 0x10
// 007e6af3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e6af7  53                   push ebx
// 007e6af8  55                   push ebp
// 007e6af9  56                   push esi
// 007e6afa  57                   push edi
// 007e6afb  8bf1                 mov esi, ecx
// 007e6afd  50                   push eax
// 007e6afe  8d4c2414             lea ecx, [esp + 0x14]
// 007e6b02  51                   push ecx
// 007e6b03  8bce                 mov ecx, esi
// 007e6b05  e8f6e8f0ff           call 0x6f5400
// 007e6b0a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007e6b0e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007e6b12  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007e6b16  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e6b1a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007e6b22  8b542424             mov edx, dword ptr [esp + 0x24]
// 007e6b26  52                   push edx
// 007e6b27  8d442428             lea eax, [esp + 0x28]
// 007e6b2b  50                   push eax
// 007e6b2c  57                   push edi
// 007e6b2d  53                   push ebx
// 007e6b2e  55                   push ebp
// 007e6b2f  51                   push ecx
// 007e6b30  e88b2a0000           call 0x7e95c0
// 007e6b35  8b542428             mov edx, dword ptr [esp + 0x28]
// 007e6b39  83c418               add esp, 0x18
// 007e6b3c  57                   push edi
// 007e6b3d  53                   push ebx
// 007e6b3e  55                   push ebp
// 007e6b3f  52                   push edx
// 007e6b40  8d442420             lea eax, [esp + 0x20]
// 007e6b44  50                   push eax
// 007e6b45  8bce                 mov ecx, esi
// 007e6b47  e81489c3ff           call 0x41f460
// 007e6b4c  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e6b50  5f                   pop edi
// 007e6b51  5e                   pop esi
// 007e6b52  5d                   pop ebp
// 007e6b53  5b                   pop ebx
// 007e6b54  83c410               add esp, 0x10
// 007e6b57  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
