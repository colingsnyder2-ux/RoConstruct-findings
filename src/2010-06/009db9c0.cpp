// from server: 100% by auto
// roc 2010-06 009db9c0  unit: seg_009d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db9c0
//
// 009db9c0  56                   push esi
// 009db9c1  8b35b419c000         mov esi, dword ptr [0xc019b4]
// 009db9c7  85f6                 test esi, esi
// 009db9c9  742b                 je 0x9db9f6
// 009db9cb  8d4604               lea eax, [esi + 4]
// 009db9ce  83c9ff               or ecx, 0xffffffff
// 009db9d1  f00fc108             lock xadd dword ptr [eax], ecx
// 009db9d5  751f                 jne 0x9db9f6
// 009db9d7  8b16                 mov edx, dword ptr [esi]
// 009db9d9  8b4204               mov eax, dword ptr [edx + 4]
// 009db9dc  8bce                 mov ecx, esi
// 009db9de  ffd0                 call eax
// 009db9e0  8d4e08               lea ecx, [esi + 8]
// 009db9e3  83caff               or edx, 0xffffffff
// 009db9e6  f00fc111             lock xadd dword ptr [ecx], edx
// 009db9ea  750a                 jne 0x9db9f6
// 009db9ec  8b06                 mov eax, dword ptr [esi]
// 009db9ee  8b5008               mov edx, dword ptr [eax + 8]
// 009db9f1  8bce                 mov ecx, esi
// 009db9f3  5e                   pop esi
// 009db9f4  ffe2                 jmp edx
// 009db9f6  5e                   pop esi
// 009db9f7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
