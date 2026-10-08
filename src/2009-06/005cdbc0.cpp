// from server: 100% by auto
// roc 2009-06 005cdbc0  unit: VAuthoringSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cdbc0
//
// 005cdbc0  6868b1a300           push 0xa3b168
// 005cdbc5  ff15a4e18900         call dword ptr [0x89e1a4]
// 005cdbcb  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
