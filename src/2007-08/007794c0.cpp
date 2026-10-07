// roc 2007-08 007794c0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007794c0
//
// 007794c0  56                   push esi
// 007794c1  8b3594128c00         mov esi, dword ptr [0x8c1294]
// 007794c7  85f6                 test esi, esi
// 007794c9  742b                 je 0x7794f6
// 007794cb  8d4604               lea eax, [esi + 4]
// 007794ce  83c9ff               or ecx, 0xffffffff
// 007794d1  f00fc108             lock xadd dword ptr [eax], ecx
// 007794d5  751f                 jne 0x7794f6
// 007794d7  8b16                 mov edx, dword ptr [esi]
// 007794d9  8b4204               mov eax, dword ptr [edx + 4]
// 007794dc  8bce                 mov ecx, esi
// 007794de  ffd0                 call eax
// 007794e0  8d4e08               lea ecx, [esi + 8]
// 007794e3  83caff               or edx, 0xffffffff
// 007794e6  f00fc111             lock xadd dword ptr [ecx], edx
// 007794ea  750a                 jne 0x7794f6
// 007794ec  8b06                 mov eax, dword ptr [esi]
// 007794ee  8b5008               mov edx, dword ptr [eax + 8]
// 007794f1  8bce                 mov ecx, esi
// 007794f3  5e                   pop esi
// 007794f4  ffe2                 jmp edx
// 007794f6  5e                   pop esi
// 007794f7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
