// from server: 100% by auto
// roc 2011-06 0045f750  unit: VCRoblox3D::?$CComObject  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045f750
//
// 0045f750  56                   push esi
// 0045f751  8b742408             mov esi, dword ptr [esp + 8]
// 0045f755  85f6                 test esi, esi
// 0045f757  7410                 je 0x45f769
// 0045f759  8bce                 mov ecx, esi
// 0045f75b  e880f6ffff           call 0x45ede0
// 0045f760  56                   push esi
// 0045f761  e8f2a83a00           call 0x80a058
// 0045f766  83c404               add esp, 4
// 0045f769  5e                   pop esi
// 0045f76a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
