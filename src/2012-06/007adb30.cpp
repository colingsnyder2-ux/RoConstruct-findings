// from server: 100% by auto
// roc 2012-06 007adb30  unit: RBX::CacheableContentProvider::VCachedItem::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007adb30
//
// 007adb30  56                   push esi
// 007adb31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007adb34  85f6                 test esi, esi
// 007adb36  7410                 je 0x7adb48
// 007adb38  8bce                 mov ecx, esi
// 007adb3a  e8b1fdffff           call 0x7ad8f0
// 007adb3f  56                   push esi
// 007adb40  e8cf451d00           call 0x982114
// 007adb45  83c404               add esp, 4
// 007adb48  5e                   pop esi
// 007adb49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
