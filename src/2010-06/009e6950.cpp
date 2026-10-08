// from server: 100% by auto
// roc 2010-06 009e6950  unit: seg_009e0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6950
//
// 009e6950  56                   push esi
// 009e6951  8b357cfac100         mov esi, dword ptr [0xc1fa7c]
// 009e6957  85f6                 test esi, esi
// 009e6959  742b                 je 0x9e6986
// 009e695b  8d4604               lea eax, [esi + 4]
// 009e695e  83c9ff               or ecx, 0xffffffff
// 009e6961  f00fc108             lock xadd dword ptr [eax], ecx
// 009e6965  751f                 jne 0x9e6986
// 009e6967  8b16                 mov edx, dword ptr [esi]
// 009e6969  8b4204               mov eax, dword ptr [edx + 4]
// 009e696c  8bce                 mov ecx, esi
// 009e696e  ffd0                 call eax
// 009e6970  8d4e08               lea ecx, [esi + 8]
// 009e6973  83caff               or edx, 0xffffffff
// 009e6976  f00fc111             lock xadd dword ptr [ecx], edx
// 009e697a  750a                 jne 0x9e6986
// 009e697c  8b06                 mov eax, dword ptr [esi]
// 009e697e  8b5008               mov edx, dword ptr [eax + 8]
// 009e6981  8bce                 mov ecx, esi
// 009e6983  5e                   pop esi
// 009e6984  ffe2                 jmp edx
// 009e6986  5e                   pop esi
// 009e6987  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??__Fmonth_map_ptr@?1??get_month_map_ptr@greg_month@gregorian@boost@@SA?AV?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@3@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
