// from server: 100% by auto
// roc 2012-06 00b16730  unit: seg_00b10000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b16730
//
// 00b16730  56                   push esi
// 00b16731  8b35f8e6e200         mov esi, dword ptr [0xe2e6f8]
// 00b16737  85f6                 test esi, esi
// 00b16739  742b                 je 0xb16766
// 00b1673b  8d4604               lea eax, [esi + 4]
// 00b1673e  83c9ff               or ecx, 0xffffffff
// 00b16741  f00fc108             lock xadd dword ptr [eax], ecx
// 00b16745  751f                 jne 0xb16766
// 00b16747  8b16                 mov edx, dword ptr [esi]
// 00b16749  8b4204               mov eax, dword ptr [edx + 4]
// 00b1674c  8bce                 mov ecx, esi
// 00b1674e  ffd0                 call eax
// 00b16750  8d4e08               lea ecx, [esi + 8]
// 00b16753  83caff               or edx, 0xffffffff
// 00b16756  f00fc111             lock xadd dword ptr [ecx], edx
// 00b1675a  750a                 jne 0xb16766
// 00b1675c  8b06                 mov eax, dword ptr [esi]
// 00b1675e  8b5008               mov edx, dword ptr [eax + 8]
// 00b16761  8bce                 mov ecx, esi
// 00b16763  5e                   pop esi
// 00b16764  ffe2                 jmp edx
// 00b16766  5e                   pop esi
// 00b16767  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
