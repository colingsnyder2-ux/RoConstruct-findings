// roc 2011-06 00a35850  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35850
//
// 00a35850  56                   push esi
// 00a35851  8b35e0e0cb00         mov esi, dword ptr [0xcbe0e0]
// 00a35857  85f6                 test esi, esi
// 00a35859  742b                 je 0xa35886
// 00a3585b  8d4604               lea eax, [esi + 4]
// 00a3585e  83c9ff               or ecx, 0xffffffff
// 00a35861  f00fc108             lock xadd dword ptr [eax], ecx
// 00a35865  751f                 jne 0xa35886
// 00a35867  8b16                 mov edx, dword ptr [esi]
// 00a35869  8b4204               mov eax, dword ptr [edx + 4]
// 00a3586c  8bce                 mov ecx, esi
// 00a3586e  ffd0                 call eax
// 00a35870  8d4e08               lea ecx, [esi + 8]
// 00a35873  83caff               or edx, 0xffffffff
// 00a35876  f00fc111             lock xadd dword ptr [ecx], edx
// 00a3587a  750a                 jne 0xa35886
// 00a3587c  8b06                 mov eax, dword ptr [esi]
// 00a3587e  8b5008               mov edx, dword ptr [eax + 8]
// 00a35881  8bce                 mov ecx, esi
// 00a35883  5e                   pop esi
// 00a35884  ffe2                 jmp edx
// 00a35886  5e                   pop esi
// 00a35887  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
