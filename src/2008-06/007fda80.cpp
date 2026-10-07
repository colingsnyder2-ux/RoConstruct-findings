// roc 2008-06 007fda80  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fda80
//
// 007fda80  56                   push esi
// 007fda81  8b35705c9700         mov esi, dword ptr [0x975c70]
// 007fda87  85f6                 test esi, esi
// 007fda89  742b                 je 0x7fdab6
// 007fda8b  8d4604               lea eax, [esi + 4]
// 007fda8e  83c9ff               or ecx, 0xffffffff
// 007fda91  f00fc108             lock xadd dword ptr [eax], ecx
// 007fda95  751f                 jne 0x7fdab6
// 007fda97  8b16                 mov edx, dword ptr [esi]
// 007fda99  8b4204               mov eax, dword ptr [edx + 4]
// 007fda9c  8bce                 mov ecx, esi
// 007fda9e  ffd0                 call eax
// 007fdaa0  8d4e08               lea ecx, [esi + 8]
// 007fdaa3  83caff               or edx, 0xffffffff
// 007fdaa6  f00fc111             lock xadd dword ptr [ecx], edx
// 007fdaaa  750a                 jne 0x7fdab6
// 007fdaac  8b06                 mov eax, dword ptr [esi]
// 007fdaae  8b5008               mov edx, dword ptr [eax + 8]
// 007fdab1  8bce                 mov ecx, esi
// 007fdab3  5e                   pop esi
// 007fdab4  ffe2                 jmp edx
// 007fdab6  5e                   pop esi
// 007fdab7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
