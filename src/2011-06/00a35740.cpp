// roc 2011-06 00a35740  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35740
//
// 00a35740  56                   push esi
// 00a35741  8b3540dfcb00         mov esi, dword ptr [0xcbdf40]
// 00a35747  85f6                 test esi, esi
// 00a35749  742b                 je 0xa35776
// 00a3574b  8d4604               lea eax, [esi + 4]
// 00a3574e  83c9ff               or ecx, 0xffffffff
// 00a35751  f00fc108             lock xadd dword ptr [eax], ecx
// 00a35755  751f                 jne 0xa35776
// 00a35757  8b16                 mov edx, dword ptr [esi]
// 00a35759  8b4204               mov eax, dword ptr [edx + 4]
// 00a3575c  8bce                 mov ecx, esi
// 00a3575e  ffd0                 call eax
// 00a35760  8d4e08               lea ecx, [esi + 8]
// 00a35763  83caff               or edx, 0xffffffff
// 00a35766  f00fc111             lock xadd dword ptr [ecx], edx
// 00a3576a  750a                 jne 0xa35776
// 00a3576c  8b06                 mov eax, dword ptr [esi]
// 00a3576e  8b5008               mov edx, dword ptr [eax + 8]
// 00a35771  8bce                 mov ecx, esi
// 00a35773  5e                   pop esi
// 00a35774  ffe2                 jmp edx
// 00a35776  5e                   pop esi
// 00a35777  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
