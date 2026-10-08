// from server: 100% by auto
// roc 2011-06 006139b0  unit: TextXmlParser  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006139b0
//
// 006139b0  6a14                 push 0x14
// 006139b2  e8a7661f00           call 0x80a05e
// 006139b7  83c404               add esp, 4
// 006139ba  85c0                 test eax, eax
// 006139bc  7402                 je 0x6139c0
// 006139be  8900                 mov dword ptr [eax], eax
// 006139c0  8d4804               lea ecx, [eax + 4]
// 006139c3  85c9                 test ecx, ecx
// 006139c5  7402                 je 0x6139c9
// 006139c7  8901                 mov dword ptr [ecx], eax
// 006139c9  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
