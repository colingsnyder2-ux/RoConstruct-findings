// roc 2009-06 004ba0e0  unit: RBX::Network::Player  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ba0e0
//
// 004ba0e0  51                   push ecx
// 004ba0e1  56                   push esi
// 004ba0e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ba0e6  8d4120               lea eax, [ecx + 0x20]
// 004ba0e9  50                   push eax
// 004ba0ea  56                   push esi
// 004ba0eb  83c148               add ecx, 0x48
// 004ba0ee  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ba0f6  e8e5f2ffff           call 0x4b93e0
// 004ba0fb  8bc6                 mov eax, esi
// 004ba0fd  5e                   pop esi
// 004ba0fe  59                   pop ecx
// 004ba0ff  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?dereference@?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
