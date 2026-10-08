// roc 2009-12 00981d50  unit: seg_00980000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00981d50
//
// 00981d50  56                   push esi
// 00981d51  8b35685bb800         mov esi, dword ptr [0xb85b68]
// 00981d57  85f6                 test esi, esi
// 00981d59  742b                 je 0x981d86
// 00981d5b  8d4604               lea eax, [esi + 4]
// 00981d5e  83c9ff               or ecx, 0xffffffff
// 00981d61  f00fc108             lock xadd dword ptr [eax], ecx
// 00981d65  751f                 jne 0x981d86
// 00981d67  8b16                 mov edx, dword ptr [esi]
// 00981d69  8b4204               mov eax, dword ptr [edx + 4]
// 00981d6c  8bce                 mov ecx, esi
// 00981d6e  ffd0                 call eax
// 00981d70  8d4e08               lea ecx, [esi + 8]
// 00981d73  83caff               or edx, 0xffffffff
// 00981d76  f00fc111             lock xadd dword ptr [ecx], edx
// 00981d7a  750a                 jne 0x981d86
// 00981d7c  8b06                 mov eax, dword ptr [esi]
// 00981d7e  8b5008               mov edx, dword ptr [eax + 8]
// 00981d81  8bce                 mov ecx, esi
// 00981d83  5e                   pop esi
// 00981d84  ffe2                 jmp edx
// 00981d86  5e                   pop esi
// 00981d87  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
