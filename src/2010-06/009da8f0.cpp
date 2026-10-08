// from server: 100% by auto
// roc 2010-06 009da8f0  unit: seg_009d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da8f0
//
// 009da8f0  56                   push esi
// 009da8f1  8b35acfabf00         mov esi, dword ptr [0xbffaac]
// 009da8f7  85f6                 test esi, esi
// 009da8f9  742b                 je 0x9da926
// 009da8fb  8d4604               lea eax, [esi + 4]
// 009da8fe  83c9ff               or ecx, 0xffffffff
// 009da901  f00fc108             lock xadd dword ptr [eax], ecx
// 009da905  751f                 jne 0x9da926
// 009da907  8b16                 mov edx, dword ptr [esi]
// 009da909  8b4204               mov eax, dword ptr [edx + 4]
// 009da90c  8bce                 mov ecx, esi
// 009da90e  ffd0                 call eax
// 009da910  8d4e08               lea ecx, [esi + 8]
// 009da913  83caff               or edx, 0xffffffff
// 009da916  f00fc111             lock xadd dword ptr [ecx], edx
// 009da91a  750a                 jne 0x9da926
// 009da91c  8b06                 mov eax, dword ptr [esi]
// 009da91e  8b5008               mov edx, dword ptr [eax + 8]
// 009da921  8bce                 mov ecx, esi
// 009da923  5e                   pop esi
// 009da924  ffe2                 jmp edx
// 009da926  5e                   pop esi
// 009da927  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
