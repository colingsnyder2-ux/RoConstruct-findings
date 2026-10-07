// roc 2011-06 00a30f60  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30f60
//
// 00a30f60  56                   push esi
// 00a30f61  8b354c29cb00         mov esi, dword ptr [0xcb294c]
// 00a30f67  85f6                 test esi, esi
// 00a30f69  742b                 je 0xa30f96
// 00a30f6b  8d4604               lea eax, [esi + 4]
// 00a30f6e  83c9ff               or ecx, 0xffffffff
// 00a30f71  f00fc108             lock xadd dword ptr [eax], ecx
// 00a30f75  751f                 jne 0xa30f96
// 00a30f77  8b16                 mov edx, dword ptr [esi]
// 00a30f79  8b4204               mov eax, dword ptr [edx + 4]
// 00a30f7c  8bce                 mov ecx, esi
// 00a30f7e  ffd0                 call eax
// 00a30f80  8d4e08               lea ecx, [esi + 8]
// 00a30f83  83caff               or edx, 0xffffffff
// 00a30f86  f00fc111             lock xadd dword ptr [ecx], edx
// 00a30f8a  750a                 jne 0xa30f96
// 00a30f8c  8b06                 mov eax, dword ptr [esi]
// 00a30f8e  8b5008               mov edx, dword ptr [eax + 8]
// 00a30f91  8bce                 mov ecx, esi
// 00a30f93  5e                   pop esi
// 00a30f94  ffe2                 jmp edx
// 00a30f96  5e                   pop esi
// 00a30f97  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
