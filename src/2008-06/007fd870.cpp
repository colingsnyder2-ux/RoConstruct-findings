// from server: 100% by auto
// roc 2008-06 007fd870  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd870
//
// 007fd870  56                   push esi
// 007fd871  8b3590579700         mov esi, dword ptr [0x975790]
// 007fd877  85f6                 test esi, esi
// 007fd879  742b                 je 0x7fd8a6
// 007fd87b  8d4604               lea eax, [esi + 4]
// 007fd87e  83c9ff               or ecx, 0xffffffff
// 007fd881  f00fc108             lock xadd dword ptr [eax], ecx
// 007fd885  751f                 jne 0x7fd8a6
// 007fd887  8b16                 mov edx, dword ptr [esi]
// 007fd889  8b4204               mov eax, dword ptr [edx + 4]
// 007fd88c  8bce                 mov ecx, esi
// 007fd88e  ffd0                 call eax
// 007fd890  8d4e08               lea ecx, [esi + 8]
// 007fd893  83caff               or edx, 0xffffffff
// 007fd896  f00fc111             lock xadd dword ptr [ecx], edx
// 007fd89a  750a                 jne 0x7fd8a6
// 007fd89c  8b06                 mov eax, dword ptr [esi]
// 007fd89e  8b5008               mov edx, dword ptr [eax + 8]
// 007fd8a1  8bce                 mov ecx, esi
// 007fd8a3  5e                   pop esi
// 007fd8a4  ffe2                 jmp edx
// 007fd8a6  5e                   pop esi
// 007fd8a7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
