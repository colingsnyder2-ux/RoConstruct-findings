// from server: 100% by auto
// roc 2008-06 007fd0d0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd0d0
//
// 007fd0d0  56                   push esi
// 007fd0d1  8b35944a9700         mov esi, dword ptr [0x974a94]
// 007fd0d7  85f6                 test esi, esi
// 007fd0d9  742b                 je 0x7fd106
// 007fd0db  8d4604               lea eax, [esi + 4]
// 007fd0de  83c9ff               or ecx, 0xffffffff
// 007fd0e1  f00fc108             lock xadd dword ptr [eax], ecx
// 007fd0e5  751f                 jne 0x7fd106
// 007fd0e7  8b16                 mov edx, dword ptr [esi]
// 007fd0e9  8b4204               mov eax, dword ptr [edx + 4]
// 007fd0ec  8bce                 mov ecx, esi
// 007fd0ee  ffd0                 call eax
// 007fd0f0  8d4e08               lea ecx, [esi + 8]
// 007fd0f3  83caff               or edx, 0xffffffff
// 007fd0f6  f00fc111             lock xadd dword ptr [ecx], edx
// 007fd0fa  750a                 jne 0x7fd106
// 007fd0fc  8b06                 mov eax, dword ptr [esi]
// 007fd0fe  8b5008               mov edx, dword ptr [eax + 8]
// 007fd101  8bce                 mov ecx, esi
// 007fd103  5e                   pop esi
// 007fd104  ffe2                 jmp edx
// 007fd106  5e                   pop esi
// 007fd107  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
