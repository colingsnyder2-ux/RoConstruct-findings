// roc 2012-06 00523970  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00523970
//
// 00523970  8b442418             mov eax, dword ptr [esp + 0x18]
// 00523974  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00523978  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052397c  56                   push esi
// 0052397d  8b742408             mov esi, dword ptr [esp + 8]
// 00523981  50                   push eax
// 00523982  8b442414             mov eax, dword ptr [esp + 0x14]
// 00523986  51                   push ecx
// 00523987  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052398b  52                   push edx
// 0052398c  50                   push eax
// 0052398d  56                   push esi
// 0052398e  e81dfeffff           call 0x5237b0
// 00523993  8bc6                 mov eax, esi
// 00523995  5e                   pop esi
// 00523996  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
