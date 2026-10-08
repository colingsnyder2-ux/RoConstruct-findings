// from server: 100% by auto
// roc 2007-08 007770d0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007770d0
//
// 007770d0  56                   push esi
// 007770d1  8b3540ae8b00         mov esi, dword ptr [0x8bae40]
// 007770d7  85f6                 test esi, esi
// 007770d9  742b                 je 0x777106
// 007770db  8d4604               lea eax, [esi + 4]
// 007770de  83c9ff               or ecx, 0xffffffff
// 007770e1  f00fc108             lock xadd dword ptr [eax], ecx
// 007770e5  751f                 jne 0x777106
// 007770e7  8b16                 mov edx, dword ptr [esi]
// 007770e9  8b4204               mov eax, dword ptr [edx + 4]
// 007770ec  8bce                 mov ecx, esi
// 007770ee  ffd0                 call eax
// 007770f0  8d4e08               lea ecx, [esi + 8]
// 007770f3  83caff               or edx, 0xffffffff
// 007770f6  f00fc111             lock xadd dword ptr [ecx], edx
// 007770fa  750a                 jne 0x777106
// 007770fc  8b06                 mov eax, dword ptr [esi]
// 007770fe  8b5008               mov edx, dword ptr [eax + 8]
// 00777101  8bce                 mov ecx, esi
// 00777103  5e                   pop esi
// 00777104  ffe2                 jmp edx
// 00777106  5e                   pop esi
// 00777107  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
