// from server: 100% by auto
// roc 2010-06 009dba00  unit: seg_009d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dba00
//
// 009dba00  56                   push esi
// 009dba01  8b35bc19c000         mov esi, dword ptr [0xc019bc]
// 009dba07  85f6                 test esi, esi
// 009dba09  742b                 je 0x9dba36
// 009dba0b  8d4604               lea eax, [esi + 4]
// 009dba0e  83c9ff               or ecx, 0xffffffff
// 009dba11  f00fc108             lock xadd dword ptr [eax], ecx
// 009dba15  751f                 jne 0x9dba36
// 009dba17  8b16                 mov edx, dword ptr [esi]
// 009dba19  8b4204               mov eax, dword ptr [edx + 4]
// 009dba1c  8bce                 mov ecx, esi
// 009dba1e  ffd0                 call eax
// 009dba20  8d4e08               lea ecx, [esi + 8]
// 009dba23  83caff               or edx, 0xffffffff
// 009dba26  f00fc111             lock xadd dword ptr [ecx], edx
// 009dba2a  750a                 jne 0x9dba36
// 009dba2c  8b06                 mov eax, dword ptr [esi]
// 009dba2e  8b5008               mov edx, dword ptr [eax + 8]
// 009dba31  8bce                 mov ecx, esi
// 009dba33  5e                   pop esi
// 009dba34  ffe2                 jmp edx
// 009dba36  5e                   pop esi
// 009dba37  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
