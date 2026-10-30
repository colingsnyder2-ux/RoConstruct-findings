// roc 2009-06 005b9c90  unit: seg_005b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9c90
//
// 005b9c90  55                   push ebp
// 005b9c91  8bec                 mov ebp, esp
// 005b9c93  51                   push ecx
// 005b9c94  894dfc               mov dword ptr [ebp - 4], ecx
// 005b9c97  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b9c9a  e881280000           call 0x5bc520
// 005b9c9f  8bc8                 mov ecx, eax
// 005b9ca1  e85a17ffff           call 0x5ab400
// 005b9ca6  8be5                 mov esp, ebp
// 005b9ca8  5d                   pop ebp
// 005b9ca9  c3                   ret 
// copied from an identical function in another client (function ?empty@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp