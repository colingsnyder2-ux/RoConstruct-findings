// roc 2011-06 00a31720  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31720
//
// 00a31720  56                   push esi
// 00a31721  8b353c39cb00         mov esi, dword ptr [0xcb393c]
// 00a31727  85f6                 test esi, esi
// 00a31729  742b                 je 0xa31756
// 00a3172b  8d4604               lea eax, [esi + 4]
// 00a3172e  83c9ff               or ecx, 0xffffffff
// 00a31731  f00fc108             lock xadd dword ptr [eax], ecx
// 00a31735  751f                 jne 0xa31756
// 00a31737  8b16                 mov edx, dword ptr [esi]
// 00a31739  8b4204               mov eax, dword ptr [edx + 4]
// 00a3173c  8bce                 mov ecx, esi
// 00a3173e  ffd0                 call eax
// 00a31740  8d4e08               lea ecx, [esi + 8]
// 00a31743  83caff               or edx, 0xffffffff
// 00a31746  f00fc111             lock xadd dword ptr [ecx], edx
// 00a3174a  750a                 jne 0xa31756
// 00a3174c  8b06                 mov eax, dword ptr [esi]
// 00a3174e  8b5008               mov edx, dword ptr [eax + 8]
// 00a31751  8bce                 mov ecx, esi
// 00a31753  5e                   pop esi
// 00a31754  ffe2                 jmp edx
// 00a31756  5e                   pop esi
// 00a31757  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
