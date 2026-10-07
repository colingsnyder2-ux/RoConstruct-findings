// roc 2011-06 0063eef0  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063eef0
//
// 0063eef0  56                   push esi
// 0063eef1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0063eef4  85f6                 test esi, esi
// 0063eef6  7410                 je 0x63ef08
// 0063eef8  8bce                 mov ecx, esi
// 0063eefa  e851b4f4ff           call 0x58a350
// 0063eeff  56                   push esi
// 0063ef00  e853b11c00           call 0x80a058
// 0063ef05  83c404               add esp, 4
// 0063ef08  5e                   pop esi
// 0063ef09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
