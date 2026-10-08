// from server: 100% by auto
// roc 2010-06 005f2630  unit: TextXmlParser  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2630
//
// 005f2630  6a14                 push 0x14
// 005f2632  e869531b00           call 0x7a79a0
// 005f2637  83c404               add esp, 4
// 005f263a  85c0                 test eax, eax
// 005f263c  7402                 je 0x5f2640
// 005f263e  8900                 mov dword ptr [eax], eax
// 005f2640  8d4804               lea ecx, [eax + 4]
// 005f2643  85c9                 test ecx, ecx
// 005f2645  7402                 je 0x5f2649
// 005f2647  8901                 mov dword ptr [ecx], eax
// 005f2649  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
