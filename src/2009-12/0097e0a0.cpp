// roc 2009-12 0097e0a0  unit: seg_00970000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097e0a0
//
// 0097e0a0  56                   push esi
// 0097e0a1  8b3598a4b700         mov esi, dword ptr [0xb7a498]
// 0097e0a7  85f6                 test esi, esi
// 0097e0a9  742b                 je 0x97e0d6
// 0097e0ab  8d4604               lea eax, [esi + 4]
// 0097e0ae  83c9ff               or ecx, 0xffffffff
// 0097e0b1  f00fc108             lock xadd dword ptr [eax], ecx
// 0097e0b5  751f                 jne 0x97e0d6
// 0097e0b7  8b16                 mov edx, dword ptr [esi]
// 0097e0b9  8b4204               mov eax, dword ptr [edx + 4]
// 0097e0bc  8bce                 mov ecx, esi
// 0097e0be  ffd0                 call eax
// 0097e0c0  8d4e08               lea ecx, [esi + 8]
// 0097e0c3  83caff               or edx, 0xffffffff
// 0097e0c6  f00fc111             lock xadd dword ptr [ecx], edx
// 0097e0ca  750a                 jne 0x97e0d6
// 0097e0cc  8b06                 mov eax, dword ptr [esi]
// 0097e0ce  8b5008               mov edx, dword ptr [eax + 8]
// 0097e0d1  8bce                 mov ecx, esi
// 0097e0d3  5e                   pop esi
// 0097e0d4  ffe2                 jmp edx
// 0097e0d6  5e                   pop esi
// 0097e0d7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
