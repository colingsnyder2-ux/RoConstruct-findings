// roc 2007-08 00779dd0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779dd0
//
// 00779dd0  56                   push esi
// 00779dd1  8b35d8238c00         mov esi, dword ptr [0x8c23d8]
// 00779dd7  85f6                 test esi, esi
// 00779dd9  742b                 je 0x779e06
// 00779ddb  8d4604               lea eax, [esi + 4]
// 00779dde  83c9ff               or ecx, 0xffffffff
// 00779de1  f00fc108             lock xadd dword ptr [eax], ecx
// 00779de5  751f                 jne 0x779e06
// 00779de7  8b16                 mov edx, dword ptr [esi]
// 00779de9  8b4204               mov eax, dword ptr [edx + 4]
// 00779dec  8bce                 mov ecx, esi
// 00779dee  ffd0                 call eax
// 00779df0  8d4e08               lea ecx, [esi + 8]
// 00779df3  83caff               or edx, 0xffffffff
// 00779df6  f00fc111             lock xadd dword ptr [ecx], edx
// 00779dfa  750a                 jne 0x779e06
// 00779dfc  8b06                 mov eax, dword ptr [esi]
// 00779dfe  8b5008               mov edx, dword ptr [eax + 8]
// 00779e01  8bce                 mov ecx, esi
// 00779e03  5e                   pop esi
// 00779e04  ffe2                 jmp edx
// 00779e06  5e                   pop esi
// 00779e07  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
