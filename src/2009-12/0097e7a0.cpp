// roc 2009-12 0097e7a0  unit: seg_00970000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097e7a0
//
// 0097e7a0  56                   push esi
// 0097e7a1  8b35f4b3b700         mov esi, dword ptr [0xb7b3f4]
// 0097e7a7  85f6                 test esi, esi
// 0097e7a9  742b                 je 0x97e7d6
// 0097e7ab  8d4604               lea eax, [esi + 4]
// 0097e7ae  83c9ff               or ecx, 0xffffffff
// 0097e7b1  f00fc108             lock xadd dword ptr [eax], ecx
// 0097e7b5  751f                 jne 0x97e7d6
// 0097e7b7  8b16                 mov edx, dword ptr [esi]
// 0097e7b9  8b4204               mov eax, dword ptr [edx + 4]
// 0097e7bc  8bce                 mov ecx, esi
// 0097e7be  ffd0                 call eax
// 0097e7c0  8d4e08               lea ecx, [esi + 8]
// 0097e7c3  83caff               or edx, 0xffffffff
// 0097e7c6  f00fc111             lock xadd dword ptr [ecx], edx
// 0097e7ca  750a                 jne 0x97e7d6
// 0097e7cc  8b06                 mov eax, dword ptr [esi]
// 0097e7ce  8b5008               mov edx, dword ptr [eax + 8]
// 0097e7d1  8bce                 mov ecx, esi
// 0097e7d3  5e                   pop esi
// 0097e7d4  ffe2                 jmp edx
// 0097e7d6  5e                   pop esi
// 0097e7d7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
