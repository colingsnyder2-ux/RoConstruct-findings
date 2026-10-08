// from server: 100% by auto
// roc 2009-06 008948b0  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008948b0
//
// 008948b0  56                   push esi
// 008948b1  8b3544b1a300         mov esi, dword ptr [0xa3b144]
// 008948b7  85f6                 test esi, esi
// 008948b9  742b                 je 0x8948e6
// 008948bb  8d4604               lea eax, [esi + 4]
// 008948be  83c9ff               or ecx, 0xffffffff
// 008948c1  f00fc108             lock xadd dword ptr [eax], ecx
// 008948c5  751f                 jne 0x8948e6
// 008948c7  8b16                 mov edx, dword ptr [esi]
// 008948c9  8b4204               mov eax, dword ptr [edx + 4]
// 008948cc  8bce                 mov ecx, esi
// 008948ce  ffd0                 call eax
// 008948d0  8d4e08               lea ecx, [esi + 8]
// 008948d3  83caff               or edx, 0xffffffff
// 008948d6  f00fc111             lock xadd dword ptr [ecx], edx
// 008948da  750a                 jne 0x8948e6
// 008948dc  8b06                 mov eax, dword ptr [esi]
// 008948de  8b5008               mov edx, dword ptr [eax + 8]
// 008948e1  8bce                 mov ecx, esi
// 008948e3  5e                   pop esi
// 008948e4  ffe2                 jmp edx
// 008948e6  5e                   pop esi
// 008948e7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
