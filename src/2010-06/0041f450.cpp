// from server: 100% by auto
// roc 2010-06 0041f450  unit: CSelectionTreeCtrl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041f450
//
// 0041f450  83ec10               sub esp, 0x10
// 0041f453  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041f457  53                   push ebx
// 0041f458  55                   push ebp
// 0041f459  56                   push esi
// 0041f45a  57                   push edi
// 0041f45b  8bf1                 mov esi, ecx
// 0041f45d  50                   push eax
// 0041f45e  8d4c2414             lea ecx, [esp + 0x14]
// 0041f462  51                   push ecx
// 0041f463  8bce                 mov ecx, esi
// 0041f465  e8b6f3ffff           call 0x41e820
// 0041f46a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041f46e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0041f472  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0041f476  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f47a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0041f482  8b542424             mov edx, dword ptr [esp + 0x24]
// 0041f486  52                   push edx
// 0041f487  8d442428             lea eax, [esp + 0x28]
// 0041f48b  50                   push eax
// 0041f48c  57                   push edi
// 0041f48d  53                   push ebx
// 0041f48e  55                   push ebp
// 0041f48f  51                   push ecx
// 0041f490  e8bb052400           call 0x65fa50
// 0041f495  8b542428             mov edx, dword ptr [esp + 0x28]
// 0041f499  83c418               add esp, 0x18
// 0041f49c  57                   push edi
// 0041f49d  53                   push ebx
// 0041f49e  55                   push ebp
// 0041f49f  52                   push edx
// 0041f4a0  8d442420             lea eax, [esp + 0x20]
// 0041f4a4  50                   push eax
// 0041f4a5  8bce                 mov ecx, esi
// 0041f4a7  e8d4fdffff           call 0x41f280
// 0041f4ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041f4b0  5f                   pop edi
// 0041f4b1  5e                   pop esi
// 0041f4b2  5d                   pop ebp
// 0041f4b3  5b                   pop ebx
// 0041f4b4  83c410               add esp, 0x10
// 0041f4b7  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
