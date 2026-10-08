// roc 2009-12 00984dc0  unit: seg_00980000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984dc0
//
// 00984dc0  56                   push esi
// 00984dc1  8b35d00eb900         mov esi, dword ptr [0xb90ed0]
// 00984dc7  85f6                 test esi, esi
// 00984dc9  742b                 je 0x984df6
// 00984dcb  8d4604               lea eax, [esi + 4]
// 00984dce  83c9ff               or ecx, 0xffffffff
// 00984dd1  f00fc108             lock xadd dword ptr [eax], ecx
// 00984dd5  751f                 jne 0x984df6
// 00984dd7  8b16                 mov edx, dword ptr [esi]
// 00984dd9  8b4204               mov eax, dword ptr [edx + 4]
// 00984ddc  8bce                 mov ecx, esi
// 00984dde  ffd0                 call eax
// 00984de0  8d4e08               lea ecx, [esi + 8]
// 00984de3  83caff               or edx, 0xffffffff
// 00984de6  f00fc111             lock xadd dword ptr [ecx], edx
// 00984dea  750a                 jne 0x984df6
// 00984dec  8b06                 mov eax, dword ptr [esi]
// 00984dee  8b5008               mov edx, dword ptr [eax + 8]
// 00984df1  8bce                 mov ecx, esi
// 00984df3  5e                   pop esi
// 00984df4  ffe2                 jmp edx
// 00984df6  5e                   pop esi
// 00984df7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
