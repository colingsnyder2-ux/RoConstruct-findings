// roc 2012-06 006dde00  unit: RBX::DataModel::W4GearType::?$EnumDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006dde00
//
// 006dde00  56                   push esi
// 006dde01  8b7104               mov esi, dword ptr [ecx + 4]
// 006dde04  85f6                 test esi, esi
// 006dde06  742b                 je 0x6dde33
// 006dde08  8d4604               lea eax, [esi + 4]
// 006dde0b  83c9ff               or ecx, 0xffffffff
// 006dde0e  f00fc108             lock xadd dword ptr [eax], ecx
// 006dde12  751f                 jne 0x6dde33
// 006dde14  8b16                 mov edx, dword ptr [esi]
// 006dde16  8b4204               mov eax, dword ptr [edx + 4]
// 006dde19  8bce                 mov ecx, esi
// 006dde1b  ffd0                 call eax
// 006dde1d  8d4e08               lea ecx, [esi + 8]
// 006dde20  83caff               or edx, 0xffffffff
// 006dde23  f00fc111             lock xadd dword ptr [ecx], edx
// 006dde27  750a                 jne 0x6dde33
// 006dde29  8b06                 mov eax, dword ptr [esi]
// 006dde2b  8b5008               mov edx, dword ptr [eax + 8]
// 006dde2e  8bce                 mov ecx, esi
// 006dde30  5e                   pop esi
// 006dde31  ffe2                 jmp edx
// 006dde33  5e                   pop esi
// 006dde34  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
