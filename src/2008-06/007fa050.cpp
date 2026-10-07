// roc 2008-06 007fa050  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa050
//
// 007fa050  56                   push esi
// 007fa051  8b3560c29600         mov esi, dword ptr [0x96c260]
// 007fa057  85f6                 test esi, esi
// 007fa059  742b                 je 0x7fa086
// 007fa05b  8d4604               lea eax, [esi + 4]
// 007fa05e  83c9ff               or ecx, 0xffffffff
// 007fa061  f00fc108             lock xadd dword ptr [eax], ecx
// 007fa065  751f                 jne 0x7fa086
// 007fa067  8b16                 mov edx, dword ptr [esi]
// 007fa069  8b4204               mov eax, dword ptr [edx + 4]
// 007fa06c  8bce                 mov ecx, esi
// 007fa06e  ffd0                 call eax
// 007fa070  8d4e08               lea ecx, [esi + 8]
// 007fa073  83caff               or edx, 0xffffffff
// 007fa076  f00fc111             lock xadd dword ptr [ecx], edx
// 007fa07a  750a                 jne 0x7fa086
// 007fa07c  8b06                 mov eax, dword ptr [esi]
// 007fa07e  8b5008               mov edx, dword ptr [eax + 8]
// 007fa081  8bce                 mov ecx, esi
// 007fa083  5e                   pop esi
// 007fa084  ffe2                 jmp edx
// 007fa086  5e                   pop esi
// 007fa087  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
