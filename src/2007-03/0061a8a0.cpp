// roc 2007-03 0061a8a0  unit: seg_00610000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a8a0
//
// 0061a8a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061a8a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061a8a8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061a8ac  56                   push esi
// 0061a8ad  8b742408             mov esi, dword ptr [esp + 8]
// 0061a8b1  50                   push eax
// 0061a8b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061a8b6  51                   push ecx
// 0061a8b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061a8bb  52                   push edx
// 0061a8bc  50                   push eax
// 0061a8bd  56                   push esi
// 0061a8be  e84dfeffff           call 0x61a710
// 0061a8c3  8bc6                 mov eax, esi
// 0061a8c5  5e                   pop esi
// 0061a8c6  c3                   ret 
// library rbxgs-net/Player.cpp (function ?invoke@?$function_obj_invoker2@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V67@@function@detail@boost@@SA?AV?$iterator_range@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@AATfunction_buffer@234@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
