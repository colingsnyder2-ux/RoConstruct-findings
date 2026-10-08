// from server: 100% by auto
// roc 2009-06 00899a10  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899a10
//
// 00899a10  56                   push esi
// 00899a11  8b350cb3a400         mov esi, dword ptr [0xa4b30c]
// 00899a17  85f6                 test esi, esi
// 00899a19  742b                 je 0x899a46
// 00899a1b  8d4604               lea eax, [esi + 4]
// 00899a1e  83c9ff               or ecx, 0xffffffff
// 00899a21  f00fc108             lock xadd dword ptr [eax], ecx
// 00899a25  751f                 jne 0x899a46
// 00899a27  8b16                 mov edx, dword ptr [esi]
// 00899a29  8b4204               mov eax, dword ptr [edx + 4]
// 00899a2c  8bce                 mov ecx, esi
// 00899a2e  ffd0                 call eax
// 00899a30  8d4e08               lea ecx, [esi + 8]
// 00899a33  83caff               or edx, 0xffffffff
// 00899a36  f00fc111             lock xadd dword ptr [ecx], edx
// 00899a3a  750a                 jne 0x899a46
// 00899a3c  8b06                 mov eax, dword ptr [esi]
// 00899a3e  8b5008               mov edx, dword ptr [eax + 8]
// 00899a41  8bce                 mov ecx, esi
// 00899a43  5e                   pop esi
// 00899a44  ffe2                 jmp edx
// 00899a46  5e                   pop esi
// 00899a47  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
