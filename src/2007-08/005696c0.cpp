// from server: 100% by auto
// roc 2007-08 005696c0  unit: RBX::ModelInstance  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005696c0
//
// 005696c0  6a14                 push 0x14
// 005696c2  e82f680c00           call 0x62fef6
// 005696c7  83c404               add esp, 4
// 005696ca  85c0                 test eax, eax
// 005696cc  7402                 je 0x5696d0
// 005696ce  8900                 mov dword ptr [eax], eax
// 005696d0  8d4804               lea ecx, [eax + 4]
// 005696d3  85c9                 test ecx, ecx
// 005696d5  7402                 je 0x5696d9
// 005696d7  8901                 mov dword ptr [ecx], eax
// 005696d9  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
