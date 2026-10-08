// from server: 100% by auto
// roc 2008-06 00595820  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595820
//
// 00595820  6a14                 push 0x14
// 00595822  e8f9b01000           call 0x6a0920
// 00595827  83c404               add esp, 4
// 0059582a  85c0                 test eax, eax
// 0059582c  7402                 je 0x595830
// 0059582e  8900                 mov dword ptr [eax], eax
// 00595830  8d4804               lea ecx, [eax + 4]
// 00595833  85c9                 test ecx, ecx
// 00595835  7402                 je 0x595839
// 00595837  8901                 mov dword ptr [ecx], eax
// 00595839  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Buynode@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
