// from server: 100% by auto
// roc 2009-06 0089c8a0  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c8a0
//
// 0089c8a0  56                   push esi
// 0089c8a1  8b357cf1a400         mov esi, dword ptr [0xa4f17c]
// 0089c8a7  85f6                 test esi, esi
// 0089c8a9  742b                 je 0x89c8d6
// 0089c8ab  8d4604               lea eax, [esi + 4]
// 0089c8ae  83c9ff               or ecx, 0xffffffff
// 0089c8b1  f00fc108             lock xadd dword ptr [eax], ecx
// 0089c8b5  751f                 jne 0x89c8d6
// 0089c8b7  8b16                 mov edx, dword ptr [esi]
// 0089c8b9  8b4204               mov eax, dword ptr [edx + 4]
// 0089c8bc  8bce                 mov ecx, esi
// 0089c8be  ffd0                 call eax
// 0089c8c0  8d4e08               lea ecx, [esi + 8]
// 0089c8c3  83caff               or edx, 0xffffffff
// 0089c8c6  f00fc111             lock xadd dword ptr [ecx], edx
// 0089c8ca  750a                 jne 0x89c8d6
// 0089c8cc  8b06                 mov eax, dword ptr [esi]
// 0089c8ce  8b5008               mov edx, dword ptr [eax + 8]
// 0089c8d1  8bce                 mov ecx, esi
// 0089c8d3  5e                   pop esi
// 0089c8d4  ffe2                 jmp edx
// 0089c8d6  5e                   pop esi
// 0089c8d7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
