// from server: 100% by auto
// roc 2010-06 009defe0  unit: seg_009d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009defe0
//
// 009defe0  56                   push esi
// 009defe1  8b3508bdc000         mov esi, dword ptr [0xc0bd08]
// 009defe7  85f6                 test esi, esi
// 009defe9  742b                 je 0x9df016
// 009defeb  8d4604               lea eax, [esi + 4]
// 009defee  83c9ff               or ecx, 0xffffffff
// 009deff1  f00fc108             lock xadd dword ptr [eax], ecx
// 009deff5  751f                 jne 0x9df016
// 009deff7  8b16                 mov edx, dword ptr [esi]
// 009deff9  8b4204               mov eax, dword ptr [edx + 4]
// 009deffc  8bce                 mov ecx, esi
// 009deffe  ffd0                 call eax
// 009df000  8d4e08               lea ecx, [esi + 8]
// 009df003  83caff               or edx, 0xffffffff
// 009df006  f00fc111             lock xadd dword ptr [ecx], edx
// 009df00a  750a                 jne 0x9df016
// 009df00c  8b06                 mov eax, dword ptr [esi]
// 009df00e  8b5008               mov edx, dword ptr [eax + 8]
// 009df011  8bce                 mov ecx, esi
// 009df013  5e                   pop esi
// 009df014  ffe2                 jmp edx
// 009df016  5e                   pop esi
// 009df017  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
