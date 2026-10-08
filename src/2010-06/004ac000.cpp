// roc 2010-06 004ac000  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ac000
//
// 004ac000  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ac004  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ac008  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ac00c  56                   push esi
// 004ac00d  8b742408             mov esi, dword ptr [esp + 8]
// 004ac011  50                   push eax
// 004ac012  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ac016  51                   push ecx
// 004ac017  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ac01b  52                   push edx
// 004ac01c  50                   push eax
// 004ac01d  56                   push esi
// 004ac01e  e80dfeffff           call 0x4abe30
// 004ac023  8bc6                 mov eax, esi
// 004ac025  5e                   pop esi
// 004ac026  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
