// from server: 100% by auto
// roc 2009-06 0041a790  unit: CInstanceRecord::CNameItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a790
//
// 0041a790  68b8a1a300           push 0xa3a1b8
// 0041a795  ff15a4e18900         call dword ptr [0x89e1a4]
// 0041a79b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
