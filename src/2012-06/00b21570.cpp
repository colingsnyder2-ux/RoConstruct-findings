// from server: 100% by auto
// roc 2012-06 00b21570  unit: seg_00b20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b21570
//
// 00b21570  680828e000           push 0xe02808
// 00b21575  ff152c2bb200         call dword ptr [0xb22b2c]
// 00b2157b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
