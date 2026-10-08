// roc 2009-06 004ba0b0  unit: RBX::Network::Player  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ba0b0
//
// 004ba0b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ba0b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ba0b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ba0bc  56                   push esi
// 004ba0bd  8b742408             mov esi, dword ptr [esp + 8]
// 004ba0c1  50                   push eax
// 004ba0c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ba0c6  51                   push ecx
// 004ba0c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ba0cb  52                   push edx
// 004ba0cc  50                   push eax
// 004ba0cd  56                   push esi
// 004ba0ce  e8bdfcffff           call 0x4b9d90
// 004ba0d3  8bc6                 mov eax, esi
// 004ba0d5  5e                   pop esi
// 004ba0d6  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
