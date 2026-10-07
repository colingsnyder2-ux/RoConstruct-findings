// roc 2009-06 0065bc60  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bc60
//
// 0065bc60  6870b1a300           push 0xa3b170
// 0065bc65  ff15a4e18900         call dword ptr [0x89e1a4]
// 0065bc6b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
