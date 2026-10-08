// from server: 100% by auto
// roc 2009-06 00894370  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894370
//
// 00894370  56                   push esi
// 00894371  8b35f8a3a300         mov esi, dword ptr [0xa3a3f8]
// 00894377  85f6                 test esi, esi
// 00894379  742b                 je 0x8943a6
// 0089437b  8d4604               lea eax, [esi + 4]
// 0089437e  83c9ff               or ecx, 0xffffffff
// 00894381  f00fc108             lock xadd dword ptr [eax], ecx
// 00894385  751f                 jne 0x8943a6
// 00894387  8b16                 mov edx, dword ptr [esi]
// 00894389  8b4204               mov eax, dword ptr [edx + 4]
// 0089438c  8bce                 mov ecx, esi
// 0089438e  ffd0                 call eax
// 00894390  8d4e08               lea ecx, [esi + 8]
// 00894393  83caff               or edx, 0xffffffff
// 00894396  f00fc111             lock xadd dword ptr [ecx], edx
// 0089439a  750a                 jne 0x8943a6
// 0089439c  8b06                 mov eax, dword ptr [esi]
// 0089439e  8b5008               mov edx, dword ptr [eax + 8]
// 008943a1  8bce                 mov ecx, esi
// 008943a3  5e                   pop esi
// 008943a4  ffe2                 jmp edx
// 008943a6  5e                   pop esi
// 008943a7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
