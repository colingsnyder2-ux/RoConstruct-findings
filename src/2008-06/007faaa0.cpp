// from server: 100% by auto
// roc 2008-06 007faaa0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007faaa0
//
// 007faaa0  56                   push esi
// 007faaa1  8b35a0d29600         mov esi, dword ptr [0x96d2a0]
// 007faaa7  85f6                 test esi, esi
// 007faaa9  742b                 je 0x7faad6
// 007faaab  8d4604               lea eax, [esi + 4]
// 007faaae  83c9ff               or ecx, 0xffffffff
// 007faab1  f00fc108             lock xadd dword ptr [eax], ecx
// 007faab5  751f                 jne 0x7faad6
// 007faab7  8b16                 mov edx, dword ptr [esi]
// 007faab9  8b4204               mov eax, dword ptr [edx + 4]
// 007faabc  8bce                 mov ecx, esi
// 007faabe  ffd0                 call eax
// 007faac0  8d4e08               lea ecx, [esi + 8]
// 007faac3  83caff               or edx, 0xffffffff
// 007faac6  f00fc111             lock xadd dword ptr [ecx], edx
// 007faaca  750a                 jne 0x7faad6
// 007faacc  8b06                 mov eax, dword ptr [esi]
// 007faace  8b5008               mov edx, dword ptr [eax + 8]
// 007faad1  8bce                 mov ecx, esi
// 007faad3  5e                   pop esi
// 007faad4  ffe2                 jmp edx
// 007faad6  5e                   pop esi
// 007faad7  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
