// roc 2009-12 006be250  unit: CPropGrid::UpdateItemsJob  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006be250
//
// 006be250  53                   push ebx
// 006be251  56                   push esi
// 006be252  8bf1                 mov esi, ecx
// 006be254  57                   push edi
// 006be255  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006be259  8d5e04               lea ebx, [esi + 4]
// 006be25c  57                   push edi
// 006be25d  8bcb                 mov ecx, ebx
// 006be25f  893e                 mov dword ptr [esi], edi
// 006be261  e86afdffff           call 0x6bdfd0
// 006be266  57                   push edi
// 006be267  57                   push edi
// 006be268  53                   push ebx
// 006be269  e822681900           call 0x854a90
// 006be26e  83c40c               add esp, 0xc
// 006be271  5f                   pop edi
// 006be272  8bc6                 mov eax, esi
// 006be274  5e                   pop esi
// 006be275  5b                   pop ebx
// 006be276  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
