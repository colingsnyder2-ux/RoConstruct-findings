// from server: 100% by auto
// roc 2007-08 00777a90  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777a90
//
// 00777a90  56                   push esi
// 00777a91  8b3518ba8b00         mov esi, dword ptr [0x8bba18]
// 00777a97  85f6                 test esi, esi
// 00777a99  742b                 je 0x777ac6
// 00777a9b  8d4604               lea eax, [esi + 4]
// 00777a9e  83c9ff               or ecx, 0xffffffff
// 00777aa1  f00fc108             lock xadd dword ptr [eax], ecx
// 00777aa5  751f                 jne 0x777ac6
// 00777aa7  8b16                 mov edx, dword ptr [esi]
// 00777aa9  8b4204               mov eax, dword ptr [edx + 4]
// 00777aac  8bce                 mov ecx, esi
// 00777aae  ffd0                 call eax
// 00777ab0  8d4e08               lea ecx, [esi + 8]
// 00777ab3  83caff               or edx, 0xffffffff
// 00777ab6  f00fc111             lock xadd dword ptr [ecx], edx
// 00777aba  750a                 jne 0x777ac6
// 00777abc  8b06                 mov eax, dword ptr [esi]
// 00777abe  8b5008               mov edx, dword ptr [eax + 8]
// 00777ac1  8bce                 mov ecx, esi
// 00777ac3  5e                   pop esi
// 00777ac4  ffe2                 jmp edx
// 00777ac6  5e                   pop esi
// 00777ac7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
