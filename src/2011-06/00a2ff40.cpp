// from server: 100% by auto
// roc 2011-06 00a2ff40  unit: seg_00a20000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ff40
//
// 00a2ff40  56                   push esi
// 00a2ff41  8b35b015cb00         mov esi, dword ptr [0xcb15b0]
// 00a2ff47  85f6                 test esi, esi
// 00a2ff49  742b                 je 0xa2ff76
// 00a2ff4b  8d4604               lea eax, [esi + 4]
// 00a2ff4e  83c9ff               or ecx, 0xffffffff
// 00a2ff51  f00fc108             lock xadd dword ptr [eax], ecx
// 00a2ff55  751f                 jne 0xa2ff76
// 00a2ff57  8b16                 mov edx, dword ptr [esi]
// 00a2ff59  8b4204               mov eax, dword ptr [edx + 4]
// 00a2ff5c  8bce                 mov ecx, esi
// 00a2ff5e  ffd0                 call eax
// 00a2ff60  8d4e08               lea ecx, [esi + 8]
// 00a2ff63  83caff               or edx, 0xffffffff
// 00a2ff66  f00fc111             lock xadd dword ptr [ecx], edx
// 00a2ff6a  750a                 jne 0xa2ff76
// 00a2ff6c  8b06                 mov eax, dword ptr [esi]
// 00a2ff6e  8b5008               mov edx, dword ptr [eax + 8]
// 00a2ff71  8bce                 mov ecx, esi
// 00a2ff73  5e                   pop esi
// 00a2ff74  ffe2                 jmp edx
// 00a2ff76  5e                   pop esi
// 00a2ff77  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
