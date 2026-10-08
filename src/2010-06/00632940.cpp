// from server: 100% by auto
// roc 2010-06 00632940  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00632940
//
// 00632940  68101ac000           push 0xc01a10
// 00632945  ff157ca39e00         call dword ptr [0x9ea37c]
// 0063294b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
