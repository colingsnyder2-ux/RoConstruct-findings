// from server: 100% by auto
// roc 2007-08 00777e20  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777e20
//
// 00777e20  6878c08b00           push 0x8bc078
// 00777e25  ff1504d37700         call dword ptr [0x77d304]
// 00777e2b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
