// roc 2009-12 0097d6d0  unit: seg_00970000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d6d0
//
// 0097d6d0  56                   push esi
// 0097d6d1  8b35fc94b700         mov esi, dword ptr [0xb794fc]
// 0097d6d7  85f6                 test esi, esi
// 0097d6d9  742b                 je 0x97d706
// 0097d6db  8d4604               lea eax, [esi + 4]
// 0097d6de  83c9ff               or ecx, 0xffffffff
// 0097d6e1  f00fc108             lock xadd dword ptr [eax], ecx
// 0097d6e5  751f                 jne 0x97d706
// 0097d6e7  8b16                 mov edx, dword ptr [esi]
// 0097d6e9  8b4204               mov eax, dword ptr [edx + 4]
// 0097d6ec  8bce                 mov ecx, esi
// 0097d6ee  ffd0                 call eax
// 0097d6f0  8d4e08               lea ecx, [esi + 8]
// 0097d6f3  83caff               or edx, 0xffffffff
// 0097d6f6  f00fc111             lock xadd dword ptr [ecx], edx
// 0097d6fa  750a                 jne 0x97d706
// 0097d6fc  8b06                 mov eax, dword ptr [esi]
// 0097d6fe  8b5008               mov edx, dword ptr [eax + 8]
// 0097d701  8bce                 mov ecx, esi
// 0097d703  5e                   pop esi
// 0097d704  ffe2                 jmp edx
// 0097d706  5e                   pop esi
// 0097d707  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
