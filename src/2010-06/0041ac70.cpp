// from server: 100% by auto
// roc 2010-06 0041ac70  unit: CInstanceRecord::CNameItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ac70
//
// 0041ac70  68a807c000           push 0xc007a8
// 0041ac75  ff157ca39e00         call dword ptr [0x9ea37c]
// 0041ac7b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
