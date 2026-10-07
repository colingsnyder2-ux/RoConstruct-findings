// roc 2007-08 00779e20  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779e20
//
// 00779e20  56                   push esi
// 00779e21  8b35fc238c00         mov esi, dword ptr [0x8c23fc]
// 00779e27  85f6                 test esi, esi
// 00779e29  742b                 je 0x779e56
// 00779e2b  8d4604               lea eax, [esi + 4]
// 00779e2e  83c9ff               or ecx, 0xffffffff
// 00779e31  f00fc108             lock xadd dword ptr [eax], ecx
// 00779e35  751f                 jne 0x779e56
// 00779e37  8b16                 mov edx, dword ptr [esi]
// 00779e39  8b4204               mov eax, dword ptr [edx + 4]
// 00779e3c  8bce                 mov ecx, esi
// 00779e3e  ffd0                 call eax
// 00779e40  8d4e08               lea ecx, [esi + 8]
// 00779e43  83caff               or edx, 0xffffffff
// 00779e46  f00fc111             lock xadd dword ptr [ecx], edx
// 00779e4a  750a                 jne 0x779e56
// 00779e4c  8b06                 mov eax, dword ptr [esi]
// 00779e4e  8b5008               mov edx, dword ptr [eax + 8]
// 00779e51  8bce                 mov ecx, esi
// 00779e53  5e                   pop esi
// 00779e54  ffe2                 jmp edx
// 00779e56  5e                   pop esi
// 00779e57  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
