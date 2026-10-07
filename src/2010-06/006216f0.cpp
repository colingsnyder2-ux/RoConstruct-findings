// roc 2010-06 006216f0  unit: RBX::DropperTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006216f0
//
// 006216f0  68141ac000           push 0xc01a14
// 006216f5  ff157ca39e00         call dword ptr [0x9ea37c]
// 006216fb  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
