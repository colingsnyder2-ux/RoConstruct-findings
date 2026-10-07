// roc 2007-08 004aaa10  unit: RBX::Network::Peer  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aaa10
//
// 004aaa10  83ec10               sub esp, 0x10
// 004aaa13  8b442414             mov eax, dword ptr [esp + 0x14]
// 004aaa17  53                   push ebx
// 004aaa18  55                   push ebp
// 004aaa19  56                   push esi
// 004aaa1a  57                   push edi
// 004aaa1b  8bf1                 mov esi, ecx
// 004aaa1d  50                   push eax
// 004aaa1e  8d4c2414             lea ecx, [esp + 0x14]
// 004aaa22  51                   push ecx
// 004aaa23  8bce                 mov ecx, esi
// 004aaa25  e8c6dcffff           call 0x4a86f0
// 004aaa2a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004aaa2e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004aaa32  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004aaa36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aaa3a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004aaa42  8b542424             mov edx, dword ptr [esp + 0x24]
// 004aaa46  52                   push edx
// 004aaa47  8d442428             lea eax, [esp + 0x28]
// 004aaa4b  50                   push eax
// 004aaa4c  57                   push edi
// 004aaa4d  53                   push ebx
// 004aaa4e  55                   push ebp
// 004aaa4f  51                   push ecx
// 004aaa50  e86bcb0800           call 0x5375c0
// 004aaa55  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aaa59  83c418               add esp, 0x18
// 004aaa5c  57                   push edi
// 004aaa5d  53                   push ebx
// 004aaa5e  55                   push ebp
// 004aaa5f  52                   push edx
// 004aaa60  8d442420             lea eax, [esp + 0x20]
// 004aaa64  50                   push eax
// 004aaa65  8bce                 mov ecx, esi
// 004aaa67  e854f3f8ff           call 0x439dc0
// 004aaa6c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004aaa70  5f                   pop edi
// 004aaa71  5e                   pop esi
// 004aaa72  5d                   pop ebp
// 004aaa73  5b                   pop ebx
// 004aaa74  83c410               add esp, 0x10
// 004aaa77  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
