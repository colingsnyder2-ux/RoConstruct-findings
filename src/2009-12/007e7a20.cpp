// roc 2009-12 007e7a20  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e7a20
//
// 007e7a20  6820b4b700           push 0xb7b420
// 007e7a25  ff1508b29800         call dword ptr [0x98b208]
// 007e7a2b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0x8f411c76@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
