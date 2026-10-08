// from server: 100% by auto
// roc 2007-08 00779a20  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a20
//
// 00779a20  56                   push esi
// 00779a21  8b35441c8c00         mov esi, dword ptr [0x8c1c44]
// 00779a27  85f6                 test esi, esi
// 00779a29  742b                 je 0x779a56
// 00779a2b  8d4604               lea eax, [esi + 4]
// 00779a2e  83c9ff               or ecx, 0xffffffff
// 00779a31  f00fc108             lock xadd dword ptr [eax], ecx
// 00779a35  751f                 jne 0x779a56
// 00779a37  8b16                 mov edx, dword ptr [esi]
// 00779a39  8b4204               mov eax, dword ptr [edx + 4]
// 00779a3c  8bce                 mov ecx, esi
// 00779a3e  ffd0                 call eax
// 00779a40  8d4e08               lea ecx, [esi + 8]
// 00779a43  83caff               or edx, 0xffffffff
// 00779a46  f00fc111             lock xadd dword ptr [ecx], edx
// 00779a4a  750a                 jne 0x779a56
// 00779a4c  8b06                 mov eax, dword ptr [esi]
// 00779a4e  8b5008               mov edx, dword ptr [eax + 8]
// 00779a51  8bce                 mov ecx, esi
// 00779a53  5e                   pop esi
// 00779a54  ffe2                 jmp edx
// 00779a56  5e                   pop esi
// 00779a57  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
