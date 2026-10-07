// roc 2012-06 00b11c60  unit: seg_00b10000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b11c60
//
// 00b11c60  56                   push esi
// 00b11c61  8b35248ce100         mov esi, dword ptr [0xe18c24]
// 00b11c67  85f6                 test esi, esi
// 00b11c69  742b                 je 0xb11c96
// 00b11c6b  8d4604               lea eax, [esi + 4]
// 00b11c6e  83c9ff               or ecx, 0xffffffff
// 00b11c71  f00fc108             lock xadd dword ptr [eax], ecx
// 00b11c75  751f                 jne 0xb11c96
// 00b11c77  8b16                 mov edx, dword ptr [esi]
// 00b11c79  8b4204               mov eax, dword ptr [edx + 4]
// 00b11c7c  8bce                 mov ecx, esi
// 00b11c7e  ffd0                 call eax
// 00b11c80  8d4e08               lea ecx, [esi + 8]
// 00b11c83  83caff               or edx, 0xffffffff
// 00b11c86  f00fc111             lock xadd dword ptr [ecx], edx
// 00b11c8a  750a                 jne 0xb11c96
// 00b11c8c  8b06                 mov eax, dword ptr [esi]
// 00b11c8e  8b5008               mov edx, dword ptr [eax + 8]
// 00b11c91  8bce                 mov ecx, esi
// 00b11c93  5e                   pop esi
// 00b11c94  ffe2                 jmp edx
// 00b11c96  5e                   pop esi
// 00b11c97  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
