// roc 2009-06 00622330  unit: RBX::RootInstance  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622330
//
// 00622330  6a14                 push 0x14
// 00622332  e801670f00           call 0x718a38
// 00622337  83c404               add esp, 4
// 0062233a  85c0                 test eax, eax
// 0062233c  7402                 je 0x622340
// 0062233e  8900                 mov dword ptr [eax], eax
// 00622340  8d4804               lea ecx, [eax + 4]
// 00622343  85c9                 test ecx, ecx
// 00622345  7402                 je 0x622349
// 00622347  8901                 mov dword ptr [ecx], eax
// 00622349  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
