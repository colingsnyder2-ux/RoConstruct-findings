// roc 2007-08 007787b0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007787b0
//
// 007787b0  56                   push esi
// 007787b1  8b353ce78b00         mov esi, dword ptr [0x8be73c]
// 007787b7  85f6                 test esi, esi
// 007787b9  742b                 je 0x7787e6
// 007787bb  8d4604               lea eax, [esi + 4]
// 007787be  83c9ff               or ecx, 0xffffffff
// 007787c1  f00fc108             lock xadd dword ptr [eax], ecx
// 007787c5  751f                 jne 0x7787e6
// 007787c7  8b16                 mov edx, dword ptr [esi]
// 007787c9  8b4204               mov eax, dword ptr [edx + 4]
// 007787cc  8bce                 mov ecx, esi
// 007787ce  ffd0                 call eax
// 007787d0  8d4e08               lea ecx, [esi + 8]
// 007787d3  83caff               or edx, 0xffffffff
// 007787d6  f00fc111             lock xadd dword ptr [ecx], edx
// 007787da  750a                 jne 0x7787e6
// 007787dc  8b06                 mov eax, dword ptr [esi]
// 007787de  8b5008               mov edx, dword ptr [eax + 8]
// 007787e1  8bce                 mov ecx, esi
// 007787e3  5e                   pop esi
// 007787e4  ffe2                 jmp edx
// 007787e6  5e                   pop esi
// 007787e7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
