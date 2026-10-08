// from server: 100% by auto
// roc 2009-06 0067edf0  unit: RBX::Mechanism  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067edf0
//
// 0067edf0  83ec10               sub esp, 0x10
// 0067edf3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0067edf7  53                   push ebx
// 0067edf8  55                   push ebp
// 0067edf9  56                   push esi
// 0067edfa  57                   push edi
// 0067edfb  8bf1                 mov esi, ecx
// 0067edfd  50                   push eax
// 0067edfe  8d4c2414             lea ecx, [esp + 0x14]
// 0067ee02  51                   push ecx
// 0067ee03  8bce                 mov ecx, esi
// 0067ee05  e806a40500           call 0x6d9210
// 0067ee0a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0067ee0e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0067ee12  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0067ee16  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067ee1a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0067ee22  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067ee26  52                   push edx
// 0067ee27  8d442428             lea eax, [esp + 0x28]
// 0067ee2b  50                   push eax
// 0067ee2c  57                   push edi
// 0067ee2d  53                   push ebx
// 0067ee2e  55                   push ebp
// 0067ee2f  51                   push ecx
// 0067ee30  e8cb980300           call 0x6b8700
// 0067ee35  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067ee39  83c418               add esp, 0x18
// 0067ee3c  57                   push edi
// 0067ee3d  53                   push ebx
// 0067ee3e  55                   push ebp
// 0067ee3f  52                   push edx
// 0067ee40  8d442420             lea eax, [esp + 0x20]
// 0067ee44  50                   push eax
// 0067ee45  8bce                 mov ecx, esi
// 0067ee47  e894e0faff           call 0x62cee0
// 0067ee4c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0067ee50  5f                   pop edi
// 0067ee51  5e                   pop esi
// 0067ee52  5d                   pop ebp
// 0067ee53  5b                   pop ebx
// 0067ee54  83c410               add esp, 0x10
// 0067ee57  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
