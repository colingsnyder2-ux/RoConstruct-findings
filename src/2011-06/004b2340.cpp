// roc 2011-06 004b2340  unit: RBX::VObjectValue::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b2340
//
// 004b2340  51                   push ecx
// 004b2341  56                   push esi
// 004b2342  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b2346  51                   push ecx
// 004b2347  56                   push esi
// 004b2348  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b2350  e84badffff           call 0x4ad0a0
// 004b2355  83c408               add esp, 8
// 004b2358  8bc6                 mov eax, esi
// 004b235a  5e                   pop esi
// 004b235b  59                   pop ecx
// 004b235c  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
