// from server: 100% by auto
// roc 2010-06 009e2b90  unit: seg_009e0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2b90
//
// 009e2b90  56                   push esi
// 009e2b91  8b35a49bc100         mov esi, dword ptr [0xc19ba4]
// 009e2b97  85f6                 test esi, esi
// 009e2b99  742b                 je 0x9e2bc6
// 009e2b9b  8d4604               lea eax, [esi + 4]
// 009e2b9e  83c9ff               or ecx, 0xffffffff
// 009e2ba1  f00fc108             lock xadd dword ptr [eax], ecx
// 009e2ba5  751f                 jne 0x9e2bc6
// 009e2ba7  8b16                 mov edx, dword ptr [esi]
// 009e2ba9  8b4204               mov eax, dword ptr [edx + 4]
// 009e2bac  8bce                 mov ecx, esi
// 009e2bae  ffd0                 call eax
// 009e2bb0  8d4e08               lea ecx, [esi + 8]
// 009e2bb3  83caff               or edx, 0xffffffff
// 009e2bb6  f00fc111             lock xadd dword ptr [ecx], edx
// 009e2bba  750a                 jne 0x9e2bc6
// 009e2bbc  8b06                 mov eax, dword ptr [esi]
// 009e2bbe  8b5008               mov edx, dword ptr [eax + 8]
// 009e2bc1  8bce                 mov ecx, esi
// 009e2bc3  5e                   pop esi
// 009e2bc4  ffe2                 jmp edx
// 009e2bc6  5e                   pop esi
// 009e2bc7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
