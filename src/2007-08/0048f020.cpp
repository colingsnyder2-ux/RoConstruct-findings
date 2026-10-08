// roc 2007-08 0048f020  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f020
//
// 0048f020  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048f024  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f028  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048f02c  56                   push esi
// 0048f02d  8b742408             mov esi, dword ptr [esp + 8]
// 0048f031  50                   push eax
// 0048f032  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048f036  51                   push ecx
// 0048f037  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f03b  52                   push edx
// 0048f03c  50                   push eax
// 0048f03d  56                   push esi
// 0048f03e  e87df3ffff           call 0x48e3c0
// 0048f043  8bc6                 mov eax, esi
// 0048f045  5e                   pop esi
// 0048f046  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
