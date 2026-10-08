// from server: 100% by auto
// roc 2009-06 005f9e20  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f9e20
//
// 005f9e20  68485ca000           push 0xa05c48
// 005f9e25  ff15d0e18900         call dword ptr [0x89e1d0]
// 005f9e2b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
