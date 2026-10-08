// roc 2012-06 005239a0  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005239a0
//
// 005239a0  51                   push ecx
// 005239a1  56                   push esi
// 005239a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005239a6  8d4120               lea eax, [ecx + 0x20]
// 005239a9  50                   push eax
// 005239aa  56                   push esi
// 005239ab  83c148               add ecx, 0x48
// 005239ae  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005239b6  e8e5f3ffff           call 0x522da0
// 005239bb  8bc6                 mov eax, esi
// 005239bd  5e                   pop esi
// 005239be  59                   pop ecx
// 005239bf  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?dereference@?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
