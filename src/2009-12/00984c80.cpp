// roc 2009-12 00984c80  unit: seg_00980000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984c80
//
// 00984c80  56                   push esi
// 00984c81  8b35780bb900         mov esi, dword ptr [0xb90b78]
// 00984c87  85f6                 test esi, esi
// 00984c89  742b                 je 0x984cb6
// 00984c8b  8d4604               lea eax, [esi + 4]
// 00984c8e  83c9ff               or ecx, 0xffffffff
// 00984c91  f00fc108             lock xadd dword ptr [eax], ecx
// 00984c95  751f                 jne 0x984cb6
// 00984c97  8b16                 mov edx, dword ptr [esi]
// 00984c99  8b4204               mov eax, dword ptr [edx + 4]
// 00984c9c  8bce                 mov ecx, esi
// 00984c9e  ffd0                 call eax
// 00984ca0  8d4e08               lea ecx, [esi + 8]
// 00984ca3  83caff               or edx, 0xffffffff
// 00984ca6  f00fc111             lock xadd dword ptr [ecx], edx
// 00984caa  750a                 jne 0x984cb6
// 00984cac  8b06                 mov eax, dword ptr [esi]
// 00984cae  8b5008               mov edx, dword ptr [eax + 8]
// 00984cb1  8bce                 mov ecx, esi
// 00984cb3  5e                   pop esi
// 00984cb4  ffe2                 jmp edx
// 00984cb6  5e                   pop esi
// 00984cb7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
