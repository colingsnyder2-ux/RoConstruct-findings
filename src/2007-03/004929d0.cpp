// roc 2007-03 004929d0  unit: seg_00490000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004929d0
//
// 004929d0  68c0294900           push 0x4929c0
// 004929d5  ff15f0d17700         call dword ptr [0x77d1f0]
// 004929db  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xaff3644a@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
