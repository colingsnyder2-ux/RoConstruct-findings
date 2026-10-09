// roc 2009-12 004fecf0  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fecf0
//
// 004fecf0  51                   push ecx
// 004fecf1  56                   push esi
// 004fecf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fecf6  8d4120               lea eax, [ecx + 0x20]
// 004fecf9  50                   push eax
// 004fecfa  56                   push esi
// 004fecfb  83c148               add ecx, 0x48
// 004fecfe  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004fed06  e885ecffff           call 0x4fd990
// 004fed0b  8bc6                 mov eax, esi
// 004fed0d  5e                   pop esi
// 004fed0e  59                   pop ecx
// 004fed0f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?dereference@?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
