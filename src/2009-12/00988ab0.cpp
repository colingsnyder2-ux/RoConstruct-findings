// roc 2009-12 00988ab0  unit: seg_00980000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00988ab0
//
// 00988ab0  56                   push esi
// 00988ab1  8b355067b900         mov esi, dword ptr [0xb96750]
// 00988ab7  85f6                 test esi, esi
// 00988ab9  742b                 je 0x988ae6
// 00988abb  8d4604               lea eax, [esi + 4]
// 00988abe  83c9ff               or ecx, 0xffffffff
// 00988ac1  f00fc108             lock xadd dword ptr [eax], ecx
// 00988ac5  751f                 jne 0x988ae6
// 00988ac7  8b16                 mov edx, dword ptr [esi]
// 00988ac9  8b4204               mov eax, dword ptr [edx + 4]
// 00988acc  8bce                 mov ecx, esi
// 00988ace  ffd0                 call eax
// 00988ad0  8d4e08               lea ecx, [esi + 8]
// 00988ad3  83caff               or edx, 0xffffffff
// 00988ad6  f00fc111             lock xadd dword ptr [ecx], edx
// 00988ada  750a                 jne 0x988ae6
// 00988adc  8b06                 mov eax, dword ptr [esi]
// 00988ade  8b5008               mov edx, dword ptr [eax + 8]
// 00988ae1  8bce                 mov ecx, esi
// 00988ae3  5e                   pop esi
// 00988ae4  ffe2                 jmp edx
// 00988ae6  5e                   pop esi
// 00988ae7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
