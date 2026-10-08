// roc 2012-06 0044d080  unit: PasteVerb  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044d080
//
// 0044d080  8b5108               mov edx, dword ptr [ecx + 8]
// 0044d083  8b442404             mov eax, dword ptr [esp + 4]
// 0044d087  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0044d08a  8910                 mov dword ptr [eax], edx
// 0044d08c  894804               mov dword ptr [eax + 4], ecx
// 0044d08f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?end@?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QBE?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
