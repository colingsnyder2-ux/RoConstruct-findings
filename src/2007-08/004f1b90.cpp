// from server: 100% by auto
// roc 2007-08 004f1b90  unit: RBX::Render::AggregatingSceneManager  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1b90
//
// 004f1b90  83ec10               sub esp, 0x10
// 004f1b93  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f1b97  53                   push ebx
// 004f1b98  55                   push ebp
// 004f1b99  56                   push esi
// 004f1b9a  57                   push edi
// 004f1b9b  8bf1                 mov esi, ecx
// 004f1b9d  50                   push eax
// 004f1b9e  8d4c2414             lea ecx, [esp + 0x14]
// 004f1ba2  51                   push ecx
// 004f1ba3  8bce                 mov ecx, esi
// 004f1ba5  e836fef2ff           call 0x4219e0
// 004f1baa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f1bae  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004f1bb2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f1bb6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f1bba  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004f1bc2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004f1bc6  52                   push edx
// 004f1bc7  8d442428             lea eax, [esp + 0x28]
// 004f1bcb  50                   push eax
// 004f1bcc  57                   push edi
// 004f1bcd  53                   push ebx
// 004f1bce  55                   push ebp
// 004f1bcf  51                   push ecx
// 004f1bd0  e85b16f4ff           call 0x433230
// 004f1bd5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004f1bd9  83c418               add esp, 0x18
// 004f1bdc  57                   push edi
// 004f1bdd  53                   push ebx
// 004f1bde  55                   push ebp
// 004f1bdf  52                   push edx
// 004f1be0  8d442420             lea eax, [esp + 0x20]
// 004f1be4  50                   push eax
// 004f1be5  8bce                 mov ecx, esi
// 004f1be7  e8a4f7ffff           call 0x4f1390
// 004f1bec  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f1bf0  5f                   pop edi
// 004f1bf1  5e                   pop esi
// 004f1bf2  5d                   pop ebp
// 004f1bf3  5b                   pop ebx
// 004f1bf4  83c410               add esp, 0x10
// 004f1bf7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
