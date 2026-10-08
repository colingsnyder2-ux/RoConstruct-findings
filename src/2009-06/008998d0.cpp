// from server: 100% by auto
// roc 2009-06 008998d0  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008998d0
//
// 008998d0  56                   push esi
// 008998d1  8b3500b0a400         mov esi, dword ptr [0xa4b000]
// 008998d7  85f6                 test esi, esi
// 008998d9  742b                 je 0x899906
// 008998db  8d4604               lea eax, [esi + 4]
// 008998de  83c9ff               or ecx, 0xffffffff
// 008998e1  f00fc108             lock xadd dword ptr [eax], ecx
// 008998e5  751f                 jne 0x899906
// 008998e7  8b16                 mov edx, dword ptr [esi]
// 008998e9  8b4204               mov eax, dword ptr [edx + 4]
// 008998ec  8bce                 mov ecx, esi
// 008998ee  ffd0                 call eax
// 008998f0  8d4e08               lea ecx, [esi + 8]
// 008998f3  83caff               or edx, 0xffffffff
// 008998f6  f00fc111             lock xadd dword ptr [ecx], edx
// 008998fa  750a                 jne 0x899906
// 008998fc  8b06                 mov eax, dword ptr [esi]
// 008998fe  8b5008               mov edx, dword ptr [eax + 8]
// 00899901  8bce                 mov ecx, esi
// 00899903  5e                   pop esi
// 00899904  ffe2                 jmp edx
// 00899906  5e                   pop esi
// 00899907  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
