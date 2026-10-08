// roc 2008-06 0048da90  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048da90
//
// 0048da90  51                   push ecx
// 0048da91  56                   push esi
// 0048da92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048da96  8d4120               lea eax, [ecx + 0x20]
// 0048da99  50                   push eax
// 0048da9a  56                   push esi
// 0048da9b  83c148               add ecx, 0x48
// 0048da9e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048daa6  e855fbffff           call 0x48d600
// 0048daab  8bc6                 mov eax, esi
// 0048daad  5e                   pop esi
// 0048daae  59                   pop ecx
// 0048daaf  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?dereference@?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
