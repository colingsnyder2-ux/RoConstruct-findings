// roc 2008-06 00491270  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491270
//
// 00491270  51                   push ecx
// 00491271  56                   push esi
// 00491272  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00491276  51                   push ecx
// 00491277  56                   push esi
// 00491278  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00491280  e83bd2ffff           call 0x48e4c0
// 00491285  83c408               add esp, 8
// 00491288  8bc6                 mov eax, esi
// 0049128a  5e                   pop esi
// 0049128b  59                   pop ecx
// 0049128c  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
