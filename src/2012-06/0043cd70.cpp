// from server: 100% by auto
// roc 2012-06 0043cd70  unit: std::PAX::PAXV?$allocator::V?$vector::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0043cd70
//
// 0043cd70  51                   push ecx
// 0043cd71  b910f2e200           mov ecx, 0xe2f210
// 0043cd76  e8052afdff           call 0x40f780
// 0043cd7b  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex.cpp (function ?put_mem_block@re_detail@boost@@YIXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex.cpp
