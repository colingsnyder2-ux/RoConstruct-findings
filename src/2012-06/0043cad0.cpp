// roc 2012-06 0043cad0  unit: std::PAX::PAXV?$allocator::V?$vector::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0043cad0
//
// 0043cad0  56                   push esi
// 0043cad1  57                   push edi
// 0043cad2  8bf9                 mov edi, ecx
// 0043cad4  8b770c               mov esi, dword ptr [edi + 0xc]
// 0043cad7  85f6                 test esi, esi
// 0043cad9  742a                 je 0x43cb05
// 0043cadb  8d4604               lea eax, [esi + 4]
// 0043cade  83c9ff               or ecx, 0xffffffff
// 0043cae1  f00fc108             lock xadd dword ptr [eax], ecx
// 0043cae5  751e                 jne 0x43cb05
// 0043cae7  8b16                 mov edx, dword ptr [esi]
// 0043cae9  8b4204               mov eax, dword ptr [edx + 4]
// 0043caec  8bce                 mov ecx, esi
// 0043caee  ffd0                 call eax
// 0043caf0  8d4e08               lea ecx, [esi + 8]
// 0043caf3  83caff               or edx, 0xffffffff
// 0043caf6  f00fc111             lock xadd dword ptr [ecx], edx
// 0043cafa  7509                 jne 0x43cb05
// 0043cafc  8b06                 mov eax, dword ptr [esi]
// 0043cafe  8b5008               mov edx, dword ptr [eax + 8]
// 0043cb01  8bce                 mov ecx, esi
// 0043cb03  ffd2                 call edx
// 0043cb05  f644240c01           test byte ptr [esp + 0xc], 1
// 0043cb0a  7409                 je 0x43cb15
// 0043cb0c  57                   push edi
// 0043cb0d  e802565400           call 0x982114
// 0043cb12  83c404               add esp, 4
// 0043cb15  8bc7                 mov eax, edi
// 0043cb17  5f                   pop edi
// 0043cb18  5e                   pop esi
// 0043cb19  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??_G_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
