// from server: 100% by auto
// roc 2011-06 00a3a4d0  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a4d0
//
// 00a3a4d0  56                   push esi
// 00a3a4d1  8b354ccacc00         mov esi, dword ptr [0xccca4c]
// 00a3a4d7  85f6                 test esi, esi
// 00a3a4d9  742b                 je 0xa3a506
// 00a3a4db  8d4604               lea eax, [esi + 4]
// 00a3a4de  83c9ff               or ecx, 0xffffffff
// 00a3a4e1  f00fc108             lock xadd dword ptr [eax], ecx
// 00a3a4e5  751f                 jne 0xa3a506
// 00a3a4e7  8b16                 mov edx, dword ptr [esi]
// 00a3a4e9  8b4204               mov eax, dword ptr [edx + 4]
// 00a3a4ec  8bce                 mov ecx, esi
// 00a3a4ee  ffd0                 call eax
// 00a3a4f0  8d4e08               lea ecx, [esi + 8]
// 00a3a4f3  83caff               or edx, 0xffffffff
// 00a3a4f6  f00fc111             lock xadd dword ptr [ecx], edx
// 00a3a4fa  750a                 jne 0xa3a506
// 00a3a4fc  8b06                 mov eax, dword ptr [esi]
// 00a3a4fe  8b5008               mov edx, dword ptr [eax + 8]
// 00a3a501  8bce                 mov ecx, esi
// 00a3a503  5e                   pop esi
// 00a3a504  ffe2                 jmp edx
// 00a3a506  5e                   pop esi
// 00a3a507  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
