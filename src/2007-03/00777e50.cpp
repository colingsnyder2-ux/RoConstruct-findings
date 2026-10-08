// roc 2007-03 00777e50  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777e50
//
// 00777e50  6830668b00           push 0x8b6630
// 00777e55  ff15c4d27700         call dword ptr [0x77d2c4]
// 00777e5b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xaff3644a@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
