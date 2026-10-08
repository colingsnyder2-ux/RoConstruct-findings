// roc 2007-03 0061a100  unit: seg_00610000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a100
//
// 0061a100  51                   push ecx
// 0061a101  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061a105  56                   push esi
// 0061a106  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a10a  56                   push esi
// 0061a10b  c744240800000000     mov dword ptr [esp + 8], 0
// 0061a113  e828feffff           call 0x619f40
// 0061a118  8bc6                 mov eax, esi
// 0061a11a  5e                   pop esi
// 0061a11b  59                   pop ecx
// 0061a11c  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$dereference@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@@iterator_core_access@boost@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
