// roc 2009-12 00664610  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00664610
//
// 00664610  68d42bb300           push 0xb32bd4
// 00664615  ff150cb29800         call dword ptr [0x98b20c]
// 0066461b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0x8f411c76@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
