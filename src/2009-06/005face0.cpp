// roc 2009-06 005face0  unit: RBX::DataModel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005face0
//
// 005face0  68702ea400           push 0xa42e70
// 005face5  ff15a4e18900         call dword ptr [0x89e1a4]
// 005faceb  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
