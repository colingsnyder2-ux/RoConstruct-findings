// roc 2010-06 0041ef10  unit: CSelectionTreeCtrl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ef10
//
// 0041ef10  83ec10               sub esp, 0x10
// 0041ef13  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041ef17  53                   push ebx
// 0041ef18  55                   push ebp
// 0041ef19  56                   push esi
// 0041ef1a  57                   push edi
// 0041ef1b  8bf1                 mov esi, ecx
// 0041ef1d  50                   push eax
// 0041ef1e  8d4c2414             lea ecx, [esp + 0x14]
// 0041ef22  51                   push ecx
// 0041ef23  8bce                 mov ecx, esi
// 0041ef25  e836ea3700           call 0x79d960
// 0041ef2a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041ef2e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0041ef32  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0041ef36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041ef3a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0041ef42  8b542424             mov edx, dword ptr [esp + 0x24]
// 0041ef46  52                   push edx
// 0041ef47  8d442428             lea eax, [esp + 0x28]
// 0041ef4b  50                   push eax
// 0041ef4c  57                   push edi
// 0041ef4d  53                   push ebx
// 0041ef4e  55                   push ebp
// 0041ef4f  51                   push ecx
// 0041ef50  e8fb0a2400           call 0x65fa50
// 0041ef55  8b542428             mov edx, dword ptr [esp + 0x28]
// 0041ef59  83c418               add esp, 0x18
// 0041ef5c  57                   push edi
// 0041ef5d  53                   push ebx
// 0041ef5e  55                   push ebp
// 0041ef5f  52                   push edx
// 0041ef60  8d442420             lea eax, [esp + 0x20]
// 0041ef64  50                   push eax
// 0041ef65  8bce                 mov ecx, esi
// 0041ef67  e894da1800           call 0x5aca00
// 0041ef6c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041ef70  5f                   pop edi
// 0041ef71  5e                   pop esi
// 0041ef72  5d                   pop ebp
// 0041ef73  5b                   pop ebx
// 0041ef74  83c410               add esp, 0x10
// 0041ef77  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
