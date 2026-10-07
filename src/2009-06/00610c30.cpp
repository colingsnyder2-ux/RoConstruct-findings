// roc 2009-06 00610c30  unit: RBX::ModelInstance  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00610c30
//
// 00610c30  6898b1a300           push 0xa3b198
// 00610c35  ff15a4e18900         call dword ptr [0x89e1a4]
// 00610c3b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
