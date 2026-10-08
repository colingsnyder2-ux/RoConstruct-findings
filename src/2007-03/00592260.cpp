// roc 2007-03 00592260  unit: seg_00590000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592260
//
// 00592260  8b5108               mov edx, dword ptr [ecx + 8]
// 00592263  8b442404             mov eax, dword ptr [esp + 4]
// 00592267  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059226a  8910                 mov dword ptr [eax], edx
// 0059226c  894804               mov dword ptr [eax + 4], ecx
// 0059226f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?end@?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QBE?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
