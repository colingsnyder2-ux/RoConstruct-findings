// from server: 100% by auto
// roc 2008-06 005e9f60  unit: RBX::PhysicsService  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9f60
//
// 005e9f60  83ec10               sub esp, 0x10
// 005e9f63  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e9f67  53                   push ebx
// 005e9f68  55                   push ebp
// 005e9f69  56                   push esi
// 005e9f6a  57                   push edi
// 005e9f6b  8bf1                 mov esi, ecx
// 005e9f6d  50                   push eax
// 005e9f6e  8d4c2414             lea ecx, [esp + 0x14]
// 005e9f72  51                   push ecx
// 005e9f73  8bce                 mov ecx, esi
// 005e9f75  e83639ecff           call 0x4ad8b0
// 005e9f7a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e9f7e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e9f82  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005e9f86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e9f8a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005e9f92  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e9f96  52                   push edx
// 005e9f97  8d442428             lea eax, [esp + 0x28]
// 005e9f9b  50                   push eax
// 005e9f9c  57                   push edi
// 005e9f9d  53                   push ebx
// 005e9f9e  55                   push ebp
// 005e9f9f  51                   push ecx
// 005e9fa0  e84b0d0600           call 0x64acf0
// 005e9fa5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e9fa9  83c418               add esp, 0x18
// 005e9fac  57                   push edi
// 005e9fad  53                   push ebx
// 005e9fae  55                   push ebp
// 005e9faf  52                   push edx
// 005e9fb0  8d442420             lea eax, [esp + 0x20]
// 005e9fb4  50                   push eax
// 005e9fb5  8bce                 mov ecx, esi
// 005e9fb7  e8740d0600           call 0x64ad30
// 005e9fbc  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e9fc0  5f                   pop edi
// 005e9fc1  5e                   pop esi
// 005e9fc2  5d                   pop ebp
// 005e9fc3  5b                   pop ebx
// 005e9fc4  83c410               add esp, 0x10
// 005e9fc7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
