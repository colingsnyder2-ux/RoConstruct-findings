// roc 2008-06 00572690  unit: RBX::Reflection::ClassDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572690
//
// 00572690  6810669400           push 0x946610
// 00572695  ff15b0218000         call dword ptr [0x8021b0]
// 0057269b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
