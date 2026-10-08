// from server: 100% by auto
// roc 2012-06 00b12540  unit: seg_00b10000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b12540
//
// 00b12540  56                   push esi
// 00b12541  8b3560a2e100         mov esi, dword ptr [0xe1a260]
// 00b12547  85f6                 test esi, esi
// 00b12549  742b                 je 0xb12576
// 00b1254b  8d4604               lea eax, [esi + 4]
// 00b1254e  83c9ff               or ecx, 0xffffffff
// 00b12551  f00fc108             lock xadd dword ptr [eax], ecx
// 00b12555  751f                 jne 0xb12576
// 00b12557  8b16                 mov edx, dword ptr [esi]
// 00b12559  8b4204               mov eax, dword ptr [edx + 4]
// 00b1255c  8bce                 mov ecx, esi
// 00b1255e  ffd0                 call eax
// 00b12560  8d4e08               lea ecx, [esi + 8]
// 00b12563  83caff               or edx, 0xffffffff
// 00b12566  f00fc111             lock xadd dword ptr [ecx], edx
// 00b1256a  750a                 jne 0xb12576
// 00b1256c  8b06                 mov eax, dword ptr [esi]
// 00b1256e  8b5008               mov edx, dword ptr [eax + 8]
// 00b12571  8bce                 mov ecx, esi
// 00b12573  5e                   pop esi
// 00b12574  ffe2                 jmp edx
// 00b12576  5e                   pop esi
// 00b12577  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
