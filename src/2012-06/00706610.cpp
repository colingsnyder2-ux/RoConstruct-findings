// roc 2012-06 00706610  unit: RBX::RootInstance  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00706610
//
// 00706610  6a14                 push 0x14
// 00706612  e803bb2700           call 0x98211a
// 00706617  83c404               add esp, 4
// 0070661a  85c0                 test eax, eax
// 0070661c  7402                 je 0x706620
// 0070661e  8900                 mov dword ptr [eax], eax
// 00706620  8d4804               lea ecx, [eax + 4]
// 00706623  85c9                 test ecx, ecx
// 00706625  7402                 je 0x706629
// 00706627  8901                 mov dword ptr [ecx], eax
// 00706629  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
