// roc 2009-12 0068ae30  unit: TextXmlParser  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ae30
//
// 0068ae30  6a14                 push 0x14
// 0068ae32  e8298a1600           call 0x7f3860
// 0068ae37  83c404               add esp, 4
// 0068ae3a  85c0                 test eax, eax
// 0068ae3c  7402                 je 0x68ae40
// 0068ae3e  8900                 mov dword ptr [eax], eax
// 0068ae40  8d4804               lea ecx, [eax + 4]
// 0068ae43  85c9                 test ecx, ecx
// 0068ae45  7402                 je 0x68ae49
// 0068ae47  8901                 mov dword ptr [ecx], eax
// 0068ae49  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
