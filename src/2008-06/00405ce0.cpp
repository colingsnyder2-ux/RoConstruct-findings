// from server: 100% by auto
// roc 2008-06 00405ce0  unit: VCWorkspace::?$CComObject  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405ce0
//
// 00405ce0  83ec10               sub esp, 0x10
// 00405ce3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00405ce7  53                   push ebx
// 00405ce8  55                   push ebp
// 00405ce9  56                   push esi
// 00405cea  57                   push edi
// 00405ceb  8bf1                 mov esi, ecx
// 00405ced  50                   push eax
// 00405cee  8d4c2414             lea ecx, [esp + 0x14]
// 00405cf2  51                   push ecx
// 00405cf3  8bce                 mov ecx, esi
// 00405cf5  e8b6f2ffff           call 0x404fb0
// 00405cfa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00405cfe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00405d02  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00405d06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405d0a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00405d12  8b542424             mov edx, dword ptr [esp + 0x24]
// 00405d16  52                   push edx
// 00405d17  8d442428             lea eax, [esp + 0x28]
// 00405d1b  50                   push eax
// 00405d1c  57                   push edi
// 00405d1d  53                   push ebx
// 00405d1e  55                   push ebp
// 00405d1f  51                   push ecx
// 00405d20  e85bdc0100           call 0x423980
// 00405d25  8b542428             mov edx, dword ptr [esp + 0x28]
// 00405d29  83c418               add esp, 0x18
// 00405d2c  57                   push edi
// 00405d2d  53                   push ebx
// 00405d2e  55                   push ebp
// 00405d2f  52                   push edx
// 00405d30  8d442420             lea eax, [esp + 0x20]
// 00405d34  50                   push eax
// 00405d35  8bce                 mov ecx, esi
// 00405d37  e864df1400           call 0x553ca0
// 00405d3c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00405d40  5f                   pop edi
// 00405d41  5e                   pop esi
// 00405d42  5d                   pop ebp
// 00405d43  5b                   pop ebx
// 00405d44  83c410               add esp, 0x10
// 00405d47  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAEIABK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
