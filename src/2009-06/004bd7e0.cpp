// roc 2009-06 004bd7e0  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bd7e0
//
// 004bd7e0  51                   push ecx
// 004bd7e1  56                   push esi
// 004bd7e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004bd7e6  51                   push ecx
// 004bd7e7  56                   push esi
// 004bd7e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bd7f0  e8cbd3ffff           call 0x4babc0
// 004bd7f5  83c408               add esp, 8
// 004bd7f8  8bc6                 mov eax, esi
// 004bd7fa  5e                   pop esi
// 004bd7fb  59                   pop ecx
// 004bd7fc  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
