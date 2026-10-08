// roc 2007-03 0061a330  unit: seg_00610000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a330
//
// 0061a330  51                   push ecx
// 0061a331  56                   push esi
// 0061a332  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a336  51                   push ecx
// 0061a337  56                   push esi
// 0061a338  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0061a340  e8bbfdffff           call 0x61a100
// 0061a345  83c408               add esp, 8
// 0061a348  8bc6                 mov eax, esi
// 0061a34a  5e                   pop esi
// 0061a34b  59                   pop ecx
// 0061a34c  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
