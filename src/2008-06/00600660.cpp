// roc 2008-06 00600660  unit: RBX::VTool::?$BoundPropGetSet  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600660
//
// 00600660  56                   push esi
// 00600661  8b7104               mov esi, dword ptr [ecx + 4]
// 00600664  85f6                 test esi, esi
// 00600666  742b                 je 0x600693
// 00600668  8d4604               lea eax, [esi + 4]
// 0060066b  83c9ff               or ecx, 0xffffffff
// 0060066e  f00fc108             lock xadd dword ptr [eax], ecx
// 00600672  751f                 jne 0x600693
// 00600674  8b16                 mov edx, dword ptr [esi]
// 00600676  8b4204               mov eax, dword ptr [edx + 4]
// 00600679  8bce                 mov ecx, esi
// 0060067b  ffd0                 call eax
// 0060067d  8d4e08               lea ecx, [esi + 8]
// 00600680  83caff               or edx, 0xffffffff
// 00600683  f00fc111             lock xadd dword ptr [ecx], edx
// 00600687  750a                 jne 0x600693
// 00600689  8b06                 mov eax, dword ptr [esi]
// 0060068b  8b5008               mov edx, dword ptr [eax + 8]
// 0060068e  8bce                 mov ecx, esi
// 00600690  5e                   pop esi
// 00600691  ffe2                 jmp edx
// 00600693  5e                   pop esi
// 00600694  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
