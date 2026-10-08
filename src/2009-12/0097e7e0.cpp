// roc 2009-12 0097e7e0  unit: seg_00970000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097e7e0
//
// 0097e7e0  56                   push esi
// 0097e7e1  8b35fcb3b700         mov esi, dword ptr [0xb7b3fc]
// 0097e7e7  85f6                 test esi, esi
// 0097e7e9  742b                 je 0x97e816
// 0097e7eb  8d4604               lea eax, [esi + 4]
// 0097e7ee  83c9ff               or ecx, 0xffffffff
// 0097e7f1  f00fc108             lock xadd dword ptr [eax], ecx
// 0097e7f5  751f                 jne 0x97e816
// 0097e7f7  8b16                 mov edx, dword ptr [esi]
// 0097e7f9  8b4204               mov eax, dword ptr [edx + 4]
// 0097e7fc  8bce                 mov ecx, esi
// 0097e7fe  ffd0                 call eax
// 0097e800  8d4e08               lea ecx, [esi + 8]
// 0097e803  83caff               or edx, 0xffffffff
// 0097e806  f00fc111             lock xadd dword ptr [ecx], edx
// 0097e80a  750a                 jne 0x97e816
// 0097e80c  8b06                 mov eax, dword ptr [esi]
// 0097e80e  8b5008               mov edx, dword ptr [eax + 8]
// 0097e811  8bce                 mov ecx, esi
// 0097e813  5e                   pop esi
// 0097e814  ffe2                 jmp edx
// 0097e816  5e                   pop esi
// 0097e817  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
