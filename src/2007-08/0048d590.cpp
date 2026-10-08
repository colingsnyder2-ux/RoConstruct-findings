// roc 2007-08 0048d590  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048d590
//
// 0048d590  51                   push ecx
// 0048d591  56                   push esi
// 0048d592  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048d596  51                   push ecx
// 0048d597  56                   push esi
// 0048d598  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048d5a0  e87bd1ffff           call 0x48a720
// 0048d5a5  83c408               add esp, 8
// 0048d5a8  8bc6                 mov eax, esi
// 0048d5aa  5e                   pop esi
// 0048d5ab  59                   pop ecx
// 0048d5ac  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??D?$iterator_facade@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Uforward_traversal_tag@2@V34@H@boost@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
