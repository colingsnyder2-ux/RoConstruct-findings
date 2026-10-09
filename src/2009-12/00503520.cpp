// roc 2009-12 00503520  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00503520
//
// 00503520  51                   push ecx
// 00503521  56                   push esi
// 00503522  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00503526  51                   push ecx
// 00503527  56                   push esi
// 00503528  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00503530  e8ebc6ffff           call 0x4ffc20
// 00503535  83c408               add esp, 8
// 00503538  8bc6                 mov eax, esi
// 0050353a  5e                   pop esi
// 0050353b  59                   pop ecx
// 0050353c  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
