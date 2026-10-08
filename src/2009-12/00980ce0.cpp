// roc 2009-12 00980ce0  unit: seg_00980000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980ce0
//
// 00980ce0  56                   push esi
// 00980ce1  8b35282cb800         mov esi, dword ptr [0xb82c28]
// 00980ce7  85f6                 test esi, esi
// 00980ce9  742b                 je 0x980d16
// 00980ceb  8d4604               lea eax, [esi + 4]
// 00980cee  83c9ff               or ecx, 0xffffffff
// 00980cf1  f00fc108             lock xadd dword ptr [eax], ecx
// 00980cf5  751f                 jne 0x980d16
// 00980cf7  8b16                 mov edx, dword ptr [esi]
// 00980cf9  8b4204               mov eax, dword ptr [edx + 4]
// 00980cfc  8bce                 mov ecx, esi
// 00980cfe  ffd0                 call eax
// 00980d00  8d4e08               lea ecx, [esi + 8]
// 00980d03  83caff               or edx, 0xffffffff
// 00980d06  f00fc111             lock xadd dword ptr [ecx], edx
// 00980d0a  750a                 jne 0x980d16
// 00980d0c  8b06                 mov eax, dword ptr [esi]
// 00980d0e  8b5008               mov edx, dword ptr [eax + 8]
// 00980d11  8bce                 mov ecx, esi
// 00980d13  5e                   pop esi
// 00980d14  ffe2                 jmp edx
// 00980d16  5e                   pop esi
// 00980d17  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
