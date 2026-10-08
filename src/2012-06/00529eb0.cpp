// roc 2012-06 00529eb0  unit: RBX::VObjectValue::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00529eb0
//
// 00529eb0  51                   push ecx
// 00529eb1  56                   push esi
// 00529eb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00529eb6  51                   push ecx
// 00529eb7  56                   push esi
// 00529eb8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00529ec0  e80bb1ffff           call 0x524fd0
// 00529ec5  83c408               add esp, 8
// 00529ec8  8bc6                 mov eax, esi
// 00529eca  5e                   pop esi
// 00529ecb  59                   pop ecx
// 00529ecc  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
