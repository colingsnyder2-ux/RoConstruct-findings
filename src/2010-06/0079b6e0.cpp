// roc 2010-06 0079b6e0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b6e0
//
// 0079b6e0  68e819c000           push 0xc019e8
// 0079b6e5  ff157ca39e00         call dword ptr [0x9ea37c]
// 0079b6eb  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
