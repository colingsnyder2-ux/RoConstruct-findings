// roc 2010-06 004b0e30  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b0e30
//
// 004b0e30  51                   push ecx
// 004b0e31  56                   push esi
// 004b0e32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b0e36  51                   push ecx
// 004b0e37  56                   push esi
// 004b0e38  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b0e40  e8cbc2ffff           call 0x4ad110
// 004b0e45  83c408               add esp, 8
// 004b0e48  8bc6                 mov eax, esi
// 004b0e4a  5e                   pop esi
// 004b0e4b  59                   pop ecx
// 004b0e4c  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
