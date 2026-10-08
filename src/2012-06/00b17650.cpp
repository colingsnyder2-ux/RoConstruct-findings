// from server: 100% by auto
// roc 2012-06 00b17650  unit: seg_00b10000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b17650
//
// 00b17650  56                   push esi
// 00b17651  8b35ec1fe300         mov esi, dword ptr [0xe31fec]
// 00b17657  85f6                 test esi, esi
// 00b17659  742b                 je 0xb17686
// 00b1765b  8d4604               lea eax, [esi + 4]
// 00b1765e  83c9ff               or ecx, 0xffffffff
// 00b17661  f00fc108             lock xadd dword ptr [eax], ecx
// 00b17665  751f                 jne 0xb17686
// 00b17667  8b16                 mov edx, dword ptr [esi]
// 00b17669  8b4204               mov eax, dword ptr [edx + 4]
// 00b1766c  8bce                 mov ecx, esi
// 00b1766e  ffd0                 call eax
// 00b17670  8d4e08               lea ecx, [esi + 8]
// 00b17673  83caff               or edx, 0xffffffff
// 00b17676  f00fc111             lock xadd dword ptr [ecx], edx
// 00b1767a  750a                 jne 0xb17686
// 00b1767c  8b06                 mov eax, dword ptr [esi]
// 00b1767e  8b5008               mov edx, dword ptr [eax + 8]
// 00b17681  8bce                 mov ecx, esi
// 00b17683  5e                   pop esi
// 00b17684  ffe2                 jmp edx
// 00b17686  5e                   pop esi
// 00b17687  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
