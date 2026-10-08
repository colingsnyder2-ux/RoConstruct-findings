// from server: 100% by auto
// roc 2010-06 009ddf80  unit: seg_009d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddf80
//
// 009ddf80  56                   push esi
// 009ddf81  8b350490c000         mov esi, dword ptr [0xc09004]
// 009ddf87  85f6                 test esi, esi
// 009ddf89  742b                 je 0x9ddfb6
// 009ddf8b  8d4604               lea eax, [esi + 4]
// 009ddf8e  83c9ff               or ecx, 0xffffffff
// 009ddf91  f00fc108             lock xadd dword ptr [eax], ecx
// 009ddf95  751f                 jne 0x9ddfb6
// 009ddf97  8b16                 mov edx, dword ptr [esi]
// 009ddf99  8b4204               mov eax, dword ptr [edx + 4]
// 009ddf9c  8bce                 mov ecx, esi
// 009ddf9e  ffd0                 call eax
// 009ddfa0  8d4e08               lea ecx, [esi + 8]
// 009ddfa3  83caff               or edx, 0xffffffff
// 009ddfa6  f00fc111             lock xadd dword ptr [ecx], edx
// 009ddfaa  750a                 jne 0x9ddfb6
// 009ddfac  8b06                 mov eax, dword ptr [esi]
// 009ddfae  8b5008               mov edx, dword ptr [eax + 8]
// 009ddfb1  8bce                 mov ecx, esi
// 009ddfb3  5e                   pop esi
// 009ddfb4  ffe2                 jmp edx
// 009ddfb6  5e                   pop esi
// 009ddfb7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
