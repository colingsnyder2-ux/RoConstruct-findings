// roc 2009-06 008948f0  unit: seg_00890000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008948f0
//
// 008948f0  56                   push esi
// 008948f1  8b354cb1a300         mov esi, dword ptr [0xa3b14c]
// 008948f7  85f6                 test esi, esi
// 008948f9  742b                 je 0x894926
// 008948fb  8d4604               lea eax, [esi + 4]
// 008948fe  83c9ff               or ecx, 0xffffffff
// 00894901  f00fc108             lock xadd dword ptr [eax], ecx
// 00894905  751f                 jne 0x894926
// 00894907  8b16                 mov edx, dword ptr [esi]
// 00894909  8b4204               mov eax, dword ptr [edx + 4]
// 0089490c  8bce                 mov ecx, esi
// 0089490e  ffd0                 call eax
// 00894910  8d4e08               lea ecx, [esi + 8]
// 00894913  83caff               or edx, 0xffffffff
// 00894916  f00fc111             lock xadd dword ptr [ecx], edx
// 0089491a  750a                 jne 0x894926
// 0089491c  8b06                 mov eax, dword ptr [esi]
// 0089491e  8b5008               mov edx, dword ptr [eax + 8]
// 00894921  8bce                 mov ecx, esi
// 00894923  5e                   pop esi
// 00894924  ffe2                 jmp edx
// 00894926  5e                   pop esi
// 00894927  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
