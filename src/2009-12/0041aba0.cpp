// roc 2009-12 0041aba0  unit: CInstanceRecord::CNameItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041aba0
//
// 0041aba0  6820a2b700           push 0xb7a220
// 0041aba5  ff1508b29800         call dword ptr [0x98b208]
// 0041abab  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0x8f411c76@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
