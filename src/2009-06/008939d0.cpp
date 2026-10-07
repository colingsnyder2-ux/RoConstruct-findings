// roc 2009-06 008939d0  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008939d0
//
// 008939d0  56                   push esi
// 008939d1  8b351497a300         mov esi, dword ptr [0xa39714]
// 008939d7  85f6                 test esi, esi
// 008939d9  742b                 je 0x893a06
// 008939db  8d4604               lea eax, [esi + 4]
// 008939de  83c9ff               or ecx, 0xffffffff
// 008939e1  f00fc108             lock xadd dword ptr [eax], ecx
// 008939e5  751f                 jne 0x893a06
// 008939e7  8b16                 mov edx, dword ptr [esi]
// 008939e9  8b4204               mov eax, dword ptr [edx + 4]
// 008939ec  8bce                 mov ecx, esi
// 008939ee  ffd0                 call eax
// 008939f0  8d4e08               lea ecx, [esi + 8]
// 008939f3  83caff               or edx, 0xffffffff
// 008939f6  f00fc111             lock xadd dword ptr [ecx], edx
// 008939fa  750a                 jne 0x893a06
// 008939fc  8b06                 mov eax, dword ptr [esi]
// 008939fe  8b5008               mov edx, dword ptr [eax + 8]
// 00893a01  8bce                 mov ecx, esi
// 00893a03  5e                   pop esi
// 00893a04  ffe2                 jmp edx
// 00893a06  5e                   pop esi
// 00893a07  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
