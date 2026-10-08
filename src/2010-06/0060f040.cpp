// from server: 100% by auto
// roc 2010-06 0060f040  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060f040
//
// 0060f040  56                   push esi
// 0060f041  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0060f044  85f6                 test esi, esi
// 0060f046  7410                 je 0x60f058
// 0060f048  8bce                 mov ecx, esi
// 0060f04a  e841b00a00           call 0x6ba090
// 0060f04f  56                   push esi
// 0060f050  e845891900           call 0x7a799a
// 0060f055  83c404               add esp, 4
// 0060f058  5e                   pop esi
// 0060f059  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
