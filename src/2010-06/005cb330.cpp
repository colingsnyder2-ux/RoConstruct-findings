// from server: 100% by auto
// roc 2010-06 005cb330  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cb330
//
// 005cb330  686480ba00           push 0xba8064
// 005cb335  ff1580a39e00         call dword ptr [0x9ea380]
// 005cb33b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
