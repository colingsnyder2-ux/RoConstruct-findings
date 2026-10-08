// from server: 100% by auto
// roc 2009-06 00897890  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897890
//
// 00897890  56                   push esi
// 00897891  8b356c46a400         mov esi, dword ptr [0xa4466c]
// 00897897  85f6                 test esi, esi
// 00897899  742b                 je 0x8978c6
// 0089789b  8d4604               lea eax, [esi + 4]
// 0089789e  83c9ff               or ecx, 0xffffffff
// 008978a1  f00fc108             lock xadd dword ptr [eax], ecx
// 008978a5  751f                 jne 0x8978c6
// 008978a7  8b16                 mov edx, dword ptr [esi]
// 008978a9  8b4204               mov eax, dword ptr [edx + 4]
// 008978ac  8bce                 mov ecx, esi
// 008978ae  ffd0                 call eax
// 008978b0  8d4e08               lea ecx, [esi + 8]
// 008978b3  83caff               or edx, 0xffffffff
// 008978b6  f00fc111             lock xadd dword ptr [ecx], edx
// 008978ba  750a                 jne 0x8978c6
// 008978bc  8b06                 mov eax, dword ptr [esi]
// 008978be  8b5008               mov edx, dword ptr [eax + 8]
// 008978c1  8bce                 mov ecx, esi
// 008978c3  5e                   pop esi
// 008978c4  ffe2                 jmp edx
// 008978c6  5e                   pop esi
// 008978c7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
