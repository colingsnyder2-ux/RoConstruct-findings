// roc 2009-12 004fecc0  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fecc0
//
// 004fecc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fecc4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fecc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004feccc  56                   push esi
// 004feccd  8b742408             mov esi, dword ptr [esp + 8]
// 004fecd1  50                   push eax
// 004fecd2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fecd6  51                   push ecx
// 004fecd7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fecdb  52                   push edx
// 004fecdc  50                   push eax
// 004fecdd  56                   push esi
// 004fecde  e8bdfcffff           call 0x4fe9a0
// 004fece3  8bc6                 mov eax, esi
// 004fece5  5e                   pop esi
// 004fece6  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
