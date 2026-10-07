// roc 2011-06 00a35890  unit: seg_00a30000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35890
//
// 00a35890  56                   push esi
// 00a35891  8b35f0e0cb00         mov esi, dword ptr [0xcbe0f0]
// 00a35897  85f6                 test esi, esi
// 00a35899  742b                 je 0xa358c6
// 00a3589b  8d4604               lea eax, [esi + 4]
// 00a3589e  83c9ff               or ecx, 0xffffffff
// 00a358a1  f00fc108             lock xadd dword ptr [eax], ecx
// 00a358a5  751f                 jne 0xa358c6
// 00a358a7  8b16                 mov edx, dword ptr [esi]
// 00a358a9  8b4204               mov eax, dword ptr [edx + 4]
// 00a358ac  8bce                 mov ecx, esi
// 00a358ae  ffd0                 call eax
// 00a358b0  8d4e08               lea ecx, [esi + 8]
// 00a358b3  83caff               or edx, 0xffffffff
// 00a358b6  f00fc111             lock xadd dword ptr [ecx], edx
// 00a358ba  750a                 jne 0xa358c6
// 00a358bc  8b06                 mov eax, dword ptr [esi]
// 00a358be  8b5008               mov edx, dword ptr [eax + 8]
// 00a358c1  8bce                 mov ecx, esi
// 00a358c3  5e                   pop esi
// 00a358c4  ffe2                 jmp edx
// 00a358c6  5e                   pop esi
// 00a358c7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
