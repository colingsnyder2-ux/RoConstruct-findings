// from server: 100% by auto
// roc 2008-06 007fd110  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd110
//
// 007fd110  56                   push esi
// 007fd111  8b35b04a9700         mov esi, dword ptr [0x974ab0]
// 007fd117  85f6                 test esi, esi
// 007fd119  742b                 je 0x7fd146
// 007fd11b  8d4604               lea eax, [esi + 4]
// 007fd11e  83c9ff               or ecx, 0xffffffff
// 007fd121  f00fc108             lock xadd dword ptr [eax], ecx
// 007fd125  751f                 jne 0x7fd146
// 007fd127  8b16                 mov edx, dword ptr [esi]
// 007fd129  8b4204               mov eax, dword ptr [edx + 4]
// 007fd12c  8bce                 mov ecx, esi
// 007fd12e  ffd0                 call eax
// 007fd130  8d4e08               lea ecx, [esi + 8]
// 007fd133  83caff               or edx, 0xffffffff
// 007fd136  f00fc111             lock xadd dword ptr [ecx], edx
// 007fd13a  750a                 jne 0x7fd146
// 007fd13c  8b06                 mov eax, dword ptr [esi]
// 007fd13e  8b5008               mov edx, dword ptr [eax + 8]
// 007fd141  8bce                 mov ecx, esi
// 007fd143  5e                   pop esi
// 007fd144  ffe2                 jmp edx
// 007fd146  5e                   pop esi
// 007fd147  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
